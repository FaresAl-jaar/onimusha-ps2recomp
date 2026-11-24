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

// Function: sub_00363590
// Address: 0x363590 - 0x363754
void sub_00363590_0x363590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363590_0x363590");
#endif

    switch (ctx->pc) {
        case 0x3635b0u: goto label_3635b0;
        case 0x3635e8u: goto label_3635e8;
        case 0x3635f4u: goto label_3635f4;
        case 0x363680u: goto label_363680;
        case 0x363744u: goto label_363744;
        default: break;
    }

    ctx->pc = 0x363590u;

    // 0x363590: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x363590u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363594: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x363594u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x363598: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x363598u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x36359c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x36359cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3635a0: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3635A0u;
    {
        const bool branch_taken_0x3635a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3635A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3635A0u;
        // 0x3635a4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3635a0) {
            ctx->pc = 0x3635B8u;
            goto label_3635b8;
        }
    }
    ctx->pc = 0x3635A8u;
    // 0x3635a8: 0xc0d8ca0  jal         func_363280
    ctx->pc = 0x3635A8u;
    SET_GPR_U32(ctx, 31, 0x3635B0u);
    ctx->pc = 0x363280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363280u, 0x3635A8u, 0x3635B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3635B0u;
label_3635b0:
    // 0x3635b0: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x3635b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3635b4: 0x0  nop
    ctx->pc = 0x3635b4u;
    // NOP
label_3635b8:
    // 0x3635b8: 0x30e6ffff  andi        $a2, $a3, 0xFFFF
    ctx->pc = 0x3635b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x3635bc: 0x28c10020  slti        $at, $a2, 0x20
    ctx->pc = 0x3635bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x3635c0: 0x10200061  beqz        $at, . + 4 + (0x61 << 2)
    ctx->pc = 0x3635C0u;
    {
        const bool branch_taken_0x3635c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3635c0) {
            ctx->pc = 0x363748u;
            goto label_363748;
        }
    }
    ctx->pc = 0x3635C8u;
    // 0x3635c8: 0x3c020092  lui         $v0, 0x92
    ctx->pc = 0x3635c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)146 << 16));
    // 0x3635cc: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x3635ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3635d0: 0x2442c0f8  addiu       $v0, $v0, -0x3F08
    ctx->pc = 0x3635d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951160));
    // 0x3635d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3635d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3635d8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3635d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3635dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3635dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3635e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3635e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3635e4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3635e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_3635e8:
    // 0x3635e8: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x3635e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3635ec: 0xc0d8cc0  jal         func_363300
    ctx->pc = 0x3635ECu;
    SET_GPR_U32(ctx, 31, 0x3635F4u);
    ctx->pc = 0x3635F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3635ECu;
    // 0x3635f0: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363300u, 0x3635ECu, 0x3635F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3635F4u;
label_3635f4:
    // 0x3635f4: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x3635f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3635f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3635f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3635fc: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x3635fcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x363600: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x363600u;
    {
        const bool branch_taken_0x363600 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x363604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363600u;
        // 0x363604: 0x3c030092  lui         $v1, 0x92 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)146 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363600) {
            ctx->pc = 0x363628u;
            goto label_363628;
        }
    }
    ctx->pc = 0x363608u;
    // 0x363608: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x363608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x36360c: 0x2463c0f0  addiu       $v1, $v1, -0x3F10
    ctx->pc = 0x36360cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951152));
    // 0x363610: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x363610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x363614: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x363614u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x363618: 0xa0600088  sb          $zero, 0x88($v1)
    ctx->pc = 0x363618u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 136), (uint8_t)GPR_U32(ctx, 0));
    // 0x36361c: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x36361Cu;
    {
        const bool branch_taken_0x36361c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x363620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36361Cu;
        // 0x363620: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36361c) {
            ctx->pc = 0x3635E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3635e8;
        }
    }
    ctx->pc = 0x363624u;
    // 0x363624: 0x0  nop
    ctx->pc = 0x363624u;
    // NOP
label_363628:
    // 0x363628: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x363628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
    // 0x36362c: 0x34636667  ori         $v1, $v1, 0x6667
    ctx->pc = 0x36362cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
    // 0x363630: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x363630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x363634: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x363634u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x363638: 0x8c24c0f0  lw          $a0, -0x3F10($at)
    ctx->pc = 0x363638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294951152)));
    // 0x36363c: 0x63fc2  srl         $a3, $a2, 31
    ctx->pc = 0x36363cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x363640: 0x2810  mfhi        $a1
    ctx->pc = 0x363640u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x363644: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x363644u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x363648: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x363648u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
    // 0x36364c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x36364cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x363650: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x363650u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x363654: 0x72840  sll         $a1, $a3, 1
    ctx->pc = 0x363654u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x363658: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x363658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x36365c: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x36365cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x363660: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x363660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x363664: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x363664u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x363668: 0x14850037  bne         $a0, $a1, . + 4 + (0x37 << 2)
    ctx->pc = 0x363668u;
    {
        const bool branch_taken_0x363668 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x36366Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363668u;
        // 0x36366c: 0x3c080068  lui         $t0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363668) {
            ctx->pc = 0x363748u;
            goto label_363748;
        }
    }
    ctx->pc = 0x363670u;
    // 0x363670: 0x240a007f  addiu       $t2, $zero, 0x7F
    ctx->pc = 0x363670u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x363674: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x363674u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363678: 0x2508ff00  addiu       $t0, $t0, -0x100
    ctx->pc = 0x363678u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967040));
    // 0x36367c: 0x0  nop
    ctx->pc = 0x36367cu;
    // NOP
