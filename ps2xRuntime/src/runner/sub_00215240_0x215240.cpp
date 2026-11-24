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

// Function: sub_00215240
// Address: 0x215240 - 0x2152ec
void sub_00215240_0x215240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215240_0x215240");
#endif

    switch (ctx->pc) {
        case 0x215274u: goto label_215274;
        case 0x215288u: goto label_215288;
        case 0x215298u: goto label_215298;
        case 0x2152acu: goto label_2152ac;
        default: break;
    }

    ctx->pc = 0x215240u;

    // 0x215240: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x215240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x215244: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x215244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x215248: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x215248u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21524c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21524cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x215250: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x215250u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x215254: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x215254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x215258: 0x26221fb8  addiu       $v0, $s1, 0x1FB8
    ctx->pc = 0x215258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8120));
    // 0x21525c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21525cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x215260: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x215260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x215264: 0x8c520014  lw          $s2, 0x14($v0)
    ctx->pc = 0x215264u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x215268: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x215268u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x21526c: 0xc084074  jal         func_2101D0
    ctx->pc = 0x21526Cu;
    SET_GPR_U32(ctx, 31, 0x215274u);
    ctx->pc = 0x215270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21526Cu;
    // 0x215270: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2101D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2101D0u, 0x21526Cu, 0x215274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215274u;
label_215274:
    // 0x215274: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x215274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215278: 0x10530015  beq         $v0, $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x215278u;
    {
        const bool branch_taken_0x215278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x21527Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215278u;
        // 0x21527c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215278) {
            ctx->pc = 0x2152D0u;
            goto label_2152d0;
        }
    }
    ctx->pc = 0x215280u;
    // 0x215280: 0xc084074  jal         func_2101D0
    ctx->pc = 0x215280u;
    SET_GPR_U32(ctx, 31, 0x215288u);
    ctx->pc = 0x2101D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2101D0u, 0x215280u, 0x215288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215288u;
label_215288:
    // 0x215288: 0x54530012  bnel        $v0, $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x215288u;
    {
        const bool branch_taken_0x215288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x215288) {
            ctx->pc = 0x21528Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215288u;
            // 0x21528c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2152D4u;
            goto label_2152d4;
        }
    }
    ctx->pc = 0x215290u;
    // 0x215290: 0xc0854bc  jal         func_2152F0
    ctx->pc = 0x215290u;
    SET_GPR_U32(ctx, 31, 0x215298u);
    ctx->pc = 0x215294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215290u;
    // 0x215294: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2152F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2152F0u, 0x215290u, 0x215298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215298u;
label_215298:
    // 0x215298: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x215298u;
    {
        const bool branch_taken_0x215298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21529Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215298u;
        // 0x21529c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215298) {
            ctx->pc = 0x2152D0u;
            goto label_2152d0;
        }
    }
    ctx->pc = 0x2152A0u;
    // 0x2152a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2152a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2152a4: 0xc084068  jal         func_2101A0
    ctx->pc = 0x2152A4u;
    SET_GPR_U32(ctx, 31, 0x2152ACu);
    ctx->pc = 0x2152A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2152A4u;
    // 0x2152a8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2101A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2101A0u, 0x2152A4u, 0x2152ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2152ACu;
label_2152ac:
    // 0x2152ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2152acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2152b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2152b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2152b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2152b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2152b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2152b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2152bc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2152bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2152c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2152c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2152c4: 0x8085528  j           func_2154A0
    ctx->pc = 0x2152C4u;
    ctx->pc = 0x2152C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2152C4u;
    // 0x2152c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2154A0u;
    sub_002154A0_0x2154a0(rdram, ctx, runtime); return;
    ctx->pc = 0x2152CCu;
    // 0x2152cc: 0x0  nop
    ctx->pc = 0x2152ccu;
    // NOP
label_2152d0:
    // 0x2152d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2152d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2152d4:
    // 0x2152d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2152d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2152d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2152d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2152dc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2152dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2152e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2152e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2152e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2152E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2152E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2152E4u;
        // 0x2152e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2152E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2152ECu;
}
