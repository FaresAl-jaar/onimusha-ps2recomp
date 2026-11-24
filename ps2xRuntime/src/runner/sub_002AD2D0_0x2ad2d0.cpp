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

// Function: sub_002AD2D0
// Address: 0x2ad2d0 - 0x2ad40c
void sub_002AD2D0_0x2ad2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD2D0_0x2ad2d0");
#endif

    switch (ctx->pc) {
        case 0x2ad340u: goto label_2ad340;
        case 0x2ad370u: goto label_2ad370;
        case 0x2ad3a0u: goto label_2ad3a0;
        case 0x2ad3d0u: goto label_2ad3d0;
        case 0x2ad400u: goto label_2ad400;
        default: break;
    }

    ctx->pc = 0x2ad2d0u;

    // 0x2ad2d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2ad2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2ad2d4: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x2ad2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2ad2d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ad2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ad2dc: 0x90850002  lbu         $a1, 0x2($a0)
    ctx->pc = 0x2ad2dcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2ad2e0: 0x10a3003d  beq         $a1, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x2AD2E0u;
    {
        const bool branch_taken_0x2ad2e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2AD2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD2E0u;
        // 0x2ad2e4: 0x24030023  addiu       $v1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad2e0) {
            ctx->pc = 0x2AD3D8u;
            goto label_2ad3d8;
        }
    }
    ctx->pc = 0x2AD2E8u;
    // 0x2ad2e8: 0x10a3002f  beq         $a1, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x2AD2E8u;
    {
        const bool branch_taken_0x2ad2e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ad2e8) {
            ctx->pc = 0x2AD3A8u;
            goto label_2ad3a8;
        }
    }
    ctx->pc = 0x2AD2F0u;
    // 0x2ad2f0: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x2ad2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2ad2f4: 0x10a30020  beq         $a1, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2AD2F4u;
    {
        const bool branch_taken_0x2ad2f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2AD2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD2F4u;
        // 0x2ad2f8: 0x24030021  addiu       $v1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad2f4) {
            ctx->pc = 0x2AD378u;
            goto label_2ad378;
        }
    }
    ctx->pc = 0x2AD2FCu;
    // 0x2ad2fc: 0x10a30012  beq         $a1, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2AD2FCu;
    {
        const bool branch_taken_0x2ad2fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ad2fc) {
            ctx->pc = 0x2AD348u;
            goto label_2ad348;
        }
    }
    ctx->pc = 0x2AD304u;
    // 0x2ad304: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2ad304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ad308: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AD308u;
    {
        const bool branch_taken_0x2ad308 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ad308) {
            ctx->pc = 0x2AD318u;
            goto label_2ad318;
        }
    }
    ctx->pc = 0x2AD310u;
    // 0x2ad310: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x2AD310u;
    {
        const bool branch_taken_0x2ad310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad310) {
            ctx->pc = 0x2AD400u;
            goto label_2ad400;
        }
    }
    ctx->pc = 0x2AD318u;
label_2ad318:
    // 0x2ad318: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2ad318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2ad31c: 0x24424a60  addiu       $v0, $v0, 0x4A60
    ctx->pc = 0x2ad31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19040));
    // 0x2ad320: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ad320u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ad324: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2ad324u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x4E4A60u));
    // 0x2ad328: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x2ad328u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2ad32c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ad32cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad330: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x2ad330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ad334: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2ad334u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad338: 0xc0a6be8  jal         func_29AFA0
    ctx->pc = 0x2AD338u;
    SET_GPR_U32(ctx, 31, 0x2AD340u);
    ctx->pc = 0x2AD33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD338u;
    // 0x2ad33c: 0x7d220000  sq          $v0, 0x0($t1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AFA0u, 0x2AD338u, 0x2AD340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD340u;
label_2ad340:
    // 0x2ad340: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2AD340u;
    {
        const bool branch_taken_0x2ad340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad340) {
            ctx->pc = 0x2AD400u;
            goto label_2ad400;
        }
    }
    ctx->pc = 0x2AD348u;
