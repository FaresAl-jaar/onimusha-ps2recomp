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

// Function: sub_002BA050
// Address: 0x2ba050 - 0x2ba178
void sub_002BA050_0x2ba050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BA050_0x2ba050");
#endif

    switch (ctx->pc) {
        case 0x2ba050u: goto label_2ba050;
        case 0x2ba054u: goto label_2ba054;
        case 0x2ba058u: goto label_2ba058;
        case 0x2ba05cu: goto label_2ba05c;
        case 0x2ba060u: goto label_2ba060;
        case 0x2ba064u: goto label_2ba064;
        case 0x2ba068u: goto label_2ba068;
        case 0x2ba06cu: goto label_2ba06c;
        case 0x2ba070u: goto label_2ba070;
        case 0x2ba074u: goto label_2ba074;
        case 0x2ba078u: goto label_2ba078;
        case 0x2ba07cu: goto label_2ba07c;
        case 0x2ba080u: goto label_2ba080;
        case 0x2ba084u: goto label_2ba084;
        case 0x2ba088u: goto label_2ba088;
        case 0x2ba08cu: goto label_2ba08c;
        case 0x2ba090u: goto label_2ba090;
        case 0x2ba094u: goto label_2ba094;
        case 0x2ba098u: goto label_2ba098;
        case 0x2ba09cu: goto label_2ba09c;
        case 0x2ba0a0u: goto label_2ba0a0;
        case 0x2ba0a4u: goto label_2ba0a4;
        case 0x2ba0a8u: goto label_2ba0a8;
        case 0x2ba0acu: goto label_2ba0ac;
        case 0x2ba0b0u: goto label_2ba0b0;
        case 0x2ba0b4u: goto label_2ba0b4;
        case 0x2ba0b8u: goto label_2ba0b8;
        case 0x2ba0bcu: goto label_2ba0bc;
        case 0x2ba0c0u: goto label_2ba0c0;
        case 0x2ba0c4u: goto label_2ba0c4;
        case 0x2ba0c8u: goto label_2ba0c8;
        case 0x2ba0ccu: goto label_2ba0cc;
        case 0x2ba0d0u: goto label_2ba0d0;
        case 0x2ba0d4u: goto label_2ba0d4;
        case 0x2ba0d8u: goto label_2ba0d8;
        case 0x2ba0dcu: goto label_2ba0dc;
        case 0x2ba0e0u: goto label_2ba0e0;
        case 0x2ba0e4u: goto label_2ba0e4;
        case 0x2ba0e8u: goto label_2ba0e8;
        case 0x2ba0ecu: goto label_2ba0ec;
        case 0x2ba0f0u: goto label_2ba0f0;
        case 0x2ba0f4u: goto label_2ba0f4;
        case 0x2ba0f8u: goto label_2ba0f8;
        case 0x2ba0fcu: goto label_2ba0fc;
        case 0x2ba100u: goto label_2ba100;
        case 0x2ba104u: goto label_2ba104;
        case 0x2ba108u: goto label_2ba108;
        case 0x2ba10cu: goto label_2ba10c;
        case 0x2ba110u: goto label_2ba110;
        case 0x2ba114u: goto label_2ba114;
        case 0x2ba118u: goto label_2ba118;
        case 0x2ba11cu: goto label_2ba11c;
        case 0x2ba120u: goto label_2ba120;
        case 0x2ba124u: goto label_2ba124;
        case 0x2ba128u: goto label_2ba128;
        case 0x2ba12cu: goto label_2ba12c;
        case 0x2ba130u: goto label_2ba130;
        case 0x2ba134u: goto label_2ba134;
        case 0x2ba138u: goto label_2ba138;
        case 0x2ba13cu: goto label_2ba13c;
        case 0x2ba140u: goto label_2ba140;
        case 0x2ba144u: goto label_2ba144;
        case 0x2ba148u: goto label_2ba148;
        case 0x2ba14cu: goto label_2ba14c;
        case 0x2ba150u: goto label_2ba150;
        case 0x2ba154u: goto label_2ba154;
        case 0x2ba158u: goto label_2ba158;
        case 0x2ba15cu: goto label_2ba15c;
        case 0x2ba160u: goto label_2ba160;
        case 0x2ba164u: goto label_2ba164;
        case 0x2ba168u: goto label_2ba168;
        case 0x2ba16cu: goto label_2ba16c;
        case 0x2ba170u: goto label_2ba170;
        case 0x2ba174u: goto label_2ba174;
        default: break;
    }

    ctx->pc = 0x2ba050u;

