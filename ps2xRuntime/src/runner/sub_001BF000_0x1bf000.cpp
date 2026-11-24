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

// Function: sub_001BF000
// Address: 0x1bf000 - 0x1bf7e4
void sub_001BF000_0x1bf000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BF000_0x1bf000");
#endif

    switch (ctx->pc) {
        case 0x1bf028u: goto label_1bf028;
        case 0x1bf03cu: goto label_1bf03c;
        case 0x1bf06cu: goto label_1bf06c;
        case 0x1bf078u: goto label_1bf078;
        case 0x1bf08cu: goto label_1bf08c;
        case 0x1bf0b0u: goto label_1bf0b0;
        case 0x1bf0f0u: goto label_1bf0f0;
        case 0x1bf104u: goto label_1bf104;
        case 0x1bf124u: goto label_1bf124;
        case 0x1bf134u: goto label_1bf134;
        case 0x1bf144u: goto label_1bf144;
        case 0x1bf198u: goto label_1bf198;
        case 0x1bf1a8u: goto label_1bf1a8;
        case 0x1bf1b8u: goto label_1bf1b8;
        case 0x1bf1e8u: goto label_1bf1e8;
        case 0x1bf1f8u: goto label_1bf1f8;
        case 0x1bf21cu: goto label_1bf21c;
        case 0x1bf230u: goto label_1bf230;
        case 0x1bf248u: goto label_1bf248;
        case 0x1bf278u: goto label_1bf278;
        case 0x1bf394u: goto label_1bf394;
        case 0x1bf3a8u: goto label_1bf3a8;
        case 0x1bf3c4u: goto label_1bf3c4;
        case 0x1bf3d4u: goto label_1bf3d4;
        case 0x1bf3e4u: goto label_1bf3e4;
        case 0x1bf3f8u: goto label_1bf3f8;
        case 0x1bf404u: goto label_1bf404;
        case 0x1bf428u: goto label_1bf428;
        case 0x1bf468u: goto label_1bf468;
        case 0x1bf47cu: goto label_1bf47c;
        case 0x1bf49cu: goto label_1bf49c;
        case 0x1bf4acu: goto label_1bf4ac;
        case 0x1bf4b8u: goto label_1bf4b8;
        case 0x1bf4e8u: goto label_1bf4e8;
        case 0x1bf4fcu: goto label_1bf4fc;
        case 0x1bf520u: goto label_1bf520;
        case 0x1bf534u: goto label_1bf534;
        case 0x1bf54cu: goto label_1bf54c;
        case 0x1bf56cu: goto label_1bf56c;
        case 0x1bf574u: goto label_1bf574;
        case 0x1bf5a0u: goto label_1bf5a0;
        case 0x1bf5acu: goto label_1bf5ac;
        case 0x1bf5d0u: goto label_1bf5d0;
        case 0x1bf610u: goto label_1bf610;
        case 0x1bf620u: goto label_1bf620;
        case 0x1bf630u: goto label_1bf630;
        case 0x1bf640u: goto label_1bf640;
        case 0x1bf650u: goto label_1bf650;
        case 0x1bf680u: goto label_1bf680;
        case 0x1bf694u: goto label_1bf694;
        case 0x1bf6a8u: goto label_1bf6a8;
        case 0x1bf6bcu: goto label_1bf6bc;
        case 0x1bf6d4u: goto label_1bf6d4;
        case 0x1bf6f0u: goto label_1bf6f0;
        case 0x1bf700u: goto label_1bf700;
        case 0x1bf714u: goto label_1bf714;
        case 0x1bf734u: goto label_1bf734;
        case 0x1bf748u: goto label_1bf748;
        case 0x1bf754u: goto label_1bf754;
        case 0x1bf75cu: goto label_1bf75c;
        case 0x1bf770u: goto label_1bf770;
        case 0x1bf784u: goto label_1bf784;
        case 0x1bf7a4u: goto label_1bf7a4;
        case 0x1bf7b8u: goto label_1bf7b8;
        case 0x1bf7c4u: goto label_1bf7c4;
        default: break;
    }

    ctx->pc = 0x1bf000u;

    // 0x1bf000: 0x27bdfba0  addiu       $sp, $sp, -0x460
    ctx->pc = 0x1bf000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966176));
    // 0x1bf004: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x1bf004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1bf008: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1bf008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1bf00c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1bf00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1bf010: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bf010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1bf014: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bf014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bf018: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bf018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bf01c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bf01cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf020: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BF020u;
    SET_GPR_U32(ctx, 31, 0x1BF028u);
    ctx->pc = 0x1BF024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF020u;
    // 0x1bf024: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BF020u, 0x1BF028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF028u;
label_1bf028:
    // 0x1bf028: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bf028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf02c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf030: 0x438004  sllv        $s0, $v1, $v0
    ctx->pc = 0x1bf030u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1bf034: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BF034u;
    SET_GPR_U32(ctx, 31, 0x1BF03Cu);
    ctx->pc = 0x1BF038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF034u;
    // 0x1bf038: 0x24050070  addiu       $a1, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BF034u, 0x1BF03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF03Cu;
