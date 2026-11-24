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

// Function: sub_0023FF88
// Address: 0x23ff88 - 0x240508
void sub_0023FF88_0x23ff88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023FF88_0x23ff88");
#endif

    switch (ctx->pc) {
        case 0x23fff8u: goto label_23fff8;
        case 0x240010u: goto label_240010;
        case 0x2400b0u: goto label_2400b0;
        case 0x24013cu: goto label_24013c;
        case 0x24016cu: goto label_24016c;
        case 0x240190u: goto label_240190;
        case 0x2401c0u: goto label_2401c0;
        case 0x240340u: goto label_240340;
        case 0x2403e0u: goto label_2403e0;
        case 0x240468u: goto label_240468;
        case 0x240478u: goto label_240478;
        case 0x240498u: goto label_240498;
        default: break;
    }

    ctx->pc = 0x23ff88u;

    // 0x23ff88: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x23ff88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x23ff8c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x23ff8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x23ff90: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x23ff90u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ff94: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x23ff94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x23ff98: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x23ff98u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ff9c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x23ff9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x23ffa0: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x23ffa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x23ffa4: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x23ffa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x23ffa8: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x23ffa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x23ffac: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x23ffacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x23ffb0: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x23ffb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x23ffb4: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x23ffb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x23ffb8: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x23ffb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x23ffbc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x23ffbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x23ffc0: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x23ffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x23ffc4: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x23ffc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x23ffc8: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x23ffc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x23ffcc: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x23ffccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x23ffd0: 0xafa8000c  sw          $t0, 0xC($sp)
    ctx->pc = 0x23ffd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 8));
    // 0x23ffd4: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x23ffd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x23ffd8: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x23ffd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x23ffdc: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x23ffdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x23ffe0: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23ffe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23ffe4: 0x8ca50014  lw          $a1, 0x14($a1)
    ctx->pc = 0x23ffe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x23ffe8: 0x18400119  blez        $v0, . + 4 + (0x119 << 2)
    ctx->pc = 0x23FFE8u;
    {
        const bool branch_taken_0x23ffe8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x23FFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FFE8u;
        // 0x23ffec: 0xafa50018  sw          $a1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ffe8) {
            ctx->pc = 0x240450u;
            goto label_240450;
        }
    }
    ctx->pc = 0x23FFF0u;
    // 0x23fff0: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x23fff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x23fff4: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x23fff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_23fff8:
    // 0x23fff8: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x23fff8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23fffc: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x23fffcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x240000: 0x2c7382a  slt         $a3, $s6, $a3
    ctx->pc = 0x240000u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x240004: 0x100000fe  b           . + 4 + (0xFE << 2)
    ctx->pc = 0x240004u;
    {
        const bool branch_taken_0x240004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240004u;
        // 0x240008: 0xafa70020  sw          $a3, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240004) {
            ctx->pc = 0x240400u;
            goto label_240400;
        }
    }
    ctx->pc = 0x24000Cu;
    // 0x24000c: 0x0  nop
    ctx->pc = 0x24000cu;
    // NOP
