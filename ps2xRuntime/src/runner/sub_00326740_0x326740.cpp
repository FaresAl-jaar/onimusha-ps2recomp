#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00326740
// Address: 0x326740 - 0x3267f8
void sub_00326740_0x326740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326740_0x326740");
#endif

    ctx->pc = 0x326740u;

    // 0x326740: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x326740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x326744: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x326744u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x326748: 0x8c22ad98  lw          $v0, -0x5268($at)
    ctx->pc = 0x326748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294946200)));
    // 0x32674c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x32674cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x326750: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x326750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x326754: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x326754u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x326758: 0xac22ad98  sw          $v0, -0x5268($at)
    ctx->pc = 0x326758u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294946200), GPR_U32(ctx, 2));
    // 0x32675c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x32675cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x326760: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x326760u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x326764: 0x9022ad88  lbu         $v0, -0x5278($at)
    ctx->pc = 0x326764u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946184)));
    // 0x326768: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x326768u;
    {
        const bool branch_taken_0x326768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32676Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326768u;
        // 0x32676c: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326768) {
            ctx->pc = 0x3267E8u;
            goto label_3267e8;
        }
    }
    ctx->pc = 0x326770u;
    // 0x326770: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x326770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x326774: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x326774u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x326778: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x326778u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x32677c: 0xa022ad88  sb          $v0, -0x5278($at)
    ctx->pc = 0x32677cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294946184), (uint8_t)GPR_U32(ctx, 2));
    // 0x326780: 0x31030080  andi        $v1, $t0, 0x80
    ctx->pc = 0x326780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)128);
    // 0x326784: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x326784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x326788: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x326788u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x32678c: 0x902aad88  lbu         $t2, -0x5278($at)
    ctx->pc = 0x32678cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294946184)));
    // 0x326790: 0xa1040  sll         $v0, $t2, 1
    ctx->pc = 0x326790u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x326794: 0x3401b260  ori         $at, $zero, 0xB260
    ctx->pc = 0x326794u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)45664);
    // 0x326798: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x326798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x32679c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x32679cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3267a0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3267a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3267a4: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x3267a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x3267a8: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x3267a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x3267ac: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x3267acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x3267b0: 0xac480008  sw          $t0, 0x8($v0)
    ctx->pc = 0x3267b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 8));
    // 0x3267b4: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3267B4u;
    {
        const bool branch_taken_0x3267b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3267B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3267B4u;
        // 0x3267b8: 0xa049000d  sb          $t1, 0xD($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 13), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3267b4) {
            ctx->pc = 0x3267E0u;
            goto label_3267e0;
        }
    }
    ctx->pc = 0x3267BCu;
    // 0x3267bc: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x3267BCu;
    {
        const bool branch_taken_0x3267bc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x3267bc) {
            ctx->pc = 0x3267E0u;
            goto label_3267e0;
        }
    }
    ctx->pc = 0x3267C4u;
    // 0x3267c4: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x3267c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3267c8: 0x7c430020  sq          $v1, 0x20($v0)
    ctx->pc = 0x3267c8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 3));
    // 0x3267cc: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x3267ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x3267d0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x3267d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3267d4: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x3267d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x3267d8: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x3267d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x3267dc: 0x0  nop
    ctx->pc = 0x3267dcu;
    // NOP
label_3267e0:
    // 0x3267e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3267E0u;
    {
        const bool branch_taken_0x3267e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3267e0) {
            ctx->pc = 0x3267F0u;
            goto label_3267f0;
        }
    }
    ctx->pc = 0x3267E8u;
label_3267e8:
    // 0x3267e8: 0x3c020091  lui         $v0, 0x91
    ctx->pc = 0x3267e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)145 << 16));
    // 0x3267ec: 0x24420d00  addiu       $v0, $v0, 0xD00
    ctx->pc = 0x3267ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3328));
label_3267f0:
    // 0x3267f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3267F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3267F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3267F8u;
}