label_1bf03c:
    // 0x1bf03c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bf03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf040: 0x431004  sllv        $v0, $v1, $v0
    ctx->pc = 0x1bf040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1bf044: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x1bf044u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1bf048: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BF048u;
    {
        const bool branch_taken_0x1bf048 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1BF04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF048u;
        // 0x1bf04c: 0x282c3  sra         $s0, $v0, 11 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf048) {
            ctx->pc = 0x1BF058u;
            goto label_1bf058;
        }
    }
    ctx->pc = 0x1BF050u;
    // 0x1bf050: 0x244207ff  addiu       $v0, $v0, 0x7FF
    ctx->pc = 0x1bf050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
    // 0x1bf054: 0x282c3  sra         $s0, $v0, 11
    ctx->pc = 0x1bf054u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 11));
label_1bf058:
    // 0x1bf058: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf05c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bf05cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf060: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bf060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf064: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1BF064u;
    SET_GPR_U32(ctx, 31, 0x1BF06Cu);
    ctx->pc = 0x1BF068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF064u;
    // 0x1bf068: 0x2407000e  addiu       $a3, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1BF064u, 0x1BF06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF06Cu;
label_1bf06c:
    // 0x1bf06c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf070: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BF070u;
    SET_GPR_U32(ctx, 31, 0x1BF078u);
    ctx->pc = 0x1BF074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF070u;
    // 0x1bf074: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BF070u, 0x1BF078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF078u;
label_1bf078:
    // 0x1bf078: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bf078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bf07c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf07cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf080: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bf080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bf084: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1BF084u;
    SET_GPR_U32(ctx, 31, 0x1BF08Cu);
    ctx->pc = 0x1BF088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF084u;
    // 0x1bf088: 0x296b8  dsll        $s2, $v0, 26 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << 26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1BF084u, 0x1BF08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF08Cu;
label_1bf08c:
    // 0x1bf08c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1bf08cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1bf090: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf094: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bf094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bf098: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1bf098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1bf09c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bf09cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bf0a0: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x1bf0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1bf0a4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1bf0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1bf0a8: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BF0A8u;
    SET_GPR_U32(ctx, 31, 0x1BF0B0u);
    ctx->pc = 0x1BF0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF0A8u;
    // 0x1bf0ac: 0x2429025  or          $s2, $s2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BF0A8u, 0x1BF0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF0B0u;
label_1bf0b0:
    // 0x1bf0b0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1bf0b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bf0b4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1bf0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bf0b8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bf0b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bf0bc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1bf0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1bf0c0: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1bf0c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1bf0c4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bf0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bf0c8: 0x722025  or          $a0, $v1, $s2
    ctx->pc = 0x1bf0c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x1bf0cc: 0x9e2378d0  lwu         $v1, 0x78D0($s1)
    ctx->pc = 0x1bf0ccu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 30928)));
    // 0x1bf0d0: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1bf0d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1bf0d4: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1bf0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1bf0d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf0d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf0dc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bf0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bf0e0: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1bf0e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1bf0e4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1bf0e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1bf0e8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BF0E8u;
    SET_GPR_U32(ctx, 31, 0x1BF0F0u);
    ctx->pc = 0x1BF0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF0E8u;
    // 0x1bf0ec: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BF0E8u, 0x1BF0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF0F0u;
label_1bf0f0:
    // 0x1bf0f0: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1bf0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1bf0f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf0f8: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1bf0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1bf0fc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BF0FCu;
    SET_GPR_U32(ctx, 31, 0x1BF104u);
    ctx->pc = 0x1BF100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF0FCu;
    // 0x1bf100: 0x34460080  ori         $a2, $v0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BF0FCu, 0x1BF104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF104u;
label_1bf104:
    // 0x1bf104: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bf104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf108: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x1bf108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x1bf10c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bf10cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bf110: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x1bf110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x1bf114: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf118: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x1bf118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1bf11c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BF11Cu;
    SET_GPR_U32(ctx, 31, 0x1BF124u);
    ctx->pc = 0x1BF120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF11Cu;
    // 0x1bf120: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BF11Cu, 0x1BF124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF124u;
label_1bf124:
    // 0x1bf124: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf128: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1bf128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1bf12c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BF12Cu;
    SET_GPR_U32(ctx, 31, 0x1BF134u);
    ctx->pc = 0x1BF130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF12Cu;
    // 0x1bf130: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BF12Cu, 0x1BF134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF134u;
label_1bf134:
    // 0x1bf134: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf138: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1bf138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1bf13c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BF13Cu;
    SET_GPR_U32(ctx, 31, 0x1BF144u);
    ctx->pc = 0x1BF140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF13Cu;
    // 0x1bf140: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BF13Cu, 0x1BF144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF144u;
label_1bf144:
    // 0x1bf144: 0x8e2678c8  lw          $a2, 0x78C8($s1)
    ctx->pc = 0x1bf144u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30920)));
    // 0x1bf148: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf14c: 0x9e2778cc  lwu         $a3, 0x78CC($s1)
    ctx->pc = 0x1bf14cu;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 30924)));
    // 0x1bf150: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1bf150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1bf154: 0x8e2278c4  lw          $v0, 0x78C4($s1)
    ctx->pc = 0x1bf154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30916)));
    // 0x1bf158: 0x9e2378c0  lwu         $v1, 0x78C0($s1)
    ctx->pc = 0x1bf158u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 30912)));
    // 0x1bf15c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1bf15cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1bf160: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1bf160u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1bf164: 0x73938  dsll        $a3, $a3, 4
    ctx->pc = 0x1bf164u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 4);
    // 0x1bf168: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1bf168u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1bf16c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bf16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bf170: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bf170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bf174: 0x34e7000a  ori         $a3, $a3, 0xA
    ctx->pc = 0x1bf174u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)10);
    // 0x1bf178: 0x633b8  dsll        $a2, $a2, 14
    ctx->pc = 0x1bf178u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x1bf17c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bf17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bf180: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1bf180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1bf184: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x1bf184u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x1bf188: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1bf188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1bf18c: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1bf18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x1bf190: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BF190u;
    SET_GPR_U32(ctx, 31, 0x1BF198u);
    ctx->pc = 0x1BF194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF190u;
    // 0x1bf194: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BF190u, 0x1BF198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF198u;