label_2ad348:
    // 0x2ad348: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2ad348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2ad34c: 0x24424a70  addiu       $v0, $v0, 0x4A70
    ctx->pc = 0x2ad34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19056));
    // 0x2ad350: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ad350u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ad354: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2ad354u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x4E4A70u));
    // 0x2ad358: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x2ad358u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ad35c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ad35cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad360: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x2ad360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2ad364: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2ad364u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad368: 0xc0a6be8  jal         func_29AFA0
    ctx->pc = 0x2AD368u;
    SET_GPR_U32(ctx, 31, 0x2AD370u);
    ctx->pc = 0x2AD36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD368u;
    // 0x2ad36c: 0x7d220000  sq          $v0, 0x0($t1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AFA0u, 0x2AD368u, 0x2AD370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD370u;
label_2ad370:
    // 0x2ad370: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2AD370u;
    {
        const bool branch_taken_0x2ad370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad370) {
            ctx->pc = 0x2AD400u;
            goto label_2ad400;
        }
    }
    ctx->pc = 0x2AD378u;
label_2ad378:
    // 0x2ad378: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2ad378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2ad37c: 0x24424a80  addiu       $v0, $v0, 0x4A80
    ctx->pc = 0x2ad37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19072));
    // 0x2ad380: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ad380u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ad384: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2ad384u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x4E4A80u));
    // 0x2ad388: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x2ad388u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ad38c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ad38cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad390: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x2ad390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ad394: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2ad394u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad398: 0xc0a6be8  jal         func_29AFA0
    ctx->pc = 0x2AD398u;
    SET_GPR_U32(ctx, 31, 0x2AD3A0u);
    ctx->pc = 0x2AD39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD398u;
    // 0x2ad39c: 0x7d220000  sq          $v0, 0x0($t1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AFA0u, 0x2AD398u, 0x2AD3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD3A0u;
label_2ad3a0:
    // 0x2ad3a0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2AD3A0u;
    {
        const bool branch_taken_0x2ad3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad3a0) {
            ctx->pc = 0x2AD400u;
            goto label_2ad400;
        }
    }
    ctx->pc = 0x2AD3A8u;
label_2ad3a8:
    // 0x2ad3a8: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2ad3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2ad3ac: 0x24424a90  addiu       $v0, $v0, 0x4A90
    ctx->pc = 0x2ad3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19088));
    // 0x2ad3b0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ad3b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ad3b4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2ad3b4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x4E4A90u));
    // 0x2ad3b8: 0x27a90020  addiu       $t1, $sp, 0x20
    ctx->pc = 0x2ad3b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ad3bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ad3bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad3c0: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x2ad3c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ad3c4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2ad3c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad3c8: 0xc0a6be8  jal         func_29AFA0
    ctx->pc = 0x2AD3C8u;
    SET_GPR_U32(ctx, 31, 0x2AD3D0u);
    ctx->pc = 0x2AD3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD3C8u;
    // 0x2ad3cc: 0x7d220000  sq          $v0, 0x0($t1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AFA0u, 0x2AD3C8u, 0x2AD3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD3D0u;
label_2ad3d0:
    // 0x2ad3d0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2AD3D0u;
    {
        const bool branch_taken_0x2ad3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad3d0) {
            ctx->pc = 0x2AD400u;
            goto label_2ad400;
        }
    }
    ctx->pc = 0x2AD3D8u;
label_2ad3d8:
    // 0x2ad3d8: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x2ad3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x2ad3dc: 0x24424aa0  addiu       $v0, $v0, 0x4AA0
    ctx->pc = 0x2ad3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19104));
    // 0x2ad3e0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ad3e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ad3e4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2ad3e4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x4E4AA0u));
    // 0x2ad3e8: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x2ad3e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ad3ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ad3ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad3f0: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x2ad3f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ad3f4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2ad3f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad3f8: 0xc0a6be8  jal         func_29AFA0
    ctx->pc = 0x2AD3F8u;
    SET_GPR_U32(ctx, 31, 0x2AD400u);
    ctx->pc = 0x2AD3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD3F8u;
    // 0x2ad3fc: 0x7d220000  sq          $v0, 0x0($t1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AFA0u, 0x2AD3F8u, 0x2AD400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD400u;
label_2ad400:
    // 0x2ad400: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ad400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad404: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD404u;
        // 0x2ad408: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD40Cu;
}