label_2ba050:
    // 0x2ba050: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ba050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2ba054:
    // 0x2ba054: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ba054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2ba058:
    // 0x2ba058: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ba058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2ba05c:
    // 0x2ba05c: 0xc0a6d4c  jal         func_29B530
label_2ba060:
    if (ctx->pc == 0x2BA060u) {
        ctx->pc = 0x2BA060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA05Cu;
        // 0x2ba060: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA064u;
        goto label_2ba064;
    }
    ctx->pc = 0x2BA05Cu;
    SET_GPR_U32(ctx, 31, 0x2BA064u);
    ctx->pc = 0x2BA060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA05Cu;
    // 0x2ba060: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B530u, 0x2BA05Cu, 0x2BA064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA064u;
label_2ba064:
    // 0x2ba064: 0x8e040078  lw          $a0, 0x78($s0)
    ctx->pc = 0x2ba064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_2ba068:
    // 0x2ba068: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_2ba06c:
    if (ctx->pc == 0x2BA06Cu) {
        ctx->pc = 0x2BA070u;
        goto label_2ba070;
    }
    ctx->pc = 0x2BA068u;
    {
        const bool branch_taken_0x2ba068 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba068) {
            ctx->pc = 0x2BA090u;
            goto label_2ba090;
        }
    }
    ctx->pc = 0x2BA070u;
label_2ba070:
    // 0x2ba070: 0x9083007c  lbu         $v1, 0x7C($a0)
    ctx->pc = 0x2ba070u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 124)));
label_2ba074:
    // 0x2ba074: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_2ba078:
    if (ctx->pc == 0x2BA078u) {
        ctx->pc = 0x2BA07Cu;
        goto label_2ba07c;
    }
    ctx->pc = 0x2BA074u;
    {
        const bool branch_taken_0x2ba074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba074) {
            ctx->pc = 0x2BA090u;
            goto label_2ba090;
        }
    }
    ctx->pc = 0x2BA07Cu;
label_2ba07c:
    // 0x2ba07c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2ba07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2ba080:
    // 0x2ba080: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2ba084:
    if (ctx->pc == 0x2BA084u) {
        ctx->pc = 0x2BA084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA080u;
        // 0x2ba084: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA088u;
        goto label_2ba088;
    }
    ctx->pc = 0x2BA080u;
    {
        const bool branch_taken_0x2ba080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA080u;
        // 0x2ba084: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba080) {
            ctx->pc = 0x2BA090u;
            goto label_2ba090;
        }
    }
    ctx->pc = 0x2BA088u;
label_2ba088:
    // 0x2ba088: 0xc05efdc  jal         func_17BF70
label_2ba08c:
    if (ctx->pc == 0x2BA08Cu) {
        ctx->pc = 0x2BA090u;
        goto label_2ba090;
    }
    ctx->pc = 0x2BA088u;
    SET_GPR_U32(ctx, 31, 0x2BA090u);
    ctx->pc = 0x17BF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BF70u, 0x2BA088u, 0x2BA090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA090u;
label_2ba090:
    // 0x2ba090: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x2ba090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_2ba094:
    // 0x2ba094: 0x10800024  beqz        $a0, . + 4 + (0x24 << 2)
label_2ba098:
    if (ctx->pc == 0x2BA098u) {
        ctx->pc = 0x2BA09Cu;
        goto label_2ba09c;
    }
    ctx->pc = 0x2BA094u;
    {
        const bool branch_taken_0x2ba094 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba094) {
            ctx->pc = 0x2BA128u;
            goto label_2ba128;
        }
    }
    ctx->pc = 0x2BA09Cu;
label_2ba09c:
    // 0x2ba09c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2ba09cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ba0a0:
    // 0x2ba0a0: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2ba0a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2ba0a4:
    // 0x2ba0a4: 0x320f809  jalr        $t9
label_2ba0a8:
    if (ctx->pc == 0x2BA0A8u) {
        ctx->pc = 0x2BA0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA0A4u;
        // 0x2ba0a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA0ACu;
        goto label_2ba0ac;
    }
    ctx->pc = 0x2BA0A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BA0ACu);
        ctx->pc = 0x2BA0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA0A4u;
        // 0x2ba0a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA0A4u, 0x2BA0ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BA0ACu;
label_2ba0ac:
    // 0x2ba0ac: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x2ba0acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_2ba0b0:
    // 0x2ba0b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2ba0b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ba0b4:
    // 0x2ba0b4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2ba0b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2ba0b8:
    // 0x2ba0b8: 0x320f809  jalr        $t9