label_1bf198:
    // 0x1bf198: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf19c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bf19cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf1a0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BF1A0u;
    SET_GPR_U32(ctx, 31, 0x1BF1A8u);
    ctx->pc = 0x1BF1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF1A0u;
    // 0x1bf1a4: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BF1A0u, 0x1BF1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF1A8u;
label_1bf1a8:
    // 0x1bf1a8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1bf1a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf1ac: 0x2413001f  addiu       $s3, $zero, 0x1F
    ctx->pc = 0x1bf1acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1bf1b0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1bf1b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf1b4: 0x0  nop
    ctx->pc = 0x1bf1b4u;
    // NOP
label_1bf1b8:
    // 0x1bf1b8: 0x13183c  dsll32      $v1, $s3, 0
    ctx->pc = 0x1bf1b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1bf1bc: 0x12203c  dsll32      $a0, $s2, 0
    ctx->pc = 0x1bf1bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1bf1c0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bf1c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bf1c4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1bf1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1bf1c8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1bf1c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1bf1cc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1bf1ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1bf1d0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bf1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bf1d4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1bf1d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1bf1d8: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1bf1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1bf1dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf1dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf1e0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BF1E0u;
    SET_GPR_U32(ctx, 31, 0x1BF1E8u);
    ctx->pc = 0x1BF1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF1E0u;
    // 0x1bf1e4: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BF1E0u, 0x1BF1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF1E8u;
label_1bf1e8:
    // 0x1bf1e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf1ec: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bf1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bf1f0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BF1F0u;
    SET_GPR_U32(ctx, 31, 0x1BF1F8u);
    ctx->pc = 0x1BF1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF1F0u;
    // 0x1bf1f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BF1F0u, 0x1BF1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF1F8u;
label_1bf1f8:
    // 0x1bf1f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1bf1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bf1fc: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1bf1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1bf200: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bf200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bf204: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1bf204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1bf208: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1bf208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1bf20c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf20cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf210: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1bf210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1bf214: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BF214u;
    SET_GPR_U32(ctx, 31, 0x1BF21Cu);
    ctx->pc = 0x1BF218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF214u;
    // 0x1bf218: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BF214u, 0x1BF21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF21Cu;
label_1bf21c:
    // 0x1bf21c: 0x3c020e00  lui         $v0, 0xE00
    ctx->pc = 0x1bf21cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3584 << 16));
    // 0x1bf220: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf224: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bf224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bf228: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BF228u;
    SET_GPR_U32(ctx, 31, 0x1BF230u);
    ctx->pc = 0x1BF22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF228u;
    // 0x1bf22c: 0x34462000  ori         $a2, $v0, 0x2000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BF228u, 0x1BF230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF230u;
label_1bf230:
    // 0x1bf230: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1bf230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1bf234: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf238: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1bf238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1bf23c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1bf23cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bf240: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BF240u;
    SET_GPR_U32(ctx, 31, 0x1BF248u);
    ctx->pc = 0x1BF244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF240u;
    // 0x1bf244: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BF240u, 0x1BF248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF248u;
label_1bf248:
    // 0x1bf248: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1bf248u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1bf24c: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x1bf24cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x1bf250: 0x2e820008  sltiu       $v0, $s4, 0x8
    ctx->pc = 0x1bf250u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1bf254: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x1BF254u;
    {
        const bool branch_taken_0x1bf254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF254u;
        // 0x1bf258: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf254) {
            ctx->pc = 0x1BF1B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bf1b8;
        }
    }
    ctx->pc = 0x1BF25Cu;
    // 0x1bf25c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bf25cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf260: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bf260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf264: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1bf264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf268: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1bf268u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf26c: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x1bf26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1bf270: 0x3c090008  lui         $t1, 0x8
    ctx->pc = 0x1bf270u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)8 << 16));
    // 0x1bf274: 0x3c080800  lui         $t0, 0x800
    ctx->pc = 0x1bf274u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2048 << 16));
