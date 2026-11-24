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

// Function: sub_00331530
// Address: 0x331530 - 0x331614
void sub_00331530_0x331530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00331530_0x331530");
#endif

    switch (ctx->pc) {
        case 0x331588u: goto label_331588;
        case 0x3315b0u: goto label_3315b0;
        case 0x3315ecu: goto label_3315ec;
        default: break;
    }

    ctx->pc = 0x331530u;

    // 0x331530: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x331530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x331534: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x331534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x331538: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x331538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x33153c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x33153cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x331540: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x331540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x331544: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x331544u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331548: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x331548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33154c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x33154cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331550: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x331550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x331554: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x331554u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331558: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x331558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33155c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x33155cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331560: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x331560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x331564: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x331564u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x331568: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x331568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x33156c: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x33156Cu;
    {
        const bool branch_taken_0x33156c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x331570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33156Cu;
        // 0x331570: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33156c) {
            ctx->pc = 0x3315F0u;
            goto label_3315f0;
        }
    }
    ctx->pc = 0x331574u;
    // 0x331574: 0x90b50001  lbu         $s5, 0x1($a1)
    ctx->pc = 0x331574u;
    SET_GPR_ZE32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x331578: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x331578u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x33157c: 0x94a50004  lhu         $a1, 0x4($a1)
    ctx->pc = 0x33157cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x331580: 0xc0bd168  jal         func_2F45A0
    ctx->pc = 0x331580u;
    SET_GPR_U32(ctx, 31, 0x331588u);
    ctx->pc = 0x331584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331580u;
    // 0x331584: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F45A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F45A0u, 0x331580u, 0x331588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331588u;
label_331588:
    // 0x331588: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x331588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33158c: 0x2a3082a  slt         $at, $s5, $v1
    ctx->pc = 0x33158cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x331590: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x331590u;
    {
        const bool branch_taken_0x331590 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x331590) {
            ctx->pc = 0x3315F0u;
            goto label_3315f0;
        }
    }
    ctx->pc = 0x331598u;
    // 0x331598: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x331598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x33159c: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x33159cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x3315a0: 0x94450004  lhu         $a1, 0x4($v0)
    ctx->pc = 0x3315a0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3315a4: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x3315a4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x3315a8: 0xc0bd138  jal         func_2F44E0
    ctx->pc = 0x3315A8u;
    SET_GPR_U32(ctx, 31, 0x3315B0u);
    ctx->pc = 0x3315ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3315A8u;
    // 0x3315ac: 0x2484bb30  addiu       $a0, $a0, -0x44D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F44E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F44E0u, 0x3315A8u, 0x3315B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3315B0u;
label_3315b0:
    // 0x3315b0: 0x2921821  addu        $v1, $s4, $s2
    ctx->pc = 0x3315b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x3315b4: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x3315b4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x3315b8: 0x2464fff8  addiu       $a0, $v1, -0x8
    ctx->pc = 0x3315b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x3315bc: 0x304affff  andi        $t2, $v0, 0xFFFF
    ctx->pc = 0x3315bcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3315c0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3315c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3315c4: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x3315c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3315c8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3315c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3315cc: 0x3266ffff  andi        $a2, $s3, 0xFFFF
    ctx->pc = 0x3315ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x3315d0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3315d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3315d4: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x3315d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x3315d8: 0x24080012  addiu       $t0, $zero, 0x12
    ctx->pc = 0x3315d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3315dc: 0x2529ce10  addiu       $t1, $t1, -0x31F0
    ctx->pc = 0x3315dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294954512));
    // 0x3315e0: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x3315e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3315e4: 0xc095f88  jal         func_257E20
    ctx->pc = 0x3315E4u;
    SET_GPR_U32(ctx, 31, 0x3315ECu);
    ctx->pc = 0x3315E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3315E4u;
    // 0x3315e8: 0x1425023  subu        $t2, $t2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257E20u, 0x3315E4u, 0x3315ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3315ECu;
label_3315ec:
    // 0x3315ec: 0x0  nop
    ctx->pc = 0x3315ecu;
    // NOP
label_3315f0:
    // 0x3315f0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3315f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3315f4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3315f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3315f8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3315f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3315fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3315fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x331600: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x331600u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x331604: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x331604u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x331608: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x331608u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33160c: 0x3e00008  jr          $ra
    ctx->pc = 0x33160Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33160Cu;
        // 0x331610: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33160Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331614u;
}