label_240010:
    // 0x240010: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x240010u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x240014: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x240014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x240018: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x240018u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24001c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x24001cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x240020: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x240020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240024: 0x10a000d8  beqz        $a1, . + 4 + (0xD8 << 2)
    ctx->pc = 0x240024u;
    {
        const bool branch_taken_0x240024 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x240028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240024u;
        // 0x240028: 0x1e1840  sll         $v1, $fp, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240024) {
            ctx->pc = 0x240388u;
            goto label_240388;
        }
    }
    ctx->pc = 0x24002Cu;
    // 0x24002c: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x24002cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x240030: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x240030u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x240034: 0x7e9021  addu        $s2, $v1, $fp
    ctx->pc = 0x240034u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x240038: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x240038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x24003c: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x24003cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x240040: 0x2441821  addu        $v1, $s2, $a0
    ctx->pc = 0x240040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x240044: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x240044u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x240048: 0x8fa8001c  lw          $t0, 0x1C($sp)
    ctx->pc = 0x240048u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x24004c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x24004cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x240050: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x240050u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x240054: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x240054u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x240058: 0x483021  addu        $a2, $v0, $t0
    ctx->pc = 0x240058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x24005c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x24005cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x240060: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x240060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x240064: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x240064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x240068: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x240068u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24006c: 0x8cd40014  lw          $s4, 0x14($a2)
    ctx->pc = 0x24006cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x240070: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x240070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x240074: 0x8cd30010  lw          $s3, 0x10($a2)
    ctx->pc = 0x240074u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x240078: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x240078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24007c: 0x3c03004d  lui         $v1, 0x4D
    ctx->pc = 0x24007cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)77 << 16));
    // 0x240080: 0x2463c3c0  addiu       $v1, $v1, -0x3C40
    ctx->pc = 0x240080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951872));
    // 0x240084: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x240084u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x240088: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x240088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24008c: 0x14910048  bne         $a0, $s1, . + 4 + (0x48 << 2)
    ctx->pc = 0x24008Cu;
    {
        const bool branch_taken_0x24008c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 17));
        ctx->pc = 0x240090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24008Cu;
        // 0x240090: 0x8c550000  lw          $s5, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24008c) {
            ctx->pc = 0x2401B0u;
            goto label_2401b0;
        }
    }
    ctx->pc = 0x240094u;
    // 0x240094: 0x8cd10004  lw          $s1, 0x4($a2)
    ctx->pc = 0x240094u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x240098: 0x2a220009  slti        $v0, $s1, 0x9
    ctx->pc = 0x240098u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x24009c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x24009Cu;
    {
        const bool branch_taken_0x24009c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2400A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24009Cu;
        // 0x2400a0: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24009c) {
            ctx->pc = 0x240130u;
            goto label_240130;
        }
    }
    ctx->pc = 0x2400A4u;
    // 0x2400a4: 0x112840  sll         $a1, $s1, 1
    ctx->pc = 0x2400a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x2400a8: 0xc08fad8  jal         func_23EB60
    ctx->pc = 0x2400A8u;
    SET_GPR_U32(ctx, 31, 0x2400B0u);
    ctx->pc = 0x2400ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2400A8u;
    // 0x2400ac: 0xb12821  addu        $a1, $a1, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EB60u, 0x2400A8u, 0x2400B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2400B0u;