label_1bf278:
    // 0x1bf278: 0xc53821  addu        $a3, $a2, $a1
    ctx->pc = 0x1bf278u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1bf27c: 0x873821  addu        $a3, $a0, $a3
    ctx->pc = 0x1bf27cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1bf280: 0x24cc0001  addiu       $t4, $a2, 0x1
    ctx->pc = 0x1bf280u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1bf284: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x1bf284u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1bf288: 0xc5c00  sll         $t3, $t4, 16
    ctx->pc = 0x1bf288u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x1bf28c: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x1bf28cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x1bf290: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x1bf290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1bf294: 0x1853821  addu        $a3, $t4, $a1
    ctx->pc = 0x1bf294u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x1bf298: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1bf298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1bf29c: 0x24ea0100  addiu       $t2, $a3, 0x100
    ctx->pc = 0x1bf29cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 256));
    // 0x1bf2a0: 0xc3e00  sll         $a3, $t4, 24
    ctx->pc = 0x1bf2a0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x1bf2a4: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x1bf2a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1bf2a8: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x1bf2a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x1bf2ac: 0x24cc0002  addiu       $t4, $a2, 0x2
    ctx->pc = 0x1bf2acu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x1bf2b0: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x1bf2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
    // 0x1bf2b4: 0xc5c00  sll         $t3, $t4, 16
    ctx->pc = 0x1bf2b4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x1bf2b8: 0x1853821  addu        $a3, $t4, $a1
    ctx->pc = 0x1bf2b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x1bf2bc: 0x24ea0200  addiu       $t2, $a3, 0x200
    ctx->pc = 0x1bf2bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 512));
    // 0x1bf2c0: 0xc3e00  sll         $a3, $t4, 24
    ctx->pc = 0x1bf2c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x1bf2c4: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x1bf2c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1bf2c8: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x1bf2c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x1bf2cc: 0x24cc0003  addiu       $t4, $a2, 0x3
    ctx->pc = 0x1bf2ccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x1bf2d0: 0xac470008  sw          $a3, 0x8($v0)
    ctx->pc = 0x1bf2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
    // 0x1bf2d4: 0xc5c00  sll         $t3, $t4, 16
    ctx->pc = 0x1bf2d4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x1bf2d8: 0x1853821  addu        $a3, $t4, $a1
    ctx->pc = 0x1bf2d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x1bf2dc: 0x24ea0300  addiu       $t2, $a3, 0x300
    ctx->pc = 0x1bf2dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 768));
    // 0x1bf2e0: 0xc3e00  sll         $a3, $t4, 24
    ctx->pc = 0x1bf2e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x1bf2e4: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x1bf2e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1bf2e8: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x1bf2e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x1bf2ec: 0x24cc0004  addiu       $t4, $a2, 0x4
    ctx->pc = 0x1bf2ecu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1bf2f0: 0xac47000c  sw          $a3, 0xC($v0)
    ctx->pc = 0x1bf2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
    // 0x1bf2f4: 0xc5c00  sll         $t3, $t4, 16
    ctx->pc = 0x1bf2f4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x1bf2f8: 0x1853821  addu        $a3, $t4, $a1
    ctx->pc = 0x1bf2f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x1bf2fc: 0x24ea0400  addiu       $t2, $a3, 0x400
    ctx->pc = 0x1bf2fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 1024));
    // 0x1bf300: 0xc3e00  sll         $a3, $t4, 24
    ctx->pc = 0x1bf300u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x1bf304: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x1bf304u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1bf308: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x1bf308u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x1bf30c: 0x24cc0005  addiu       $t4, $a2, 0x5
    ctx->pc = 0x1bf30cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 5));
    // 0x1bf310: 0xac470010  sw          $a3, 0x10($v0)
    ctx->pc = 0x1bf310u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 7));
    // 0x1bf314: 0xc5c00  sll         $t3, $t4, 16
    ctx->pc = 0x1bf314u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x1bf318: 0x1853821  addu        $a3, $t4, $a1
    ctx->pc = 0x1bf318u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x1bf31c: 0x24ea0500  addiu       $t2, $a3, 0x500
    ctx->pc = 0x1bf31cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 1280));
    // 0x1bf320: 0xc3e00  sll         $a3, $t4, 24
    ctx->pc = 0x1bf320u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x1bf324: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x1bf324u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1bf328: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x1bf328u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x1bf32c: 0x24cc0006  addiu       $t4, $a2, 0x6
    ctx->pc = 0x1bf32cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
    // 0x1bf330: 0xac470014  sw          $a3, 0x14($v0)
    ctx->pc = 0x1bf330u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 7));
    // 0x1bf334: 0xc5c00  sll         $t3, $t4, 16
    ctx->pc = 0x1bf334u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x1bf338: 0x1853821  addu        $a3, $t4, $a1
    ctx->pc = 0x1bf338u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x1bf33c: 0x24ea0600  addiu       $t2, $a3, 0x600
    ctx->pc = 0x1bf33cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 1536));
    // 0x1bf340: 0xc3e00  sll         $a3, $t4, 24
    ctx->pc = 0x1bf340u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x1bf344: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x1bf344u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1bf348: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x1bf348u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x1bf34c: 0x24cc0007  addiu       $t4, $a2, 0x7
    ctx->pc = 0x1bf34cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
    // 0x1bf350: 0xac470018  sw          $a3, 0x18($v0)
    ctx->pc = 0x1bf350u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 7));
    // 0x1bf354: 0xc5c00  sll         $t3, $t4, 16
    ctx->pc = 0x1bf354u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x1bf358: 0x1853821  addu        $a3, $t4, $a1
    ctx->pc = 0x1bf358u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x1bf35c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1bf35cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1bf360: 0x24ea0700  addiu       $t2, $a3, 0x700
    ctx->pc = 0x1bf360u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 1792));
    // 0x1bf364: 0x24a50800  addiu       $a1, $a1, 0x800
    ctx->pc = 0x1bf364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2048));
    // 0x1bf368: 0xc3e00  sll         $a3, $t4, 24
    ctx->pc = 0x1bf368u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x1bf36c: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x1bf36cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1bf370: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x1bf370u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x1bf374: 0xac47001c  sw          $a3, 0x1C($v0)
    ctx->pc = 0x1bf374u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 7));
    // 0x1bf378: 0x2cc70100  sltiu       $a3, $a2, 0x100
    ctx->pc = 0x1bf378u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1bf37c: 0x14e0ffbe  bnez        $a3, . + 4 + (-0x42 << 2)
    ctx->pc = 0x1BF37Cu;
    {
        const bool branch_taken_0x1bf37c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF37Cu;
        // 0x1bf380: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf37c) {
            ctx->pc = 0x1BF278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bf278;
        }
    }
    ctx->pc = 0x1BF384u;
    // 0x1bf384: 0x8e2578d0  lw          $a1, 0x78D0($s1)
    ctx->pc = 0x1bf384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 30928)));
    // 0x1bf388: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf38c: 0xc070468  jal         func_1C11A0
    ctx->pc = 0x1BF38Cu;
    SET_GPR_U32(ctx, 31, 0x1BF394u);
    ctx->pc = 0x1BF390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF38Cu;
    // 0x1bf390: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C11A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C11A0u, 0x1BF38Cu, 0x1BF394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF394u;