label_2ba0bc:
    if (ctx->pc == 0x2BA0BCu) {
        ctx->pc = 0x2BA0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA0B8u;
        // 0x2ba0bc: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA0C0u;
        goto label_2ba0c0;
    }
    ctx->pc = 0x2BA0B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BA0C0u);
        ctx->pc = 0x2BA0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA0B8u;
        // 0x2ba0bc: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA0B8u, 0x2BA0C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BA0C0u;
label_2ba0c0:
    // 0x2ba0c0: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x2ba0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_2ba0c4:
    // 0x2ba0c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ba0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ba0c8:
    // 0x2ba0c8: 0x908500ce  lbu         $a1, 0xCE($a0)
    ctx->pc = 0x2ba0c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 206)));
label_2ba0cc:
    // 0x2ba0cc: 0x14a30016  bne         $a1, $v1, . + 4 + (0x16 << 2)
label_2ba0d0:
    if (ctx->pc == 0x2BA0D0u) {
        ctx->pc = 0x2BA0D4u;
        goto label_2ba0d4;
    }
    ctx->pc = 0x2BA0CCu;
    {
        const bool branch_taken_0x2ba0cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2ba0cc) {
            ctx->pc = 0x2BA128u;
            goto label_2ba128;
        }
    }
    ctx->pc = 0x2BA0D4u;
label_2ba0d4:
    // 0x2ba0d4: 0xc0615a8  jal         func_1856A0
label_2ba0d8:
    if (ctx->pc == 0x2BA0D8u) {
        ctx->pc = 0x2BA0DCu;
        goto label_2ba0dc;
    }
    ctx->pc = 0x2BA0D4u;
    SET_GPR_U32(ctx, 31, 0x2BA0DCu);
    ctx->pc = 0x1856A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1856A0u, 0x2BA0D4u, 0x2BA0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA0DCu;
label_2ba0dc:
    // 0x2ba0dc: 0xc061600  jal         func_185800
label_2ba0e0:
    if (ctx->pc == 0x2BA0E0u) {
        ctx->pc = 0x2BA0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA0DCu;
        // 0x2ba0e0: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA0E4u;
        goto label_2ba0e4;
    }
    ctx->pc = 0x2BA0DCu;
    SET_GPR_U32(ctx, 31, 0x2BA0E4u);
    ctx->pc = 0x2BA0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA0DCu;
    // 0x2ba0e0: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185800u, 0x2BA0DCu, 0x2BA0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA0E4u;
label_2ba0e4:
    // 0x2ba0e4: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x2ba0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_2ba0e8:
    // 0x2ba0e8: 0xc06185c  jal         func_186170
label_2ba0ec:
    if (ctx->pc == 0x2BA0ECu) {
        ctx->pc = 0x2BA0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA0E8u;
        // 0x2ba0ec: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA0F0u;
        goto label_2ba0f0;
    }
    ctx->pc = 0x2BA0E8u;
    SET_GPR_U32(ctx, 31, 0x2BA0F0u);
    ctx->pc = 0x2BA0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA0E8u;
    // 0x2ba0ec: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186170u, 0x2BA0E8u, 0x2BA0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA0F0u;
label_2ba0f0:
    // 0x2ba0f0: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2ba0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_2ba0f4:
    // 0x2ba0f4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2ba0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_2ba0f8:
    // 0x2ba0f8: 0x260404e0  addiu       $a0, $s0, 0x4E0
    ctx->pc = 0x2ba0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1248));
label_2ba0fc:
    // 0x2ba0fc: 0x24a56710  addiu       $a1, $a1, 0x6710
    ctx->pc = 0x2ba0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26384));
label_2ba100:
    // 0x2ba100: 0x27a6002c  addiu       $a2, $sp, 0x2C
    ctx->pc = 0x2ba100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_2ba104:
    // 0x2ba104: 0xc04e7fc  jal         func_139FF0
label_2ba108:
    if (ctx->pc == 0x2BA108u) {
        ctx->pc = 0x2BA108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA104u;
        // 0x2ba108: 0x24470020  addiu       $a3, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA10Cu;
        goto label_2ba10c;
    }
    ctx->pc = 0x2BA104u;
    SET_GPR_U32(ctx, 31, 0x2BA10Cu);
    ctx->pc = 0x2BA108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA104u;
    // 0x2ba108: 0x24470020  addiu       $a3, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139FF0u, 0x2BA104u, 0x2BA10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA10Cu;