label_2400b0:
    // 0x2400b0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2400b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2400b4: 0x3c04004d  lui         $a0, 0x4D
    ctx->pc = 0x2400b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)77 << 16));
    // 0x2400b8: 0x2484c690  addiu       $a0, $a0, -0x3970
    ctx->pc = 0x2400b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952592));
    // 0x2400bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2400bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2400c0: 0x122140  sll         $a0, $s2, 5
    ctx->pc = 0x2400c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x2400c4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2400c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2400c8: 0x962021  addu        $a0, $a0, $s6
    ctx->pc = 0x2400c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    // 0x2400cc: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2400ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2400d0: 0x451824  and         $v1, $v0, $a1
    ctx->pc = 0x2400d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2400d4: 0x2221007  srav        $v0, $v0, $s1
    ctx->pc = 0x2400d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x2400d8: 0x733818  mult        $a3, $v1, $s3
    ctx->pc = 0x2400d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2400dc: 0x452824  and         $a1, $v0, $a1
    ctx->pc = 0x2400dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2400e0: 0xb31818  mult        $v1, $a1, $s3
    ctx->pc = 0x2400e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2400e4: 0x972021  addu        $a0, $a0, $s7
    ctx->pc = 0x2400e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x2400e8: 0x2221007  srav        $v0, $v0, $s1
    ctx->pc = 0x2400e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x2400ec: 0xf43021  addu        $a2, $a3, $s4
    ctx->pc = 0x2400ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
    // 0x2400f0: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x2400f0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
    // 0x2400f4: 0xd53018  mult        $a2, $a2, $s5
    ctx->pc = 0x2400f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2400f8: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x2400f8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x2400fc: 0xa4860080  sh          $a2, 0x80($a0)
    ctx->pc = 0x2400fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 128), (uint16_t)GPR_U32(ctx, 6));
    // 0x240100: 0x743021  addu        $a2, $v1, $s4
    ctx->pc = 0x240100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x240104: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x240104u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
    // 0x240108: 0x531818  mult        $v1, $v0, $s3
    ctx->pc = 0x240108u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x24010c: 0xd53018  mult        $a2, $a2, $s5
    ctx->pc = 0x24010cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x240110: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x240110u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x240114: 0xa4860040  sh          $a2, 0x40($a0)
    ctx->pc = 0x240114u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 64), (uint16_t)GPR_U32(ctx, 6));
    // 0x240118: 0x743021  addu        $a2, $v1, $s4
    ctx->pc = 0x240118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x24011c: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x24011cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
    // 0x240120: 0xd53018  mult        $a2, $a2, $s5
    ctx->pc = 0x240120u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x240124: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x240124u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x240128: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x240128u;
    {
        const bool branch_taken_0x240128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24012Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240128u;
        // 0x24012c: 0xa4860000  sh          $a2, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240128) {
            ctx->pc = 0x2403ACu;
            goto label_2403ac;
        }
    }
    ctx->pc = 0x240130u;
label_240130:
    // 0x240130: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x240130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240134: 0xc08fad8  jal         func_23EB60
    ctx->pc = 0x240134u;
    SET_GPR_U32(ctx, 31, 0x24013Cu);
    ctx->pc = 0x240138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240134u;
    // 0x240138: 0x128140  sll         $s0, $s2, 5 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EB60u, 0x240134u, 0x24013Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24013Cu;
label_24013c:
    // 0x24013c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24013cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240140: 0x531818  mult        $v1, $v0, $s3
    ctx->pc = 0x240140u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x240144: 0x2168021  addu        $s0, $s0, $s6
    ctx->pc = 0x240144u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x240148: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x240148u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x24014c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x24014cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240150: 0x2178021  addu        $s0, $s0, $s7
    ctx->pc = 0x240150u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
    // 0x240154: 0x743021  addu        $a2, $v1, $s4
    ctx->pc = 0x240154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x240158: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x240158u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
    // 0x24015c: 0xd53018  mult        $a2, $a2, $s5
    ctx->pc = 0x24015cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x240160: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x240160u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x240164: 0xc08fad8  jal         func_23EB60
    ctx->pc = 0x240164u;
    SET_GPR_U32(ctx, 31, 0x24016Cu);
    ctx->pc = 0x240168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240164u;
    // 0x240168: 0xa6060000  sh          $a2, 0x0($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EB60u, 0x240164u, 0x24016Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24016Cu;
label_24016c:
    // 0x24016c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24016cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240170: 0x531818  mult        $v1, $v0, $s3
    ctx->pc = 0x240170u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x240174: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x240174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240178: 0x743021  addu        $a2, $v1, $s4
    ctx->pc = 0x240178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x24017c: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x24017cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
    // 0x240180: 0xd53018  mult        $a2, $a2, $s5
    ctx->pc = 0x240180u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x240184: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x240184u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x240188: 0xc08fad8  jal         func_23EB60
    ctx->pc = 0x240188u;
    SET_GPR_U32(ctx, 31, 0x240190u);
    ctx->pc = 0x24018Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240188u;
    // 0x24018c: 0xa6060040  sh          $a2, 0x40($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 64), (uint16_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EB60u, 0x240188u, 0x240190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240190u;