label_1bf394:
    // 0x1bf394: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf398: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bf398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf39c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bf39cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf3a0: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1BF3A0u;
    SET_GPR_U32(ctx, 31, 0x1BF3A8u);
    ctx->pc = 0x1BF3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF3A0u;
    // 0x1bf3a4: 0x2407000e  addiu       $a3, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1BF3A0u, 0x1BF3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF3A8u;
label_1bf3a8:
    // 0x1bf3a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bf3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf3ac: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x1bf3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x1bf3b0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bf3b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bf3b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf3b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf3b8: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x1bf3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1bf3bc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BF3BCu;
    SET_GPR_U32(ctx, 31, 0x1BF3C4u);
    ctx->pc = 0x1BF3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF3BCu;
    // 0x1bf3c0: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BF3BCu, 0x1BF3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF3C4u;
label_1bf3c4:
    // 0x1bf3c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf3c8: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1bf3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1bf3cc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BF3CCu;
    SET_GPR_U32(ctx, 31, 0x1BF3D4u);
    ctx->pc = 0x1BF3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF3CCu;
    // 0x1bf3d0: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BF3CCu, 0x1BF3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF3D4u;
label_1bf3d4:
    // 0x1bf3d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf3d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf3d8: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1bf3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1bf3dc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BF3DCu;
    SET_GPR_U32(ctx, 31, 0x1BF3E4u);
    ctx->pc = 0x1BF3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF3DCu;
    // 0x1bf3e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BF3DCu, 0x1BF3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF3E4u;
label_1bf3e4:
    // 0x1bf3e4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1bf3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1bf3e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf3ec: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x1bf3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1bf3f0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BF3F0u;
    SET_GPR_U32(ctx, 31, 0x1BF3F8u);
    ctx->pc = 0x1BF3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF3F0u;
    // 0x1bf3f4: 0x2303c  dsll32      $a2, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BF3F0u, 0x1BF3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF3F8u;
label_1bf3f8:
    // 0x1bf3f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf3fc: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BF3FCu;
    SET_GPR_U32(ctx, 31, 0x1BF404u);
    ctx->pc = 0x1BF400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF3FCu;
    // 0x1bf400: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BF3FCu, 0x1BF404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF404u;
label_1bf404:
    // 0x1bf404: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1bf404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bf408: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf40c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bf40cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bf410: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1bf410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1bf414: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x1bf414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x1bf418: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1bf418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1bf41c: 0x629025  or          $s2, $v1, $v0
    ctx->pc = 0x1bf41cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1bf420: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BF420u;
    SET_GPR_U32(ctx, 31, 0x1BF428u);
    ctx->pc = 0x1BF424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF420u;
    // 0x1bf424: 0x240500e0  addiu       $a1, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BF420u, 0x1BF428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF428u;
label_1bf428:
    // 0x1bf428: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1bf428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bf42c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1bf42cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bf430: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bf430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bf434: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1bf434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1bf438: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1bf438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1bf43c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bf43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bf440: 0x2432025  or          $a0, $s2, $v1
    ctx->pc = 0x1bf440u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x1bf444: 0x9e2378d0  lwu         $v1, 0x78D0($s1)
    ctx->pc = 0x1bf444u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 30928)));
    // 0x1bf448: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1bf448u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1bf44c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1bf44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1bf450: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf454: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bf454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bf458: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1bf458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1bf45c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1bf45cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1bf460: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BF460u;
    SET_GPR_U32(ctx, 31, 0x1BF468u);
    ctx->pc = 0x1BF464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF460u;
    // 0x1bf464: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BF460u, 0x1BF468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF468u;
label_1bf468:
    // 0x1bf468: 0x3c020204  lui         $v0, 0x204
    ctx->pc = 0x1bf468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)516 << 16));
    // 0x1bf46c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf470: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1bf470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1bf474: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BF474u;
    SET_GPR_U32(ctx, 31, 0x1BF47Cu);
    ctx->pc = 0x1BF478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF474u;
    // 0x1bf478: 0x34460090  ori         $a2, $v0, 0x90 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)144);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BF474u, 0x1BF47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF47Cu;
label_1bf47c:
    // 0x1bf47c: 0x240306fc  addiu       $v1, $zero, 0x6FC
    ctx->pc = 0x1bf47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1788));
    // 0x1bf480: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1bf480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1bf484: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bf484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bf488: 0x3442c005  ori         $v0, $v0, 0xC005
    ctx->pc = 0x1bf488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49157);
    // 0x1bf48c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf490: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1bf490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1bf494: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BF494u;
    SET_GPR_U32(ctx, 31, 0x1BF49Cu);
    ctx->pc = 0x1BF498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF494u;
    // 0x1bf498: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BF494u, 0x1BF49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF49Cu;
