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

// Function: sub_00254560
// Address: 0x254560 - 0x25460c
void sub_00254560_0x254560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254560_0x254560");
#endif

    switch (ctx->pc) {
        case 0x254588u: goto label_254588;
        case 0x2545d0u: goto label_2545d0;
        case 0x2545ecu: goto label_2545ec;
        default: break;
    }

    ctx->pc = 0x254560u;

    // 0x254560: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x254560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x254564: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x254564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x254568: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x254568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25456c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25456cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x254570: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x254570u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254574: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x254574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254578: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x254578u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x25457c: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x25457cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x254580: 0xc05e360  jal         func_178D80
    ctx->pc = 0x254580u;
    SET_GPR_U32(ctx, 31, 0x254588u);
    ctx->pc = 0x254584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254580u;
    // 0x254584: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x254580u, 0x254588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254588u;
label_254588:
    // 0x254588: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x254588u;
    {
        const bool branch_taken_0x254588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x254588) {
            ctx->pc = 0x254598u;
            goto label_254598;
        }
    }
    ctx->pc = 0x254590u;
    // 0x254590: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x254590u;
    {
        const bool branch_taken_0x254590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254590u;
        // 0x254594: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254590) {
            ctx->pc = 0x2545F8u;
            goto label_2545f8;
        }
    }
    ctx->pc = 0x254598u;
label_254598:
    // 0x254598: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x254598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x25459c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x25459cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2545a0: 0x3c030410  lui         $v1, 0x410
    ctx->pc = 0x2545a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1040 << 16));
    // 0x2545a4: 0x34640014  ori         $a0, $v1, 0x14
    ctx->pc = 0x2545a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20);
    // 0x2545a8: 0x24030061  addiu       $v1, $zero, 0x61
    ctx->pc = 0x2545a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x2545ac: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x2545acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x2545b0: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x2545b0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x2545b4: 0x92231110  lbu         $v1, 0x1110($s1)
    ctx->pc = 0x2545b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4368)));
    // 0x2545b8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2545B8u;
    {
        const bool branch_taken_0x2545b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2545BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2545B8u;
        // 0x2545bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2545b8) {
            ctx->pc = 0x2545D8u;
            goto label_2545d8;
        }
    }
    ctx->pc = 0x2545C0u;
    // 0x2545c0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2545c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2545c4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2545c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2545c8: 0xc0954bc  jal         func_2552F0
    ctx->pc = 0x2545C8u;
    SET_GPR_U32(ctx, 31, 0x2545D0u);
    ctx->pc = 0x2545CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2545C8u;
    // 0x2545cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2552F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2552F0u, 0x2545C8u, 0x2545D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2545D0u;
label_2545d0:
    // 0x2545d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2545D0u;
    {
        const bool branch_taken_0x2545d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2545d0) {
            ctx->pc = 0x2545F0u;
            goto label_2545f0;
        }
    }
    ctx->pc = 0x2545D8u;
label_2545d8:
    // 0x2545d8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2545d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2545dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2545dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2545e0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2545e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2545e4: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x2545E4u;
    SET_GPR_U32(ctx, 31, 0x2545ECu);
    ctx->pc = 0x2545E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2545E4u;
    // 0x2545e8: 0x2484cc60  addiu       $a0, $a0, -0x33A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x2545E4u, 0x2545ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2545ECu;
label_2545ec:
    // 0x2545ec: 0x0  nop
    ctx->pc = 0x2545ecu;
    // NOP
label_2545f0:
    // 0x2545f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2545f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2545f4: 0x0  nop
    ctx->pc = 0x2545f4u;
    // NOP
label_2545f8:
    // 0x2545f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2545f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2545fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2545fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254600: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x254600u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254604: 0x3e00008  jr          $ra
    ctx->pc = 0x254604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254604u;
        // 0x254608: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25460Cu;
}