label_240190:
    // 0x240190: 0x531818  mult        $v1, $v0, $s3
    ctx->pc = 0x240190u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x240194: 0x743021  addu        $a2, $v1, $s4
    ctx->pc = 0x240194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x240198: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x240198u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
    // 0x24019c: 0xd53018  mult        $a2, $a2, $s5
    ctx->pc = 0x24019cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2401a0: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x2401a0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x2401a4: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x2401A4u;
    {
        const bool branch_taken_0x2401a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2401A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2401A4u;
        // 0x2401a8: 0xa6060080  sh          $a2, 0x80($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 128), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2401a4) {
            ctx->pc = 0x2403ACu;
            goto label_2403ac;
        }
    }
    ctx->pc = 0x2401ACu;
    // 0x2401ac: 0x0  nop
    ctx->pc = 0x2401acu;
    // NOP
label_2401b0:
    // 0x2401b0: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x2401b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2401b4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2401b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2401b8: 0xc08fad8  jal         func_23EB60
    ctx->pc = 0x2401B8u;
    SET_GPR_U32(ctx, 31, 0x2401C0u);
    ctx->pc = 0x2401BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2401B8u;
    // 0x2401bc: 0x8cd00000  lw          $s0, 0x0($a2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23EB60u, 0x2401B8u, 0x2401C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2401C0u;
label_2401c0:
    // 0x2401c0: 0x1611001b  bne         $s0, $s1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2401C0u;
    {
        const bool branch_taken_0x2401c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x2401C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2401C0u;
        // 0x2401c4: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2401c0) {
            ctx->pc = 0x240230u;
            goto label_240230;
        }
    }
    ctx->pc = 0x2401C8u;
    // 0x2401c8: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x2401c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x2401cc: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x2401ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x2401d0: 0x2444d750  addiu       $a0, $v0, -0x28B0
    ctx->pc = 0x2401d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956880));
    // 0x2401d4: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x2401d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x2401d8: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x2401d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x2401dc: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2401dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2401e0: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x2401e0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2401e4: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x2401e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x2401e8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2401e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2401ec: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x2401ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2401f0: 0xb34018  mult        $t0, $a1, $s3
    ctx->pc = 0x2401f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x2401f4: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x2401f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x2401f8: 0x1143021  addu        $a2, $t0, $s4
    ctx->pc = 0x2401f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 20)));
    // 0x2401fc: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x2401fcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
    // 0x240200: 0xd53018  mult        $a2, $a2, $s5
    ctx->pc = 0x240200u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x240204: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x240204u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x240208: 0xa4660000  sh          $a2, 0x0($v1)
    ctx->pc = 0x240208u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x24020c: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x24020cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240210: 0xb31018  mult        $v0, $a1, $s3
    ctx->pc = 0x240210u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x240214: 0x543021  addu        $a2, $v0, $s4
    ctx->pc = 0x240214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x240218: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x240218u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
    // 0x24021c: 0xd53018  mult        $a2, $a2, $s5
    ctx->pc = 0x24021cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x240220: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x240220u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x240224: 0xa4660040  sh          $a2, 0x40($v1)
    ctx->pc = 0x240224u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 64), (uint16_t)GPR_U32(ctx, 6));
    // 0x240228: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x240228u;
    {
        const bool branch_taken_0x240228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240228u;
        // 0x24022c: 0x80850020  lb          $a1, 0x20($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240228) {
            ctx->pc = 0x240314u;
            goto label_240314;
        }
    }
    ctx->pc = 0x240230u;
