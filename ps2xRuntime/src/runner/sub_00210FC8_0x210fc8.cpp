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

// Function: sub_00210FC8
// Address: 0x210fc8 - 0x211044
void sub_00210FC8_0x210fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210FC8_0x210fc8");
#endif

    switch (ctx->pc) {
        case 0x210fe8u: goto label_210fe8;
        case 0x21101cu: goto label_21101c;
        case 0x211024u: goto label_211024;
        default: break;
    }

    ctx->pc = 0x210fc8u;

    // 0x210fc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x210fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x210fcc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x210fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x210fd0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x210fd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210fd4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x210fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x210fd8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x210fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x210fdc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x210fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x210fe0: 0xc07f5da  jal         func_1FD768
    ctx->pc = 0x210FE0u;
    SET_GPR_U32(ctx, 31, 0x210FE8u);
    ctx->pc = 0x210FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210FE0u;
    // 0x210fe4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD768u, 0x210FE0u, 0x210FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210FE8u;
label_210fe8:
    // 0x210fe8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x210fe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210fec: 0x2a020007  slti        $v0, $s0, 0x7
    ctx->pc = 0x210fecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x210ff0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x210ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x210ff4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x210ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210ff8: 0x202180b  movn        $v1, $s0, $v0
    ctx->pc = 0x210ff8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 16));
    // 0x210ffc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x210ffcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211000: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x211000u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211004: 0x27a80004  addiu       $t0, $sp, 0x4
    ctx->pc = 0x211004u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x211008: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x211008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21100c: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x21100Cu;
    {
        const bool branch_taken_0x21100c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x211010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21100Cu;
        // 0x211010: 0x2431021  addu        $v0, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21100c) {
            ctx->pc = 0x21102Cu;
            goto label_21102c;
        }
    }
    ctx->pc = 0x211014u;
    // 0x211014: 0xc07ed0c  jal         func_1FB430
    ctx->pc = 0x211014u;
    SET_GPR_U32(ctx, 31, 0x21101Cu);
    ctx->pc = 0x1FB430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB430u, 0x211014u, 0x21101Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21101Cu;
label_21101c:
    // 0x21101c: 0xc07f642  jal         func_1FD908
    ctx->pc = 0x21101Cu;
    SET_GPR_U32(ctx, 31, 0x211024u);
    ctx->pc = 0x211020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21101Cu;
    // 0x211020: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD908u, 0x21101Cu, 0x211024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211024u;
label_211024:
    // 0x211024: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x211024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211028: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x211028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_21102c:
    // 0x21102c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x21102cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x211030: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x211030u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x211034: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x211034u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x211038: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x211038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21103c: 0x3e00008  jr          $ra
    ctx->pc = 0x21103Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21103Cu;
        // 0x211040: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21103Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211044u;
}
