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

// Function: sub_00346250
// Address: 0x346250 - 0x3462fc
void sub_00346250_0x346250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00346250_0x346250");
#endif

    switch (ctx->pc) {
        case 0x346270u: goto label_346270;
        case 0x346288u: goto label_346288;
        case 0x346298u: goto label_346298;
        case 0x3462b0u: goto label_3462b0;
        case 0x3462d8u: goto label_3462d8;
        case 0x3462e8u: goto label_3462e8;
        default: break;
    }

    ctx->pc = 0x346250u;

    // 0x346250: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x346250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x346254: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x346254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x346258: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x346258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34625c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34625cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x346260: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x346260u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346264: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x346264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x346268: 0xc0d18c0  jal         func_346300
    ctx->pc = 0x346268u;
    SET_GPR_U32(ctx, 31, 0x346270u);
    ctx->pc = 0x34626Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346268u;
    // 0x34626c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346300u, 0x346268u, 0x346270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346270u;
label_346270:
    // 0x346270: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x346270u;
    {
        const bool branch_taken_0x346270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x346270) {
            ctx->pc = 0x346290u;
            goto label_346290;
        }
    }
    ctx->pc = 0x346278u;
    // 0x346278: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x346278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x34627c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34627cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346280: 0xc0d186c  jal         func_3461B0
    ctx->pc = 0x346280u;
    SET_GPR_U32(ctx, 31, 0x346288u);
    ctx->pc = 0x346284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346280u;
    // 0x346284: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3461B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3461B0u, 0x346280u, 0x346288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346288u;
label_346288:
    // 0x346288: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x346288u;
    {
        const bool branch_taken_0x346288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x346288) {
            ctx->pc = 0x3462B0u;
            goto label_3462b0;
        }
    }
    ctx->pc = 0x346290u;
label_346290:
    // 0x346290: 0xc0d18d0  jal         func_346340
    ctx->pc = 0x346290u;
    SET_GPR_U32(ctx, 31, 0x346298u);
    ctx->pc = 0x346294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346290u;
    // 0x346294: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346340u, 0x346290u, 0x346298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346298u;
label_346298:
    // 0x346298: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x346298u;
    {
        const bool branch_taken_0x346298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x346298) {
            ctx->pc = 0x3462B0u;
            goto label_3462b0;
        }
    }
    ctx->pc = 0x3462A0u;
    // 0x3462a0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x3462a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3462a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3462a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3462a8: 0xc0d186c  jal         func_3461B0
    ctx->pc = 0x3462A8u;
    SET_GPR_U32(ctx, 31, 0x3462B0u);
    ctx->pc = 0x3462ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3462A8u;
    // 0x3462ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3461B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3461B0u, 0x3462A8u, 0x3462B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3462B0u;
label_3462b0:
    // 0x3462b0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3462b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3462b4: 0x1203000a  beq         $s0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3462B4u;
    {
        const bool branch_taken_0x3462b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x3462B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3462B4u;
        // 0x3462b8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3462b4) {
            ctx->pc = 0x3462E0u;
            goto label_3462e0;
        }
    }
    ctx->pc = 0x3462BCu;
    // 0x3462bc: 0x12030004  beq         $s0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3462BCu;
    {
        const bool branch_taken_0x3462bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3462bc) {
            ctx->pc = 0x3462D0u;
            goto label_3462d0;
        }
    }
    ctx->pc = 0x3462C4u;
    // 0x3462c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3462C4u;
    {
        const bool branch_taken_0x3462c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3462c4) {
            ctx->pc = 0x3462E8u;
            goto label_3462e8;
        }
    }
    ctx->pc = 0x3462CCu;
    // 0x3462cc: 0x0  nop
    ctx->pc = 0x3462ccu;
    // NOP
label_3462d0:
    // 0x3462d0: 0xc096c4c  jal         func_25B130
    ctx->pc = 0x3462D0u;
    SET_GPR_U32(ctx, 31, 0x3462D8u);
    ctx->pc = 0x3462D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3462D0u;
    // 0x3462d4: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B130u, 0x3462D0u, 0x3462D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3462D8u;
label_3462d8:
    // 0x3462d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3462D8u;
    {
        const bool branch_taken_0x3462d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3462d8) {
            ctx->pc = 0x3462E8u;
            goto label_3462e8;
        }
    }
    ctx->pc = 0x3462E0u;
label_3462e0:
    // 0x3462e0: 0xc096c3c  jal         func_25B0F0
    ctx->pc = 0x3462E0u;
    SET_GPR_U32(ctx, 31, 0x3462E8u);
    ctx->pc = 0x3462E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3462E0u;
    // 0x3462e4: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B0F0u, 0x3462E0u, 0x3462E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3462E8u;
label_3462e8:
    // 0x3462e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3462e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3462ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3462ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3462f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3462f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3462f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3462F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3462F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3462F4u;
        // 0x3462f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3462F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3462FCu;
}