label_2ba10c:
    // 0x2ba10c: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2ba10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_2ba110:
    // 0x2ba110: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x2ba110u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
label_2ba114:
    // 0x2ba114: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x2ba114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_2ba118:
    // 0x2ba118: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2ba118u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ba11c:
    // 0x2ba11c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2ba11cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2ba120:
    // 0x2ba120: 0x320f809  jalr        $t9
label_2ba124:
    if (ctx->pc == 0x2BA124u) {
        ctx->pc = 0x2BA128u;
        goto label_2ba128;
    }
    ctx->pc = 0x2BA120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BA128u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA120u, 0x2BA128u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BA128u;
label_2ba128:
    // 0x2ba128: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2ba128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_2ba12c:
    // 0x2ba12c: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
label_2ba130:
    if (ctx->pc == 0x2BA130u) {
        ctx->pc = 0x2BA134u;
        goto label_2ba134;
    }
    ctx->pc = 0x2BA12Cu;
    {
        const bool branch_taken_0x2ba12c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba12c) {
            ctx->pc = 0x2BA168u;
            goto label_2ba168;
        }
    }
    ctx->pc = 0x2BA134u;
label_2ba134:
    // 0x2ba134: 0xc06039c  jal         func_180E70
label_2ba138:
    if (ctx->pc == 0x2BA138u) {
        ctx->pc = 0x2BA13Cu;
        goto label_2ba13c;
    }
    ctx->pc = 0x2BA134u;
    SET_GPR_U32(ctx, 31, 0x2BA13Cu);
    ctx->pc = 0x180E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180E70u, 0x2BA134u, 0x2BA13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA13Cu;
label_2ba13c:
    // 0x2ba13c: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x2ba13cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2ba140:
    // 0x2ba140: 0x260404a0  addiu       $a0, $s0, 0x4A0
    ctx->pc = 0x2ba140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1184));
label_2ba144:
    // 0x2ba144: 0xc09e6c4  jal         func_279B10
label_2ba148:
    if (ctx->pc == 0x2BA148u) {
        ctx->pc = 0x2BA148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA144u;
        // 0x2ba148: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA14Cu;
        goto label_2ba14c;
    }
    ctx->pc = 0x2BA144u;
    SET_GPR_U32(ctx, 31, 0x2BA14Cu);
    ctx->pc = 0x2BA148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA144u;
    // 0x2ba148: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279B10u, 0x2BA144u, 0x2BA14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA14Cu;
label_2ba14c:
    // 0x2ba14c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2ba14cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_2ba150:
    // 0x2ba150: 0xc061bc0  jal         func_186F00
label_2ba154:
    if (ctx->pc == 0x2BA154u) {
        ctx->pc = 0x2BA154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA150u;
        // 0x2ba154: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA158u;
        goto label_2ba158;
    }
    ctx->pc = 0x2BA150u;
    SET_GPR_U32(ctx, 31, 0x2BA158u);
    ctx->pc = 0x2BA154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA150u;
    // 0x2ba154: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186F00u, 0x2BA150u, 0x2BA158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA158u;
label_2ba158:
    // 0x2ba158: 0x260404a0  addiu       $a0, $s0, 0x4A0
    ctx->pc = 0x2ba158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1184));
label_2ba15c:
    // 0x2ba15c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ba15cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ba160:
    // 0x2ba160: 0xc09e648  jal         func_279920
label_2ba164:
    if (ctx->pc == 0x2BA164u) {
        ctx->pc = 0x2BA164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA160u;
        // 0x2ba164: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA168u;
        goto label_2ba168;
    }
    ctx->pc = 0x2BA160u;
    SET_GPR_U32(ctx, 31, 0x2BA168u);
    ctx->pc = 0x2BA164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA160u;
    // 0x2ba164: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279920u, 0x2BA160u, 0x2BA168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA168u;
label_2ba168:
    // 0x2ba168: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ba168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ba16c:
    // 0x2ba16c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ba16cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2ba170:
    // 0x2ba170: 0x3e00008  jr          $ra
label_2ba174:
    if (ctx->pc == 0x2BA174u) {
        ctx->pc = 0x2BA174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA170u;
        // 0x2ba174: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA178u;
        goto label_fallthrough_0x2ba170;
    }
    ctx->pc = 0x2BA170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA170u;
        // 0x2ba174: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ba170:
    ctx->pc = 0x2BA178u;
}
