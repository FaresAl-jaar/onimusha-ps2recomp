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

// Function: sub_0012C348
// Address: 0x12c348 - 0x12c410
void sub_0012C348_0x12c348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012C348_0x12c348");
#endif

    switch (ctx->pc) {
        case 0x12c398u: goto label_12c398;
        case 0x12c3a4u: goto label_12c3a4;
        case 0x12c3b4u: goto label_12c3b4;
        case 0x12c3ccu: goto label_12c3cc;
        case 0x12c3e4u: goto label_12c3e4;
        case 0x12c3f0u: goto label_12c3f0;
        case 0x12c3f8u: goto label_12c3f8;
        default: break;
    }

    ctx->pc = 0x12c348u;

    // 0x12c348: 0x240ff800  addiu       $t7, $zero, -0x800
    ctx->pc = 0x12c348u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965248));
    // 0x12c34c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12c34cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12c350: 0xf7afa  dsrl        $t7, $t7, 11
    ctx->pc = 0x12c350u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 11);
    // 0x12c354: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12c354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12c358: 0x240ef800  addiu       $t6, $zero, -0x800
    ctx->pc = 0x12c358u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965248));
    // 0x12c35c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12c35cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12c360: 0x8f782d  daddu       $t7, $a0, $t7
    ctx->pc = 0x12c360u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 15));
    // 0x12c364: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12c364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12c368: 0xe72ba  dsrl        $t6, $t6, 10
    ctx->pc = 0x12c368u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> 10);
    // 0x12c36c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x12c36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12c370: 0x1cf702b  sltu        $t6, $t6, $t7
    ctx->pc = 0x12c370u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x12c374: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12c374u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c378: 0x308d07ff  andi        $t5, $a0, 0x7FF
    ctx->pc = 0x12c378u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2047);
    // 0x12c37c: 0x11c00002  beqz        $t6, . + 4 + (0x2 << 2)
    ctx->pc = 0x12C37Cu;
    {
        const bool branch_taken_0x12c37c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C37Cu;
        // 0x12c380: 0x348f0800  ori         $t7, $a0, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c37c) {
            ctx->pc = 0x12C388u;
            goto label_12c388;
        }
    }
    ctx->pc = 0x12C384u;
    // 0x12c384: 0x1ed900b  movn        $s2, $t7, $t5
    ctx->pc = 0x12c384u;
    if (GPR_U64(ctx, 13) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 15));
label_12c388:
    // 0x12c388: 0x12203f  dsra32      $a0, $s2, 0
    ctx->pc = 0x12c388u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x12c38c: 0x2410040f  addiu       $s0, $zero, 0x40F
    ctx->pc = 0x12c38cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1039));
    // 0x12c390: 0xc04bba2  jal         func_12EE88
    ctx->pc = 0x12C390u;
    SET_GPR_U32(ctx, 31, 0x12C398u);
    ctx->pc = 0x12C394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C390u;
    // 0x12c394: 0x10853c  dsll32      $s0, $s0, 20 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE88u, 0x12C390u, 0x12C398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C398u;
label_12c398:
    // 0x12c398: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12c398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c39c: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x12C39Cu;
    SET_GPR_U32(ctx, 31, 0x12C3A4u);
    ctx->pc = 0x12C3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C39Cu;
    // 0x12c3a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x12C39Cu, 0x12C3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C3A4u;
label_12c3a4:
    // 0x12c3a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12c3a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c3a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12c3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c3ac: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x12C3ACu;
    SET_GPR_U32(ctx, 31, 0x12C3B4u);
    ctx->pc = 0x12C3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C3ACu;
    // 0x12c3b0: 0x12803c  dsll32      $s0, $s2, 0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x12C3ACu, 0x12C3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C3B4u;
label_12c3b4:
    // 0x12c3b4: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x12c3b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x12c3b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12c3b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c3bc: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x12c3bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x12c3c0: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x12c3c0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x12c3c4: 0xc04bba2  jal         func_12EE88
    ctx->pc = 0x12C3C4u;
    SET_GPR_U32(ctx, 31, 0x12C3CCu);
    ctx->pc = 0x12C3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C3C4u;
    // 0x12c3c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE88u, 0x12C3C4u, 0x12C3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C3CCu;
label_12c3cc:
    // 0x12c3cc: 0x2405041f  addiu       $a1, $zero, 0x41F
    ctx->pc = 0x12c3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1055));
    // 0x12c3d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12c3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c3d4: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12C3D4u;
    {
        const bool branch_taken_0x12c3d4 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x12C3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C3D4u;
        // 0x12c3d8: 0x52d3c  dsll32      $a1, $a1, 20 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c3d4) {
            ctx->pc = 0x12C3E4u;
            goto label_12c3e4;
        }
    }
    ctx->pc = 0x12C3DCu;
    // 0x12c3dc: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x12C3DCu;
    SET_GPR_U32(ctx, 31, 0x12C3E4u);
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x12C3DCu, 0x12C3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C3E4u;
label_12c3e4:
    // 0x12c3e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12c3e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c3e8: 0xc04ba36  jal         func_12E8D8
    ctx->pc = 0x12C3E8u;
    SET_GPR_U32(ctx, 31, 0x12C3F0u);
    ctx->pc = 0x12C3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C3E8u;
    // 0x12c3ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E8D8u, 0x12C3E8u, 0x12C3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C3F0u;
label_12c3f0:
    // 0x12c3f0: 0xc04bc02  jal         func_12F008
    ctx->pc = 0x12C3F0u;
    SET_GPR_U32(ctx, 31, 0x12C3F8u);
    ctx->pc = 0x12C3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C3F0u;
    // 0x12c3f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F008u, 0x12C3F0u, 0x12C3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C3F8u;
label_12c3f8:
    // 0x12c3f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12c3f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c3fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12c3fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12c400: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12c400u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12c404: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x12c404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12c408: 0x3e00008  jr          $ra
    ctx->pc = 0x12C408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C408u;
        // 0x12c40c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C410u;
}