label_240230:
    // 0x240230: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x240230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x240234: 0x1602001c  bne         $s0, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x240234u;
    {
        const bool branch_taken_0x240234 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x240238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240234u;
        // 0x240238: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240234) {
            ctx->pc = 0x2402A8u;
            goto label_2402a8;
        }
    }
    ctx->pc = 0x24023Cu;
    // 0x24023c: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x24023cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x240240: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x240240u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x240244: 0x2444d7b0  addiu       $a0, $v0, -0x2850
    ctx->pc = 0x240244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956976));
    // 0x240248: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x240248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x24024c: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x24024cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x240250: 0x24840080  addiu       $a0, $a0, 0x80
    ctx->pc = 0x240250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x240254: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x240254u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240258: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x240258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x24025c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x24025cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x240260: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x240260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x240264: 0xb34018  mult        $t0, $a1, $s3
    ctx->pc = 0x240264u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x240268: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x240268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x24026c: 0x1143021  addu        $a2, $t0, $s4
    ctx->pc = 0x24026cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 20)));
    // 0x240270: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x240270u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
    // 0x240274: 0xd53018  mult        $a2, $a2, $s5
    ctx->pc = 0x240274u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x240278: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x240278u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x24027c: 0xa4660000  sh          $a2, 0x0($v1)
    ctx->pc = 0x24027cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x240280: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x240280u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x240284: 0xb31018  mult        $v0, $a1, $s3
    ctx->pc = 0x240284u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x240288: 0x543021  addu        $a2, $v0, $s4
    ctx->pc = 0x240288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x24028c: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x24028cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
    // 0x240290: 0xd53018  mult        $a2, $a2, $s5
    ctx->pc = 0x240290u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x240294: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x240294u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x240298: 0xa4660040  sh          $a2, 0x40($v1)
    ctx->pc = 0x240298u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 64), (uint16_t)GPR_U32(ctx, 6));
    // 0x24029c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x24029Cu;
    {
        const bool branch_taken_0x24029c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2402A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24029Cu;
        // 0x2402a0: 0x80850080  lb          $a1, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24029c) {
            ctx->pc = 0x240314u;
            goto label_240314;
        }
    }
    ctx->pc = 0x2402A4u;
    // 0x2402a4: 0x0  nop
    ctx->pc = 0x2402a4u;
    // NOP
label_2402a8:
    // 0x2402a8: 0x16020021  bne         $s0, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2402A8u;
    {
        const bool branch_taken_0x2402a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2402ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2402A8u;
        // 0x2402ac: 0x121140  sll         $v0, $s2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2402a8) {
            ctx->pc = 0x240330u;
            goto label_240330;
        }
    }
    ctx->pc = 0x2402B0u;
    // 0x2402b0: 0x3c02004d  lui         $v0, 0x4D
    ctx->pc = 0x2402b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)77 << 16));
    // 0x2402b4: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x2402b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x2402b8: 0x2444d930  addiu       $a0, $v0, -0x26D0
    ctx->pc = 0x2402b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957360));
    // 0x2402bc: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x2402bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x2402c0: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x2402c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x2402c4: 0x24840400  addiu       $a0, $a0, 0x400
    ctx->pc = 0x2402c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
    // 0x2402c8: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x2402c8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2402cc: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x2402ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x2402d0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2402d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2402d4: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x2402d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2402d8: 0xb34018  mult        $t0, $a1, $s3
    ctx->pc = 0x2402d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x2402dc: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x2402dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x2402e0: 0x1143021  addu        $a2, $t0, $s4
    ctx->pc = 0x2402e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 20)));
    // 0x2402e4: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x2402e4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
    // 0x2402e8: 0xd53018  mult        $a2, $a2, $s5
    ctx->pc = 0x2402e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2402ec: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x2402ecu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x2402f0: 0xa4660000  sh          $a2, 0x0($v1)
    ctx->pc = 0x2402f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x2402f4: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x2402f4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2402f8: 0xb31018  mult        $v0, $a1, $s3
    ctx->pc = 0x2402f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2402fc: 0x543021  addu        $a2, $v0, $s4
    ctx->pc = 0x2402fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x240300: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x240300u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
    // 0x240304: 0xd53018  mult        $a2, $a2, $s5
    ctx->pc = 0x240304u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x240308: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x240308u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x24030c: 0xa4660040  sh          $a2, 0x40($v1)
    ctx->pc = 0x24030cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 64), (uint16_t)GPR_U32(ctx, 6));
    // 0x240310: 0x80850400  lb          $a1, 0x400($a0)
    ctx->pc = 0x240310u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1024)));
