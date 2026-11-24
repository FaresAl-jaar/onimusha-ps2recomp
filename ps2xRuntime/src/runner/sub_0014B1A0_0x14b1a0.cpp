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

// Function: sub_0014B1A0
// Address: 0x14b1a0 - 0x14b27c
void sub_0014B1A0_0x14b1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B1A0_0x14b1a0");
#endif

    switch (ctx->pc) {
        case 0x14b260u: goto label_14b260;
        default: break;
    }

    ctx->pc = 0x14b1a0u;

    // 0x14b1a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14b1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14b1a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x14b1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14b1a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14b1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14b1ac: 0x90850054  lbu         $a1, 0x54($a0)
    ctx->pc = 0x14b1acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x14b1b0: 0x10a3002f  beq         $a1, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x14B1B0u;
    {
        const bool branch_taken_0x14b1b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x14B1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B1B0u;
        // 0x14b1b4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b1b0) {
            ctx->pc = 0x14B270u;
            goto label_14b270;
        }
    }
    ctx->pc = 0x14B1B8u;
    // 0x14b1b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14b1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b1bc: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x14B1BCu;
    {
        const bool branch_taken_0x14b1bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x14b1bc) {
            ctx->pc = 0x14B200u;
            goto label_14b200;
        }
    }
    ctx->pc = 0x14B1C4u;
    // 0x14b1c4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14B1C4u;
    {
        const bool branch_taken_0x14b1c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b1c4) {
            ctx->pc = 0x14B1D8u;
            goto label_14b1d8;
        }
    }
    ctx->pc = 0x14B1CCu;
    // 0x14b1cc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x14B1CCu;
    {
        const bool branch_taken_0x14b1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b1cc) {
            ctx->pc = 0x14B270u;
            goto label_14b270;
        }
    }
    ctx->pc = 0x14B1D4u;
    // 0x14b1d4: 0x0  nop
    ctx->pc = 0x14b1d4u;
    // NOP
label_14b1d8:
    // 0x14b1d8: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x14b1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14b1dc: 0xa0c30054  sb          $v1, 0x54($a2)
    ctx->pc = 0x14b1dcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 84), (uint8_t)GPR_U32(ctx, 3));
    // 0x14b1e0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x14b1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14b1e4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x14b1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14b1e8: 0xa4c30056  sh          $v1, 0x56($a2)
    ctx->pc = 0x14b1e8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 86), (uint16_t)GPR_U32(ctx, 3));
    // 0x14b1ec: 0x94c3085a  lhu         $v1, 0x85A($a2)
    ctx->pc = 0x14b1ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2138)));
    // 0x14b1f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14b1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14b1f4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x14b1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x14b1f8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x14B1F8u;
    {
        const bool branch_taken_0x14b1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B1F8u;
        // 0x14b1fc: 0xac640458  sw          $a0, 0x458($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1112), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b1f8) {
            ctx->pc = 0x14B270u;
            goto label_14b270;
        }
    }
    ctx->pc = 0x14B200u;
label_14b200:
    // 0x14b200: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x14b200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x14b204: 0x8c240fe0  lw          $a0, 0xFE0($at)
    ctx->pc = 0x14b204u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x810FE0u));
    // 0x14b208: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x14b208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x14b20c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x14b20cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x14b210: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x14B210u;
    {
        const bool branch_taken_0x14b210 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B210u;
        // 0x14b214: 0x24a40001  addiu       $a0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b210) {
            ctx->pc = 0x14B240u;
            goto label_14b240;
        }
    }
    ctx->pc = 0x14B218u;
    // 0x14b218: 0x3c03ffef  lui         $v1, 0xFFEF
    ctx->pc = 0x14b218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65519 << 16));
    // 0x14b21c: 0xa0c40054  sb          $a0, 0x54($a2)
    ctx->pc = 0x14b21cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 84), (uint8_t)GPR_U32(ctx, 4));
    // 0x14b220: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x14b220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x14b224: 0x8c240fe0  lw          $a0, 0xFE0($at)
    ctx->pc = 0x14b224u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x810FE0u));
    // 0x14b228: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x14b228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x14b22c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x14b22cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x14b230: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x14b230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x14b234: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x14B234u;
    {
        const bool branch_taken_0x14b234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B234u;
        // 0x14b238: 0xac230fe0  sw          $v1, 0xFE0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4064), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b234) {
            ctx->pc = 0x14B270u;
            goto label_14b270;
        }
    }
    ctx->pc = 0x14B23Cu;
    // 0x14b23c: 0x0  nop
    ctx->pc = 0x14b23cu;
    // NOP
label_14b240:
    // 0x14b240: 0x94c30056  lhu         $v1, 0x56($a2)
    ctx->pc = 0x14b240u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 86)));
    // 0x14b244: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x14B244u;
    {
        const bool branch_taken_0x14b244 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b244) {
            ctx->pc = 0x14B268u;
            goto label_14b268;
        }
    }
    ctx->pc = 0x14B24Cu;
    // 0x14b24c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x14b24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14b250: 0x278485b0  addiu       $a0, $gp, -0x7A50
    ctx->pc = 0x14b250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935984));
    // 0x14b254: 0xa0c20054  sb          $v0, 0x54($a2)
    ctx->pc = 0x14b254u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 84), (uint8_t)GPR_U32(ctx, 2));
    // 0x14b258: 0xc055190  jal         func_154640
    ctx->pc = 0x14B258u;
    SET_GPR_U32(ctx, 31, 0x14B260u);
    ctx->pc = 0x14B25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B258u;
    // 0x14b25c: 0x24c50458  addiu       $a1, $a2, 0x458 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154640u, 0x14B258u, 0x14B260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B260u;
label_14b260:
    // 0x14b260: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14B260u;
    {
        const bool branch_taken_0x14b260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b260) {
            ctx->pc = 0x14B270u;
            goto label_14b270;
        }
    }
    ctx->pc = 0x14B268u;
label_14b268:
    // 0x14b268: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x14b268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x14b26c: 0xa4c30056  sh          $v1, 0x56($a2)
    ctx->pc = 0x14b26cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 86), (uint16_t)GPR_U32(ctx, 3));
label_14b270:
    // 0x14b270: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b274: 0x3e00008  jr          $ra
    ctx->pc = 0x14B274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B274u;
        // 0x14b278: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B27Cu;
}
