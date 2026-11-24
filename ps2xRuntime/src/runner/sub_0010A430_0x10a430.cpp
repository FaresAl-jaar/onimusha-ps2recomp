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

// Function: sub_0010A430
// Address: 0x10a430 - 0x10a614
void sub_0010A430_0x10a430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A430_0x10a430");
#endif

    switch (ctx->pc) {
        case 0x10a448u: goto label_10a448;
        case 0x10a458u: goto label_10a458;
        case 0x10a468u: goto label_10a468;
        case 0x10a478u: goto label_10a478;
        case 0x10a488u: goto label_10a488;
        case 0x10a4b8u: goto label_10a4b8;
        case 0x10a4d8u: goto label_10a4d8;
        case 0x10a4e8u: goto label_10a4e8;
        case 0x10a4f8u: goto label_10a4f8;
        case 0x10a508u: goto label_10a508;
        case 0x10a538u: goto label_10a538;
        case 0x10a568u: goto label_10a568;
        case 0x10a598u: goto label_10a598;
        case 0x10a5a8u: goto label_10a5a8;
        case 0x10a5b4u: goto label_10a5b4;
        case 0x10a5c4u: goto label_10a5c4;
        case 0x10a5d4u: goto label_10a5d4;
        case 0x10a5e0u: goto label_10a5e0;
        case 0x10a5ecu: goto label_10a5ec;
        case 0x10a5f8u: goto label_10a5f8;
        case 0x10a604u: goto label_10a604;
        default: break;
    }

    ctx->pc = 0x10a430u;

    // 0x10a430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10a430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10a434: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x10a434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10a438: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10a438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10a43c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10a43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10a440: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10A440u;
    SET_GPR_U32(ctx, 31, 0x10A448u);
    ctx->pc = 0x10A444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A440u;
    // 0x10a444: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10A440u, 0x10A448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A448u;
label_10a448:
    // 0x10a448: 0xae020174  sw          $v0, 0x174($s0)
    ctx->pc = 0x10a448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 2));
    // 0x10a44c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a450: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10A450u;
    SET_GPR_U32(ctx, 31, 0x10A458u);
    ctx->pc = 0x10A454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A450u;
    // 0x10a454: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10A450u, 0x10A458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A458u;
label_10a458:
    // 0x10a458: 0xae020178  sw          $v0, 0x178($s0)
    ctx->pc = 0x10a458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 376), GPR_U32(ctx, 2));
    // 0x10a45c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a45cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a460: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10A460u;
    SET_GPR_U32(ctx, 31, 0x10A468u);
    ctx->pc = 0x10A464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A460u;
    // 0x10a464: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10A460u, 0x10A468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A468u;
label_10a468:
    // 0x10a468: 0xae02017c  sw          $v0, 0x17C($s0)
    ctx->pc = 0x10a468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 2));
    // 0x10a46c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a470: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10A470u;
    SET_GPR_U32(ctx, 31, 0x10A478u);
    ctx->pc = 0x10A474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A470u;
    // 0x10a474: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10A470u, 0x10A478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A478u;
label_10a478:
    // 0x10a478: 0xae020180  sw          $v0, 0x180($s0)
    ctx->pc = 0x10a478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 2));
    // 0x10a47c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a480: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10A480u;
    SET_GPR_U32(ctx, 31, 0x10A488u);
    ctx->pc = 0x10A484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A480u;
    // 0x10a484: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10A480u, 0x10A488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A488u;
label_10a488:
    // 0x10a488: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x10a488u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x10a48c: 0x3c06fffc  lui         $a2, 0xFFFC
    ctx->pc = 0x10a48cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65532 << 16));
    // 0x10a490: 0x34e72010  ori         $a3, $a3, 0x2010
    ctx->pc = 0x10a490u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8208);
    // 0x10a494: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x10a494u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x10a498: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x10a498u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x10a49c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x10a49cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x10a4a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a4a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a4a4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x10a4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10a4a8: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x10a4a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x10a4ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x10a4acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x10a4b0: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10A4B0u;
    SET_GPR_U32(ctx, 31, 0x10A4B8u);
    ctx->pc = 0x10A4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A4B0u;
    // 0x10a4b4: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10A4B0u, 0x10A4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A4B8u;