label_240314:
    // 0x240314: 0xb31018  mult        $v0, $a1, $s3
    ctx->pc = 0x240314u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x240318: 0x543021  addu        $a2, $v0, $s4
    ctx->pc = 0x240318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x24031c: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x24031cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
    // 0x240320: 0xd53018  mult        $a2, $a2, $s5
    ctx->pc = 0x240320u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x240324: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x240324u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x240328: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x240328u;
    {
        const bool branch_taken_0x240328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24032Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240328u;
        // 0x24032c: 0xa4660080  sh          $a2, 0x80($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 128), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240328) {
            ctx->pc = 0x2403ACu;
            goto label_2403ac;
        }
    }
    ctx->pc = 0x240330u;
label_240330:
    // 0x240330: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x240330u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240334: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x240334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x240338: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x240338u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x24033c: 0x572821  addu        $a1, $v0, $s7
    ctx->pc = 0x24033cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_240340:
    // 0x240340: 0xf0001a  div         $zero, $a3, $s0
    ctx->pc = 0x240340u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x240344: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x240344u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x240348: 0x2a240003  slti        $a0, $s1, 0x3
    ctx->pc = 0x240348u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x24034c: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24034Cu;
    {
        const bool branch_taken_0x24034c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x24034c) {
            ctx->pc = 0x240350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24034Cu;
            // 0x240350: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x240354u;
            goto label_240354;
        }
    }
    ctx->pc = 0x240354u;
label_240354:
    // 0x240354: 0x1010  mfhi        $v0
    ctx->pc = 0x240354u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x240358: 0x1812  mflo        $v1
    ctx->pc = 0x240358u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x24035c: 0x533818  mult        $a3, $v0, $s3
    ctx->pc = 0x24035cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x240360: 0xf43021  addu        $a2, $a3, $s4
    ctx->pc = 0x240360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 20)));
    // 0x240364: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x240364u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240368: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x240368u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
    // 0x24036c: 0xd53018  mult        $a2, $a2, $s5
    ctx->pc = 0x24036cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x240370: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x240370u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x240374: 0xa4a60000  sh          $a2, 0x0($a1)
    ctx->pc = 0x240374u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x240378: 0x1480fff1  bnez        $a0, . + 4 + (-0xF << 2)
    ctx->pc = 0x240378u;
    {
        const bool branch_taken_0x240378 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24037Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240378u;
        // 0x24037c: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240378) {
            ctx->pc = 0x240340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240340;
        }
    }
    ctx->pc = 0x240380u;
    // 0x240380: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x240380u;
    {
        const bool branch_taken_0x240380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240380u;
        // 0x240384: 0x8fa80010  lw          $t0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240380) {
            ctx->pc = 0x2403B0u;
            goto label_2403b0;
        }
    }
    ctx->pc = 0x240388u;
label_240388:
    // 0x240388: 0x1e1040  sll         $v0, $fp, 1
    ctx->pc = 0x240388u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
    // 0x24038c: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x24038cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x240390: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x240390u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x240394: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x240394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x240398: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x240398u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x24039c: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x24039cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x2403a0: 0xa4400080  sh          $zero, 0x80($v0)
    ctx->pc = 0x2403a0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2403a4: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x2403a4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x2403a8: 0xa4400040  sh          $zero, 0x40($v0)
    ctx->pc = 0x2403a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 64), (uint16_t)GPR_U32(ctx, 0));