label_1bf49c:
    // 0x1bf49c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf4a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bf4a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf4a4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BF4A4u;
    SET_GPR_U32(ctx, 31, 0x1BF4ACu);
    ctx->pc = 0x1BF4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF4A4u;
    // 0x1bf4a8: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BF4A4u, 0x1BF4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF4ACu;
label_1bf4ac:
    // 0x1bf4ac: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1bf4acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf4b0: 0x2413001f  addiu       $s3, $zero, 0x1F
    ctx->pc = 0x1bf4b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1bf4b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1bf4b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bf4b8:
    // 0x1bf4b8: 0x13183c  dsll32      $v1, $s3, 0
    ctx->pc = 0x1bf4b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1bf4bc: 0x12203c  dsll32      $a0, $s2, 0
    ctx->pc = 0x1bf4bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1bf4c0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bf4c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bf4c4: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1bf4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x1bf4c8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1bf4c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1bf4cc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1bf4ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1bf4d0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bf4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bf4d4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1bf4d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1bf4d8: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1bf4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1bf4dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf4e0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BF4E0u;
    SET_GPR_U32(ctx, 31, 0x1BF4E8u);
    ctx->pc = 0x1BF4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF4E0u;
    // 0x1bf4e4: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BF4E0u, 0x1BF4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF4E8u;
label_1bf4e8:
    // 0x1bf4e8: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1bf4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1bf4ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf4f0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bf4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bf4f4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BF4F4u;
    SET_GPR_U32(ctx, 31, 0x1BF4FCu);
    ctx->pc = 0x1BF4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF4F4u;
    // 0x1bf4f8: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BF4F4u, 0x1BF4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF4FCu;
label_1bf4fc:
    // 0x1bf4fc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1bf4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bf500: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1bf500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1bf504: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bf504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bf508: 0x34427080  ori         $v0, $v0, 0x7080
    ctx->pc = 0x1bf508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28800);
    // 0x1bf50c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1bf50cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1bf510: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf514: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1bf514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1bf518: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BF518u;
    SET_GPR_U32(ctx, 31, 0x1BF520u);
    ctx->pc = 0x1BF51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF518u;
    // 0x1bf51c: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BF518u, 0x1BF520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF520u;
label_1bf520:
    // 0x1bf520: 0x3c021c09  lui         $v0, 0x1C09
    ctx->pc = 0x1bf520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7177 << 16));
    // 0x1bf524: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf528: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bf528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bf52c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BF52Cu;
    SET_GPR_U32(ctx, 31, 0x1BF534u);
    ctx->pc = 0x1BF530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF52Cu;
    // 0x1bf530: 0x34461009  ori         $a2, $v0, 0x1009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BF52Cu, 0x1BF534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF534u;
label_1bf534:
    // 0x1bf534: 0x3c029500  lui         $v0, 0x9500
    ctx->pc = 0x1bf534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38144 << 16));
    // 0x1bf538: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf53c: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x1bf53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x1bf540: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1bf540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bf544: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BF544u;
    SET_GPR_U32(ctx, 31, 0x1BF54Cu);
    ctx->pc = 0x1BF548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF544u;
    // 0x1bf548: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BF544u, 0x1BF54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF54Cu;
label_1bf54c:
    // 0x1bf54c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1bf54cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1bf550: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x1bf550u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x1bf554: 0x2e820008  sltiu       $v0, $s4, 0x8
    ctx->pc = 0x1bf554u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1bf558: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1BF558u;
    {
        const bool branch_taken_0x1bf558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF558u;
        // 0x1bf55c: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf558) {
            ctx->pc = 0x1BF4B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bf4b8;
        }
    }
    ctx->pc = 0x1BF560u;
    // 0x1bf560: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf564: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1BF564u;
    SET_GPR_U32(ctx, 31, 0x1BF56Cu);
    ctx->pc = 0x1BF568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF564u;
    // 0x1bf568: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1BF564u, 0x1BF56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF56Cu;
label_1bf56c:
    // 0x1bf56c: 0xc0705e8  jal         func_1C17A0
    ctx->pc = 0x1BF56Cu;
    SET_GPR_U32(ctx, 31, 0x1BF574u);
    ctx->pc = 0x1BF570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF56Cu;
    // 0x1bf570: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C17A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C17A0u, 0x1BF56Cu, 0x1BF574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF574u;
label_1bf574:
    // 0x1bf574: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x1bf574u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bf578: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf57c: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1bf57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x1bf580: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1bf580u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1bf584: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x1bf584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1bf588: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1bf588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1bf58c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1bf58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1bf590: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bf590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bf594: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1bf594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1bf598: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BF598u;
    SET_GPR_U32(ctx, 31, 0x1BF5A0u);
    ctx->pc = 0x1BF59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF598u;
    // 0x1bf59c: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BF598u, 0x1BF5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF5A0u;
label_1bf5a0:
    // 0x1bf5a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf5a4: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BF5A4u;
    SET_GPR_U32(ctx, 31, 0x1BF5ACu);
    ctx->pc = 0x1BF5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF5A4u;
    // 0x1bf5a8: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BF5A4u, 0x1BF5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF5ACu;