label_10a4b8:
    // 0x10a4b8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10a4b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a4bc: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x10a4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x10a4c0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x10A4C0u;
    {
        const bool branch_taken_0x10a4c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A4C0u;
        // 0x10a4c4: 0xae030184  sw          $v1, 0x184($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a4c0) {
            ctx->pc = 0x10A4CCu;
            goto label_10a4cc;
        }
    }
    ctx->pc = 0x10A4C8u;
    // 0x10a4c8: 0xae0300e8  sw          $v1, 0xE8($s0)
    ctx->pc = 0x10a4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 3));
label_10a4cc:
    // 0x10a4cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a4ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a4d0: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10A4D0u;
    SET_GPR_U32(ctx, 31, 0x10A4D8u);
    ctx->pc = 0x10A4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A4D0u;
    // 0x10a4d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10A4D0u, 0x10A4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A4D8u;
label_10a4d8:
    // 0x10a4d8: 0xae020188  sw          $v0, 0x188($s0)
    ctx->pc = 0x10a4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 2));
    // 0x10a4dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a4e0: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10A4E0u;
    SET_GPR_U32(ctx, 31, 0x10A4E8u);
    ctx->pc = 0x10A4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A4E0u;
    // 0x10a4e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10A4E0u, 0x10A4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A4E8u;
label_10a4e8:
    // 0x10a4e8: 0xae02018c  sw          $v0, 0x18C($s0)
    ctx->pc = 0x10a4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 2));
    // 0x10a4ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a4f0: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10A4F0u;
    SET_GPR_U32(ctx, 31, 0x10A4F8u);
    ctx->pc = 0x10A4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A4F0u;
    // 0x10a4f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10A4F0u, 0x10A4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A4F8u;
label_10a4f8:
    // 0x10a4f8: 0xae020190  sw          $v0, 0x190($s0)
    ctx->pc = 0x10a4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 2));
    // 0x10a4fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a500: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10A500u;
    SET_GPR_U32(ctx, 31, 0x10A508u);
    ctx->pc = 0x10A504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A500u;
    // 0x10a504: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10A500u, 0x10A508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A508u;
label_10a508:
    // 0x10a508: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x10a508u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x10a50c: 0x8cc62010  lw          $a2, 0x2010($a2)
    ctx->pc = 0x10a50cu;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x10a510: 0x3c03ffbf  lui         $v1, 0xFFBF
    ctx->pc = 0x10a510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65471 << 16));
    // 0x10a514: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x10a514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x10a518: 0x21580  sll         $v0, $v0, 22
    ctx->pc = 0x10a518u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 22));
    // 0x10a51c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x10a51cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x10a520: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a524: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x10a524u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x10a528: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10a528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a52c: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x10a52cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x10a530: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10A530u;
    SET_GPR_U32(ctx, 31, 0x10A538u);
    ctx->pc = 0x10A534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A530u;
    // 0x10a534: 0xac262010  sw          $a2, 0x2010($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10A530u, 0x10A538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A538u;
label_10a538:
    // 0x10a538: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x10a538u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x10a53c: 0x8cc62010  lw          $a2, 0x2010($a2)
    ctx->pc = 0x10a53cu;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x10a540: 0x3c03ffdf  lui         $v1, 0xFFDF
    ctx->pc = 0x10a540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65503 << 16));
    // 0x10a544: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x10a544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x10a548: 0x21540  sll         $v0, $v0, 21
    ctx->pc = 0x10a548u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 21));
    // 0x10a54c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x10a54cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x10a550: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a554: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x10a554u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x10a558: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10a558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a55c: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x10a55cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x10a560: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10A560u;
    SET_GPR_U32(ctx, 31, 0x10A568u);
    ctx->pc = 0x10A564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A560u;
    // 0x10a564: 0xac262010  sw          $a2, 0x2010($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10A560u, 0x10A568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A568u;
