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

// Function: sub_0021E0A0
// Address: 0x21e0a0 - 0x21e130
void sub_0021E0A0_0x21e0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E0A0_0x21e0a0");
#endif

    switch (ctx->pc) {
        case 0x21e0bcu: goto label_21e0bc;
        case 0x21e0f8u: goto label_21e0f8;
        case 0x21e110u: goto label_21e110;
        default: break;
    }

    ctx->pc = 0x21e0a0u;

    // 0x21e0a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21e0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21e0a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21e0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21e0a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21e0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21e0ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21e0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21e0b0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21e0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x21e0b4: 0xc084968  jal         func_2125A0
    ctx->pc = 0x21E0B4u;
    SET_GPR_U32(ctx, 31, 0x21E0BCu);
    ctx->pc = 0x21E0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E0B4u;
    // 0x21e0b8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2125A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2125A0u, 0x21E0B4u, 0x21E0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E0BCu;
label_21e0bc:
    // 0x21e0bc: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x21e0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x21e0c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21e0c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e0c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21E0C4u;
    {
        const bool branch_taken_0x21e0c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E0C4u;
        // 0x21e0c8: 0x34a50135  ori         $a1, $a1, 0x135 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)309);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e0c4) {
            ctx->pc = 0x21E0E8u;
            goto label_21e0e8;
        }
    }
    ctx->pc = 0x21E0CCu;
    // 0x21e0cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21e0ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e0d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21e0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e0d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21e0d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21e0d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21e0d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21e0dc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21e0dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21e0e0: 0x80848e0  j           func_212380
    ctx->pc = 0x21E0E0u;
    ctx->pc = 0x21E0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E0E0u;
    // 0x21e0e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212380u;
    sub_00212380_0x212380(rdram, ctx, runtime); return;
    ctx->pc = 0x21E0E8u;
label_21e0e8:
    // 0x21e0e8: 0x8e301f44  lw          $s0, 0x1F44($s1)
    ctx->pc = 0x21e0e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8004)));
    // 0x21e0ec: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x21e0ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21e0f0: 0xc08408e  jal         func_210238
    ctx->pc = 0x21E0F0u;
    SET_GPR_U32(ctx, 31, 0x21E0F8u);
    ctx->pc = 0x21E0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E0F0u;
    // 0x21e0f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210238u, 0x21E0F0u, 0x21E0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E0F8u;
label_21e0f8:
    // 0x21e0f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21e0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e0fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21e0fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e100: 0x10520004  beq         $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x21E100u;
    {
        const bool branch_taken_0x21e100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x21E104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E100u;
        // 0x21e104: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e100) {
            ctx->pc = 0x21E114u;
            goto label_21e114;
        }
    }
    ctx->pc = 0x21E108u;
    // 0x21e108: 0xc084082  jal         func_210208
    ctx->pc = 0x21E108u;
    SET_GPR_U32(ctx, 31, 0x21E110u);
    ctx->pc = 0x210208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210208u, 0x21E108u, 0x21E110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E110u;
label_21e110:
    // 0x21e110: 0xae320044  sw          $s2, 0x44($s1)
    ctx->pc = 0x21e110u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 18));
label_21e114:
    // 0x21e114: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21e114u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e118: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21e118u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e11c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21e11cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21e120: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21e120u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21e124: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21e124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21e128: 0x3e00008  jr          $ra
    ctx->pc = 0x21E128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E128u;
        // 0x21e12c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E130u;
}