label_1bf5ac:
    // 0x1bf5ac: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1bf5acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bf5b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf5b4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bf5b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bf5b8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1bf5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1bf5bc: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x1bf5bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x1bf5c0: 0x34421200  ori         $v0, $v0, 0x1200
    ctx->pc = 0x1bf5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4608);
    // 0x1bf5c4: 0x629025  or          $s2, $v1, $v0
    ctx->pc = 0x1bf5c4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1bf5c8: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BF5C8u;
    SET_GPR_U32(ctx, 31, 0x1BF5D0u);
    ctx->pc = 0x1BF5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF5C8u;
    // 0x1bf5cc: 0x24050070  addiu       $a1, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BF5C8u, 0x1BF5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF5D0u;
label_1bf5d0:
    // 0x1bf5d0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1bf5d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bf5d4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1bf5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bf5d8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bf5d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bf5dc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1bf5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1bf5e0: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1bf5e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1bf5e4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bf5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bf5e8: 0x2432025  or          $a0, $s2, $v1
    ctx->pc = 0x1bf5e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x1bf5ec: 0x9e2378d0  lwu         $v1, 0x78D0($s1)
    ctx->pc = 0x1bf5ecu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 30928)));
    // 0x1bf5f0: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1bf5f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1bf5f4: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1bf5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1bf5f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf5f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf5fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bf5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bf600: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1bf600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1bf604: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1bf604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1bf608: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BF608u;
    SET_GPR_U32(ctx, 31, 0x1BF610u);
    ctx->pc = 0x1BF60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF608u;
    // 0x1bf60c: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BF608u, 0x1BF610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF610u;
label_1bf610:
    // 0x1bf610: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf614: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1bf614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1bf618: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BF618u;
    SET_GPR_U32(ctx, 31, 0x1BF620u);
    ctx->pc = 0x1BF61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF618u;
    // 0x1bf61c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BF618u, 0x1BF620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF620u;
label_1bf620:
    // 0x1bf620: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf624: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bf624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf628: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BF628u;
    SET_GPR_U32(ctx, 31, 0x1BF630u);
    ctx->pc = 0x1BF62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF628u;
    // 0x1bf62c: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BF628u, 0x1BF630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF630u;
label_1bf630:
    // 0x1bf630: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf634: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1bf634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1bf638: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BF638u;
    SET_GPR_U32(ctx, 31, 0x1BF640u);
    ctx->pc = 0x1BF63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF638u;
    // 0x1bf63c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BF638u, 0x1BF640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF640u;
label_1bf640:
    // 0x1bf640: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1bf640u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf644: 0x2413003f  addiu       $s3, $zero, 0x3F
    ctx->pc = 0x1bf644u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1bf648: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1bf648u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf64c: 0x0  nop
    ctx->pc = 0x1bf64cu;
    // NOP
label_1bf650:
    // 0x1bf650: 0x13183c  dsll32      $v1, $s3, 0
    ctx->pc = 0x1bf650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1bf654: 0x12203c  dsll32      $a0, $s2, 0
    ctx->pc = 0x1bf654u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1bf658: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bf658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bf65c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1bf65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1bf660: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1bf660u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1bf664: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1bf664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1bf668: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bf668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bf66c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1bf66cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1bf670: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1bf670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1bf674: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf678: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BF678u;
    SET_GPR_U32(ctx, 31, 0x1BF680u);
    ctx->pc = 0x1BF67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF678u;
    // 0x1bf67c: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BF678u, 0x1BF680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF680u;
label_1bf680:
    // 0x1bf680: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1bf680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1bf684: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf688: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bf688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bf68c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BF68Cu;
    SET_GPR_U32(ctx, 31, 0x1BF694u);
    ctx->pc = 0x1BF690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF68Cu;
    // 0x1bf690: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BF68Cu, 0x1BF694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF694u;
label_1bf694:
    // 0x1bf694: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1bf694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1bf698: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf69c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1bf69cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1bf6a0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BF6A0u;
    SET_GPR_U32(ctx, 31, 0x1BF6A8u);
    ctx->pc = 0x1BF6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF6A0u;
    // 0x1bf6a4: 0x34467000  ori         $a2, $v0, 0x7000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BF6A0u, 0x1BF6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF6A8u;
label_1bf6a8:
    // 0x1bf6a8: 0x3c020709  lui         $v0, 0x709
    ctx->pc = 0x1bf6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1801 << 16));
    // 0x1bf6ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf6b0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bf6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bf6b4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BF6B4u;
    SET_GPR_U32(ctx, 31, 0x1BF6BCu);
    ctx->pc = 0x1BF6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF6B4u;
    // 0x1bf6b8: 0x34461009  ori         $a2, $v0, 0x1009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BF6B4u, 0x1BF6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF6BCu;
label_1bf6bc:
    // 0x1bf6bc: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1bf6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1bf6c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf6c4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1bf6c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1bf6c8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1bf6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bf6cc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BF6CCu;
    SET_GPR_U32(ctx, 31, 0x1BF6D4u);
    ctx->pc = 0x1BF6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF6CCu;
    // 0x1bf6d0: 0x34468000  ori         $a2, $v0, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BF6CCu, 0x1BF6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF6D4u;
label_1bf6d4:
    // 0x1bf6d4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1bf6d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1bf6d8: 0x26730040  addiu       $s3, $s3, 0x40
    ctx->pc = 0x1bf6d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x1bf6dc: 0x2e820004  sltiu       $v0, $s4, 0x4
    ctx->pc = 0x1bf6dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1bf6e0: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1BF6E0u;
    {
        const bool branch_taken_0x1bf6e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF6E0u;
        // 0x1bf6e4: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf6e0) {
            ctx->pc = 0x1BF650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bf650;
        }
    }
    ctx->pc = 0x1BF6E8u;
    // 0x1bf6e8: 0xc0705e8  jal         func_1C17A0
    ctx->pc = 0x1BF6E8u;
    SET_GPR_U32(ctx, 31, 0x1BF6F0u);
    ctx->pc = 0x1BF6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF6E8u;
    // 0x1bf6ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C17A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C17A0u, 0x1BF6E8u, 0x1BF6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF6F0u;