label_10a568:
    // 0x10a568: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x10a568u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x10a56c: 0x8cc62010  lw          $a2, 0x2010($a2)
    ctx->pc = 0x10a56cu;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x10a570: 0x3c03ffef  lui         $v1, 0xFFEF
    ctx->pc = 0x10a570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65519 << 16));
    // 0x10a574: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x10a574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x10a578: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x10a578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x10a57c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x10a57cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x10a580: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a584: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x10a584u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x10a588: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10a588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a58c: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x10a58cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x10a590: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10A590u;
    SET_GPR_U32(ctx, 31, 0x10A598u);
    ctx->pc = 0x10A594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A590u;
    // 0x10a594: 0xac262010  sw          $a2, 0x2010($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10A590u, 0x10A598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A598u;
label_10a598:
    // 0x10a598: 0xae020194  sw          $v0, 0x194($s0)
    ctx->pc = 0x10a598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 2));
    // 0x10a59c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a5a0: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10A5A0u;
    SET_GPR_U32(ctx, 31, 0x10A5A8u);
    ctx->pc = 0x10A5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A5A0u;
    // 0x10a5a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10A5A0u, 0x10A5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A5A8u;
label_10a5a8:
    // 0x10a5a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a5a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a5ac: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10A5ACu;
    SET_GPR_U32(ctx, 31, 0x10A5B4u);
    ctx->pc = 0x10A5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A5ACu;
    // 0x10a5b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10A5ACu, 0x10A5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A5B4u;
label_10a5b4:
    // 0x10a5b4: 0xae020198  sw          $v0, 0x198($s0)
    ctx->pc = 0x10a5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 2));
    // 0x10a5b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a5bc: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10A5BCu;
    SET_GPR_U32(ctx, 31, 0x10A5C4u);
    ctx->pc = 0x10A5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A5BCu;
    // 0x10a5c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10A5BCu, 0x10A5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A5C4u;
label_10a5c4:
    // 0x10a5c4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x10A5C4u;
    {
        const bool branch_taken_0x10a5c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A5C4u;
        // 0x10a5c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a5c4) {
            ctx->pc = 0x10A604u;
            goto label_10a604;
        }
    }
    ctx->pc = 0x10A5CCu;
    // 0x10a5cc: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10A5CCu;
    SET_GPR_U32(ctx, 31, 0x10A5D4u);
    ctx->pc = 0x10A5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A5CCu;
    // 0x10a5d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10A5CCu, 0x10A5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A5D4u;
label_10a5d4:
    // 0x10a5d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a5d8: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10A5D8u;
    SET_GPR_U32(ctx, 31, 0x10A5E0u);
    ctx->pc = 0x10A5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A5D8u;
    // 0x10a5dc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10A5D8u, 0x10A5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A5E0u;
label_10a5e0:
    // 0x10a5e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a5e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a5e4: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10A5E4u;
    SET_GPR_U32(ctx, 31, 0x10A5ECu);
    ctx->pc = 0x10A5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A5E4u;
    // 0x10a5e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10A5E4u, 0x10A5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A5ECu;
label_10a5ec:
    // 0x10a5ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a5ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a5f0: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10A5F0u;
    SET_GPR_U32(ctx, 31, 0x10A5F8u);
    ctx->pc = 0x10A5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A5F0u;
    // 0x10a5f4: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10A5F0u, 0x10A5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A5F8u;
label_10a5f8:
    // 0x10a5f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10a5f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a5fc: 0xc042132  jal         func_1084C8
    ctx->pc = 0x10A5FCu;
    SET_GPR_U32(ctx, 31, 0x10A604u);
    ctx->pc = 0x10A600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A5FCu;
    // 0x10a600: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084C8u, 0x10A5FCu, 0x10A604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A604u;
label_10a604:
    // 0x10a604: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10a604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a608: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10a608u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a60c: 0x3e00008  jr          $ra
    ctx->pc = 0x10A60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A60Cu;
        // 0x10a610: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A60Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A614u;
}
