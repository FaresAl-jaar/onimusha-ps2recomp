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

// Function: sub_00202300
// Address: 0x202300 - 0x2023b8
void sub_00202300_0x202300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202300_0x202300");
#endif

    switch (ctx->pc) {
        case 0x20232cu: goto label_20232c;
        case 0x20233cu: goto label_20233c;
        case 0x202350u: goto label_202350;
        case 0x202358u: goto label_202358;
        default: break;
    }

    ctx->pc = 0x202300u;

    // 0x202300: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x202300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x202304: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x202304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202308: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x202308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x20230c: 0x27a70008  addiu       $a3, $sp, 0x8
    ctx->pc = 0x20230cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x202310: 0x27a8000c  addiu       $t0, $sp, 0xC
    ctx->pc = 0x202310u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x202314: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x202314u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x202318: 0x27aa0014  addiu       $t2, $sp, 0x14
    ctx->pc = 0x202318u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x20231c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x20231cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x202320: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x202320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x202324: 0xc080810  jal         func_202040
    ctx->pc = 0x202324u;
    SET_GPR_U32(ctx, 31, 0x20232Cu);
    ctx->pc = 0x202328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202324u;
    // 0x202328: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202040u, 0x202324u, 0x20232Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20232Cu;
label_20232c:
    // 0x20232c: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x20232cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x202330: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x202330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x202334: 0xc08085e  jal         func_202178
    ctx->pc = 0x202334u;
    SET_GPR_U32(ctx, 31, 0x20233Cu);
    ctx->pc = 0x202338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202334u;
    // 0x202338: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202178u, 0x202334u, 0x20233Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20233Cu;
label_20233c:
    // 0x20233c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20233cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202340: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x202340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x202344: 0x27a60024  addiu       $a2, $sp, 0x24
    ctx->pc = 0x202344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x202348: 0xc0808b2  jal         func_2022C8
    ctx->pc = 0x202348u;
    SET_GPR_U32(ctx, 31, 0x202350u);
    ctx->pc = 0x20234Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202348u;
    // 0x20234c: 0x27a70028  addiu       $a3, $sp, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2022C8u, 0x202348u, 0x202350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202350u;
label_202350:
    // 0x202350: 0xc0808be  jal         func_2022F8
    ctx->pc = 0x202350u;
    SET_GPR_U32(ctx, 31, 0x202358u);
    ctx->pc = 0x202354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202350u;
    // 0x202354: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2022F8u, 0x202350u, 0x202358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202358u;
label_202358:
    // 0x202358: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x202358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20235c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x20235cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x202360: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x202360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x202364: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x202364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x202368: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x202368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20236c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x20236cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202370: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x202370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x202374: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x202374u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202378: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x202378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x20237c: 0x8fa5001c  lw          $a1, 0x1C($sp)
    ctx->pc = 0x20237cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x202380: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x202380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x202384: 0x8fa70014  lw          $a3, 0x14($sp)
    ctx->pc = 0x202384u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x202388: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x202388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x20238c: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x20238cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x202390: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x202390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x202394: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x202394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x202398: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x202398u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20239c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x20239cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2023a0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2023a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2023a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2023a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2023a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2023a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2023ac: 0x24620800  addiu       $v0, $v1, 0x800
    ctx->pc = 0x2023acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x2023b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2023B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2023B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2023B0u;
        // 0x2023b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2023B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2023B8u;
}