label_363680:
    // 0x363680: 0x81060006  lb          $a2, 0x6($t0)
    ctx->pc = 0x363680u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x363684: 0x4c00014  bltz        $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x363684u;
    {
        const bool branch_taken_0x363684 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x363688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363684u;
        // 0x363688: 0x30c7ffff  andi        $a3, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x363684) {
            ctx->pc = 0x3636D8u;
            goto label_3636d8;
        }
    }
    ctx->pc = 0x36368Cu;
    // 0x36368c: 0x670018  mult        $zero, $v1, $a3
    ctx->pc = 0x36368cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x363690: 0x72fc2  srl         $a1, $a3, 31
    ctx->pc = 0x363690u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x363694: 0x0  nop
    ctx->pc = 0x363694u;
    // NOP
    // 0x363698: 0x1010  mfhi        $v0
    ctx->pc = 0x363698u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x36369c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x36369cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x3636a0: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x3636a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3636a4: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x3636a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3636a8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3636a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3636ac: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3636acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3636b0: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x3636b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3636b4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3636b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3636b8: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x3636b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3636bc: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x3636BCu;
    {
        const bool branch_taken_0x3636bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3636C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3636BCu;
        // 0x3636c0: 0xa163c  dsll32      $v0, $t2, 24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3636bc) {
            ctx->pc = 0x3636D8u;
            goto label_3636d8;
        }
    }
    ctx->pc = 0x3636C4u;
    // 0x3636c4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x3636c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x3636c8: 0xc2082a  slt         $at, $a2, $v0
    ctx->pc = 0x3636c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3636cc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x3636CCu;
    {
        const bool branch_taken_0x3636cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3636cc) {
            ctx->pc = 0x3636D8u;
            goto label_3636d8;
        }
    }
    ctx->pc = 0x3636D4u;
    // 0x3636d4: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x3636d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3636d8:
    // 0x3636d8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3636d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3636dc: 0x2922010e  slti        $v0, $t1, 0x10E
    ctx->pc = 0x3636dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)270) ? 1 : 0);
    // 0x3636e0: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x3636E0u;
    {
        const bool branch_taken_0x3636e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3636E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3636E0u;
        // 0x3636e4: 0x25080018  addiu       $t0, $t0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3636e0) {
            ctx->pc = 0x363680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_363680;
        }
    }
    ctx->pc = 0x3636E8u;
    // 0x3636e8: 0xa163c  dsll32      $v0, $t2, 24
    ctx->pc = 0x3636e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 24));
    // 0x3636ec: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x3636ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x3636f0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x3636f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x3636f4: 0xa420c0f0  sh          $zero, -0x3F10($at)
    ctx->pc = 0x3636f4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294951152), (uint16_t)GPR_U32(ctx, 0));
    // 0x3636f8: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x3636f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3636fc: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x3636fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x363700: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x363700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x363704: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x363704u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x363708: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x363708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x36370c: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x36370cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x363710: 0x0  nop
    ctx->pc = 0x363710u;
    // NOP
    // 0x363714: 0x0  nop
    ctx->pc = 0x363714u;
    // NOP
    // 0x363718: 0x1010  mfhi        $v0
    ctx->pc = 0x363718u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x36371c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x36371cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x363720: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x363720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x363724: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x363724u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x363728: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x363728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36372c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x36372cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x363730: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x363730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x363734: 0xa422c0f2  sh          $v0, -0x3F0E($at)
    ctx->pc = 0x363734u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294951154), (uint16_t)GPR_U32(ctx, 2));
    // 0x363738: 0x3c010092  lui         $at, 0x92
    ctx->pc = 0x363738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)146 << 16));
    // 0x36373c: 0xc0d8b70  jal         func_362DC0
    ctx->pc = 0x36373Cu;
    SET_GPR_U32(ctx, 31, 0x363744u);
    ctx->pc = 0x363740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36373Cu;
    // 0x363740: 0x8c24c0f0  lw          $a0, -0x3F10($at) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294951152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362DC0u, 0x36373Cu, 0x363744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363744u;
label_363744:
    // 0x363744: 0x0  nop
    ctx->pc = 0x363744u;
    // NOP
label_363748:
    // 0x363748: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x363748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36374c: 0x3e00008  jr          $ra
    ctx->pc = 0x36374Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36374Cu;
        // 0x363750: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36374Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x363754u;
}