label_2403ac:
    // 0x2403ac: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x2403acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2403b0:
    // 0x2403b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2403b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2403b4: 0x55020012  bnel        $t0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2403B4u;
    {
        const bool branch_taken_0x2403b4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x2403b4) {
            ctx->pc = 0x2403B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2403B4u;
            // 0x2403b8: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240400u;
            goto label_240400;
        }
    }
    ctx->pc = 0x2403BCu;
    // 0x2403bc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2403bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2403c0: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2403C0u;
    {
        const bool branch_taken_0x2403c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2403c0) {
            ctx->pc = 0x2403C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2403C0u;
            // 0x2403c4: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240400u;
            goto label_240400;
        }
    }
    ctx->pc = 0x2403C8u;
    // 0x2403c8: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x2403c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2403cc: 0x161840  sll         $v1, $s6, 1
    ctx->pc = 0x2403ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
    // 0x2403d0: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x2403d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x2403d4: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x2403d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2403d8: 0x2e41021  addu        $v0, $s7, $a0
    ctx->pc = 0x2403d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
    // 0x2403dc: 0x244400c0  addiu       $a0, $v0, 0xC0
    ctx->pc = 0x2403dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_2403e0:
    // 0x2403e0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2403e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2403e4: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x2403e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x2403e8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2403e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2403ec: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x2403ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2403f0: 0x0  nop
    ctx->pc = 0x2403f0u;
    // NOP
    // 0x2403f4: 0x621fffa  bgez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2403F4u;
    {
        const bool branch_taken_0x2403f4 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x2403F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2403F4u;
        // 0x2403f8: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2403f4) {
            ctx->pc = 0x2403E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2403e0;
        }
    }
    ctx->pc = 0x2403FCu;
    // 0x2403fc: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x2403fcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_240400:
    // 0x240400: 0x8fa70020  lw          $a3, 0x20($sp)
    ctx->pc = 0x240400u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x240404: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x240404u;
    {
        const bool branch_taken_0x240404 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x240408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240404u;
        // 0x240408: 0x8fa80010  lw          $t0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240404) {
            ctx->pc = 0x240420u;
            goto label_240420;
        }
    }
    ctx->pc = 0x24040Cu;
    // 0x24040c: 0x3c8102a  slt         $v0, $fp, $t0
    ctx->pc = 0x24040cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x240410: 0x5440feff  bnel        $v0, $zero, . + 4 + (-0x101 << 2)
    ctx->pc = 0x240410u;
    {
        const bool branch_taken_0x240410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x240410) {
            ctx->pc = 0x240414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240410u;
            // 0x240414: 0x1e1140  sll         $v0, $fp, 5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240010;
        }
    }
    ctx->pc = 0x240418u;
    // 0x240418: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x240418u;
    {
        const bool branch_taken_0x240418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240418u;
        // 0x24041c: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240418) {
            ctx->pc = 0x24042Cu;
            goto label_24042c;
        }
    }
    ctx->pc = 0x240420u;
label_240420:
    // 0x240420: 0x1bc0fefb  blez        $fp, . + 4 + (-0x105 << 2)
    ctx->pc = 0x240420u;
    {
        const bool branch_taken_0x240420 = (GPR_S64(ctx, 30) <= 0);
        ctx->pc = 0x240424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240420u;
        // 0x240424: 0x1e1140  sll         $v0, $fp, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240420) {
            ctx->pc = 0x240010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240010;
        }
    }
    ctx->pc = 0x240428u;
    // 0x240428: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x240428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_24042c:
    // 0x24042c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x24042cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x240430: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x240430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x240434: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x240434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x240438: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x240438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x24043c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x24043cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x240440: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x240440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x240444: 0x2c3102a  slt         $v0, $s6, $v1
    ctx->pc = 0x240444u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x240448: 0x1440feeb  bnez        $v0, . + 4 + (-0x115 << 2)
    ctx->pc = 0x240448u;
    {
        const bool branch_taken_0x240448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24044Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240448u;
        // 0x24044c: 0xafa40028  sw          $a0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240448) {
            ctx->pc = 0x23FFF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23fff8;
        }
    }
    ctx->pc = 0x240450u;
