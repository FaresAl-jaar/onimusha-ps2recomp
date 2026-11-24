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

// Function: sub_00303200
// Address: 0x303200 - 0x3032d8
void sub_00303200_0x303200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00303200_0x303200");
#endif

    switch (ctx->pc) {
        case 0x303230u: goto label_303230;
        case 0x30324cu: goto label_30324c;
        case 0x303294u: goto label_303294;
        default: break;
    }

    ctx->pc = 0x303200u;

    // 0x303200: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x303200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x303204: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x303204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x303208: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x303208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x30320c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x30320cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x303210: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x303210u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303214: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x303214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x303218: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x303218u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30321c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30321cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x303220: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x303220u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303224: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x303224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x303228: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x303228u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30322c: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x30322cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_303230:
    // 0x303230: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x303230u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x303234: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x303234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x303238: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x303238u;
    {
        const bool branch_taken_0x303238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30323Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303238u;
        // 0x30323c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303238) {
            ctx->pc = 0x3032A0u;
            goto label_3032a0;
        }
    }
    ctx->pc = 0x303240u;
    // 0x303240: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x303240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303244: 0xc049590  jal         func_125640
    ctx->pc = 0x303244u;
    SET_GPR_U32(ctx, 31, 0x30324Cu);
    ctx->pc = 0x303248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303244u;
    // 0x303248: 0x24060070  addiu       $a2, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x303244u, 0x30324Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30324Cu;
label_30324c:
    // 0x30324c: 0x92070000  lbu         $a3, 0x0($s0)
    ctx->pc = 0x30324cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x303250: 0x2403fff8  addiu       $v1, $zero, -0x8
    ctx->pc = 0x303250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x303254: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x303254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x303258: 0x32660007  andi        $a2, $s3, 0x7
    ctx->pc = 0x303258u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    // 0x30325c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x30325cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x303260: 0x3225ffff  andi        $a1, $s1, 0xFFFF
    ctx->pc = 0x303260u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x303264: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x303264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303268: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x303268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x30326c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x30326cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x303270: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x303270u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x303274: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x303274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x303278: 0x8e821c00  lw          $v0, 0x1C00($s4)
    ctx->pc = 0x303278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 7168)));
    // 0x30327c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x30327cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x303280: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x303280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x303284: 0xae831c00  sw          $v1, 0x1C00($s4)
    ctx->pc = 0x303284u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 7168), GPR_U32(ctx, 3));
    // 0x303288: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x303288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x30328c: 0xc0c0c6c  jal         func_3031B0
    ctx->pc = 0x30328Cu;
    SET_GPR_U32(ctx, 31, 0x303294u);
    ctx->pc = 0x303290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30328Cu;
    // 0x303290: 0xac501c04  sw          $s0, 0x1C04($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 7172), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3031B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3031B0u, 0x30328Cu, 0x303294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303294u;
label_303294:
    // 0x303294: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x303294u;
    {
        const bool branch_taken_0x303294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x303294) {
            ctx->pc = 0x3032B8u;
            goto label_3032b8;
        }
    }
    ctx->pc = 0x30329Cu;
    // 0x30329c: 0x0  nop
    ctx->pc = 0x30329cu;
    // NOP
label_3032a0:
    // 0x3032a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3032a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3032a4: 0x2e220040  sltiu       $v0, $s1, 0x40
    ctx->pc = 0x3032a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x3032a8: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x3032A8u;
    {
        const bool branch_taken_0x3032a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3032ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3032A8u;
        // 0x3032ac: 0x26100070  addiu       $s0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3032a8) {
            ctx->pc = 0x303230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_303230;
        }
    }
    ctx->pc = 0x3032B0u;
    // 0x3032b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3032b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3032b4: 0x0  nop
    ctx->pc = 0x3032b4u;
    // NOP
label_3032b8:
    // 0x3032b8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3032b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3032bc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3032bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3032c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3032c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3032c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3032c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3032c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3032c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3032cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3032ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3032d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3032D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3032D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3032D0u;
        // 0x3032d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3032D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3032D8u;
}