label_1bf6f0:
    // 0x1bf6f0: 0x2029821  addu        $s3, $s0, $v0
    ctx->pc = 0x1bf6f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1bf6f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf6f8: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BF6F8u;
    SET_GPR_U32(ctx, 31, 0x1BF700u);
    ctx->pc = 0x1BF6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF6F8u;
    // 0x1bf6fc: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BF6F8u, 0x1BF700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF700u;
label_1bf700:
    // 0x1bf700: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bf700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf704: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf708: 0x439004  sllv        $s2, $v1, $v0
    ctx->pc = 0x1bf708u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1bf70c: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BF70Cu;
    SET_GPR_U32(ctx, 31, 0x1BF714u);
    ctx->pc = 0x1BF710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF70Cu;
    // 0x1bf710: 0x24050070  addiu       $a1, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BF70Cu, 0x1BF714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF714u;
label_1bf714:
    // 0x1bf714: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bf714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf718: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1bf718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf71c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1bf71cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf720: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf724: 0x434004  sllv        $t0, $v1, $v0
    ctx->pc = 0x1bf724u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1bf728: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1bf728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1bf72c: 0xc06f9ec  jal         func_1BE7B0
    ctx->pc = 0x1BF72Cu;
    SET_GPR_U32(ctx, 31, 0x1BF734u);
    ctx->pc = 0x1BF730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF72Cu;
    // 0x1bf730: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE7B0u, 0x1BF72Cu, 0x1BF734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF734u;
label_1bf734:
    // 0x1bf734: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf738: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bf738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf73c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bf73cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf740: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1BF740u;
    SET_GPR_U32(ctx, 31, 0x1BF748u);
    ctx->pc = 0x1BF744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF740u;
    // 0x1bf744: 0x2407000e  addiu       $a3, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1BF740u, 0x1BF748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF748u;
label_1bf748:
    // 0x1bf748: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf74c: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1BF74Cu;
    SET_GPR_U32(ctx, 31, 0x1BF754u);
    ctx->pc = 0x1BF750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF74Cu;
    // 0x1bf750: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1BF74Cu, 0x1BF754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF754u;
label_1bf754:
    // 0x1bf754: 0xc0705e8  jal         func_1C17A0
    ctx->pc = 0x1BF754u;
    SET_GPR_U32(ctx, 31, 0x1BF75Cu);
    ctx->pc = 0x1BF758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF754u;
    // 0x1bf758: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C17A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C17A0u, 0x1BF754u, 0x1BF75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF75Cu;
label_1bf75c:
    // 0x1bf75c: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1bf75cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1bf760: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf764: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x1bf764u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bf768: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BF768u;
    SET_GPR_U32(ctx, 31, 0x1BF770u);
    ctx->pc = 0x1BF76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF768u;
    // 0x1bf76c: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BF768u, 0x1BF770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF770u;
label_1bf770:
    // 0x1bf770: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bf770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf774: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf778: 0x438004  sllv        $s0, $v1, $v0
    ctx->pc = 0x1bf778u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1bf77c: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BF77Cu;
    SET_GPR_U32(ctx, 31, 0x1BF784u);
    ctx->pc = 0x1BF780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF77Cu;
    // 0x1bf780: 0x24050070  addiu       $a1, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BF77Cu, 0x1BF784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF784u;
label_1bf784:
    // 0x1bf784: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bf784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf788: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1bf788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf78c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1bf78cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf790: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf794: 0x434004  sllv        $t0, $v1, $v0
    ctx->pc = 0x1bf794u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1bf798: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1bf798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1bf79c: 0xc06f9ec  jal         func_1BE7B0
    ctx->pc = 0x1BF79Cu;
    SET_GPR_U32(ctx, 31, 0x1BF7A4u);
    ctx->pc = 0x1BF7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF79Cu;
    // 0x1bf7a0: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE7B0u, 0x1BF79Cu, 0x1BF7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF7A4u;
label_1bf7a4:
    // 0x1bf7a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf7a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf7a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bf7a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf7ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bf7acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf7b0: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1BF7B0u;
    SET_GPR_U32(ctx, 31, 0x1BF7B8u);
    ctx->pc = 0x1BF7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF7B0u;
    // 0x1bf7b4: 0x2407000e  addiu       $a3, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1BF7B0u, 0x1BF7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF7B8u;
label_1bf7b8:
    // 0x1bf7b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf7b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf7bc: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1BF7BCu;
    SET_GPR_U32(ctx, 31, 0x1BF7C4u);
    ctx->pc = 0x1BF7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF7BCu;
    // 0x1bf7c0: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1BF7BCu, 0x1BF7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF7C4u;
label_1bf7c4:
    // 0x1bf7c4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1bf7c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bf7c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1bf7c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bf7cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bf7ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bf7d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bf7d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bf7d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bf7d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bf7d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bf7d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bf7dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF7DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF7DCu;
        // 0x1bf7e0: 0x27bd0460  addiu       $sp, $sp, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF7DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF7E4u;
}