label_240450:
    // 0x240450: 0x8fb60014  lw          $s6, 0x14($sp)
    ctx->pc = 0x240450u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x240454: 0x2ac20020  slti        $v0, $s6, 0x20
    ctx->pc = 0x240454u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x240458: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x240458u;
    {
        const bool branch_taken_0x240458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24045Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240458u;
        // 0x24045c: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240458) {
            ctx->pc = 0x2404DCu;
            goto label_2404dc;
        }
    }
    ctx->pc = 0x240460u;
    // 0x240460: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x240460u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x240464: 0x0  nop
    ctx->pc = 0x240464u;
    // NOP
label_240468:
    // 0x240468: 0x18e00017  blez        $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x240468u;
    {
        const bool branch_taken_0x240468 = (GPR_S64(ctx, 7) <= 0);
        ctx->pc = 0x24046Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240468u;
        // 0x24046c: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240468) {
            ctx->pc = 0x2404C8u;
            goto label_2404c8;
        }
    }
    ctx->pc = 0x240470u;
    // 0x240470: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x240470u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240474: 0x0  nop
    ctx->pc = 0x240474u;
    // NOP
label_240478:
    // 0x240478: 0x7e1021  addu        $v0, $v1, $fp
    ctx->pc = 0x240478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x24047c: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x24047cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x240480: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x240480u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x240484: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x240484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x240488: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x240488u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x24048c: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x24048cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x240490: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x240490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x240494: 0x0  nop
    ctx->pc = 0x240494u;
    // NOP
label_240498:
    // 0x240498: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x240498u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x24049c: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x24049cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x2404a0: 0x0  nop
    ctx->pc = 0x2404a0u;
    // NOP
    // 0x2404a4: 0x0  nop
    ctx->pc = 0x2404a4u;
    // NOP
    // 0x2404a8: 0x0  nop
    ctx->pc = 0x2404a8u;
    // NOP
    // 0x2404ac: 0x621fffa  bgez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2404ACu;
    {
        const bool branch_taken_0x2404ac = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x2404B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2404ACu;
        // 0x2404b0: 0x2442ffc0  addiu       $v0, $v0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2404ac) {
            ctx->pc = 0x240498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240498;
        }
    }
    ctx->pc = 0x2404B4u;
    // 0x2404b4: 0x8fa80010  lw          $t0, 0x10($sp)
    ctx->pc = 0x2404b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2404b8: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x2404b8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x2404bc: 0x3c8102a  slt         $v0, $fp, $t0
    ctx->pc = 0x2404bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2404c0: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2404C0u;
    {
        const bool branch_taken_0x2404c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2404C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2404C0u;
        // 0x2404c4: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2404c0) {
            ctx->pc = 0x240478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240478;
        }
    }
    ctx->pc = 0x2404C8u;
label_2404c8:
    // 0x2404c8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2404c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x2404cc: 0x2ac20020  slti        $v0, $s6, 0x20
    ctx->pc = 0x2404ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x2404d0: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x2404D0u;
    {
        const bool branch_taken_0x2404d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2404D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2404D0u;
        // 0x2404d4: 0x8fa70010  lw          $a3, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2404d0) {
            ctx->pc = 0x240468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240468;
        }
    }
    ctx->pc = 0x2404D8u;
    // 0x2404d8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2404d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2404dc:
    // 0x2404dc: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2404dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2404e0: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2404e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2404e4: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x2404e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2404e8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2404e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2404ec: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x2404ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2404f0: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2404f0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2404f4: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x2404f4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2404f8: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x2404f8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2404fc: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x2404fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x240500: 0x3e00008  jr          $ra
    ctx->pc = 0x240500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240500u;
        // 0x240504: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240508u;
}
