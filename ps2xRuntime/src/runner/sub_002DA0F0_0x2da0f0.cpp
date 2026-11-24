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

// Function: sub_002DA0F0
// Address: 0x2da0f0 - 0x2da2a0
void sub_002DA0F0_0x2da0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DA0F0_0x2da0f0");
#endif

    switch (ctx->pc) {
        case 0x2da118u: goto label_2da118;
        case 0x2da194u: goto label_2da194;
        case 0x2da1b8u: goto label_2da1b8;
        case 0x2da218u: goto label_2da218;
        case 0x2da228u: goto label_2da228;
        case 0x2da230u: goto label_2da230;
        case 0x2da268u: goto label_2da268;
        default: break;
    }

    ctx->pc = 0x2da0f0u;

    // 0x2da0f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2da0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2da0f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2da0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2da0f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2da0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2da0fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2da0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2da100: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2da100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2da104: 0x90820048  lbu         $v0, 0x48($a0)
    ctx->pc = 0x2da104u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2da108: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2DA108u;
    {
        const bool branch_taken_0x2da108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA108u;
        // 0x2da10c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da108) {
            ctx->pc = 0x2DA1C8u;
            goto label_2da1c8;
        }
    }
    ctx->pc = 0x2DA110u;
    // 0x2da110: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2da110u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da114: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2da114u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2da118:
    // 0x2da118: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x2da118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x2da11c: 0x90430060  lbu         $v1, 0x60($v0)
    ctx->pc = 0x2da11cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2da120: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x2da120u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2da124: 0x1067001e  beq         $v1, $a3, . + 4 + (0x1E << 2)
    ctx->pc = 0x2DA124u;
    {
        const bool branch_taken_0x2da124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x2DA128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA124u;
        // 0x2da128: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da124) {
            ctx->pc = 0x2DA1A0u;
            goto label_2da1a0;
        }
    }
    ctx->pc = 0x2DA12Cu;
    // 0x2da12c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DA12Cu;
    {
        const bool branch_taken_0x2da12c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2da12c) {
            ctx->pc = 0x2DA140u;
            goto label_2da140;
        }
    }
    ctx->pc = 0x2DA134u;
    // 0x2da134: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2DA134u;
    {
        const bool branch_taken_0x2da134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da134) {
            ctx->pc = 0x2DA1B8u;
            goto label_2da1b8;
        }
    }
    ctx->pc = 0x2DA13Cu;
    // 0x2da13c: 0x0  nop
    ctx->pc = 0x2da13cu;
    // NOP
label_2da140:
    // 0x2da140: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x2da140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x2da144: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2da144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2da148: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2DA148u;
    {
        const bool branch_taken_0x2da148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da148) {
            ctx->pc = 0x2DA1B8u;
            goto label_2da1b8;
        }
    }
    ctx->pc = 0x2DA150u;
    // 0x2da150: 0x8642000a  lh          $v0, 0xA($s2)
    ctx->pc = 0x2da150u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x2da154: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2da154u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2da158: 0x86430008  lh          $v1, 0x8($s2)
    ctx->pc = 0x2da158u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2da15c: 0x24846cc0  addiu       $a0, $a0, 0x6CC0
    ctx->pc = 0x2da15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27840));
    // 0x2da160: 0x86480058  lh          $t0, 0x58($s2)
    ctx->pc = 0x2da160u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x2da164: 0x8649005a  lh          $t1, 0x5A($s2)
    ctx->pc = 0x2da164u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 90)));
    // 0x2da168: 0x864a0056  lh          $t2, 0x56($s2)
    ctx->pc = 0x2da168u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 86)));
    // 0x2da16c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2da16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2da170: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2da170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2da174: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x2da174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x2da178: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2da178u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2da17c: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x2da17cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2da180: 0x24420013  addiu       $v0, $v0, 0x13
    ctx->pc = 0x2da180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19));
    // 0x2da184: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x2da184u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x2da188: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x2da188u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2da18c: 0xc0b5378  jal         func_2D4DE0
    ctx->pc = 0x2DA18Cu;
    SET_GPR_U32(ctx, 31, 0x2DA194u);
    ctx->pc = 0x2DA190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA18Cu;
    // 0x2da190: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4DE0u, 0x2DA18Cu, 0x2DA194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA194u;
label_2da194:
    // 0x2da194: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2DA194u;
    {
        const bool branch_taken_0x2da194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da194) {
            ctx->pc = 0x2DA1B8u;
            goto label_2da1b8;
        }
    }
    ctx->pc = 0x2DA19Cu;
    // 0x2da19c: 0x0  nop
    ctx->pc = 0x2da19cu;
    // NOP
label_2da1a0:
    // 0x2da1a0: 0x8e42005c  lw          $v0, 0x5C($s2)
    ctx->pc = 0x2da1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x2da1a4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2da1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2da1a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DA1A8u;
    {
        const bool branch_taken_0x2da1a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA1A8u;
        // 0x2da1ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da1a8) {
            ctx->pc = 0x2DA1B8u;
            goto label_2da1b8;
        }
    }
    ctx->pc = 0x2DA1B0u;
    // 0x2da1b0: 0xc0b6774  jal         func_2D9DD0
    ctx->pc = 0x2DA1B0u;
    SET_GPR_U32(ctx, 31, 0x2DA1B8u);
    ctx->pc = 0x2D9DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9DD0u, 0x2DA1B0u, 0x2DA1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA1B8u;
label_2da1b8:
    // 0x2da1b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2da1b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2da1bc: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x2da1bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2da1c0: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x2DA1C0u;
    {
        const bool branch_taken_0x2da1c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA1C0u;
        // 0x2da1c4: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da1c0) {
            ctx->pc = 0x2DA118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2da118;
        }
    }
    ctx->pc = 0x2DA1C8u;
label_2da1c8:
    // 0x2da1c8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2da1c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2da1cc: 0x8c27fc90  lw          $a3, -0x370($at)
    ctx->pc = 0x2da1ccu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x81FC90u));
    // 0x2da1d0: 0x3c030410  lui         $v1, 0x410
    ctx->pc = 0x2da1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1040 << 16));
    // 0x2da1d4: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x2da1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x2da1d8: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2da1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2da1dc: 0x2406fff0  addiu       $a2, $zero, -0x10
    ctx->pc = 0x2da1dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2da1e0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2da1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2da1e4: 0x34630047  ori         $v1, $v1, 0x47
    ctx->pc = 0x2da1e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)71);
    // 0x2da1e8: 0x344217fd  ori         $v0, $v0, 0x17FD
    ctx->pc = 0x2da1e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6141);
    // 0x2da1ec: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x2da1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x2da1f0: 0x24e7000f  addiu       $a3, $a3, 0xF
    ctx->pc = 0x2da1f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x2da1f4: 0xe63024  and         $a2, $a3, $a2
    ctx->pc = 0x2da1f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x2da1f8: 0xae460040  sw          $a2, 0x40($s2)
    ctx->pc = 0x2da1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 6));
    // 0x2da1fc: 0x8e500040  lw          $s0, 0x40($s2)
    ctx->pc = 0x2da1fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x2da200: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2da200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x2da204: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x2da204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x2da208: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x2da208u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x2da20c: 0x8e460044  lw          $a2, 0x44($s2)
    ctx->pc = 0x2da20cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x2da210: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x2DA210u;
    SET_GPR_U32(ctx, 31, 0x2DA218u);
    ctx->pc = 0x2DA214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA210u;
    // 0x2da214: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x2DA210u, 0x2DA218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA218u;
label_2da218:
    // 0x2da218: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2da218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2da21c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2da21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da220: 0xc0b6a74  jal         func_2DA9D0
    ctx->pc = 0x2DA220u;
    SET_GPR_U32(ctx, 31, 0x2DA228u);
    ctx->pc = 0x2DA224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA220u;
    // 0x2da224: 0xae420040  sw          $v0, 0x40($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA9D0u, 0x2DA220u, 0x2DA228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA228u;
label_2da228:
    // 0x2da228: 0xc0b6928  jal         func_2DA4A0
    ctx->pc = 0x2DA228u;
    SET_GPR_U32(ctx, 31, 0x2DA230u);
    ctx->pc = 0x2DA22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA228u;
    // 0x2da22c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA4A0u, 0x2DA228u, 0x2DA230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA230u;
label_2da230:
    // 0x2da230: 0x8e500040  lw          $s0, 0x40($s2)
    ctx->pc = 0x2da230u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x2da234: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2da234u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2da238: 0x3c030410  lui         $v1, 0x410
    ctx->pc = 0x2da238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1040 << 16));
    // 0x2da23c: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x2da23cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x2da240: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x2da240u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x2da244: 0x34630047  ori         $v1, $v1, 0x47
    ctx->pc = 0x2da244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)71);
    // 0x2da248: 0x344217fd  ori         $v0, $v0, 0x17FD
    ctx->pc = 0x2da248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6141);
    // 0x2da24c: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x2da24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x2da250: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2da250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x2da254: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x2da254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x2da258: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x2da258u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x2da25c: 0x8e460044  lw          $a2, 0x44($s2)
    ctx->pc = 0x2da25cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x2da260: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x2DA260u;
    SET_GPR_U32(ctx, 31, 0x2DA268u);
    ctx->pc = 0x2DA264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA260u;
    // 0x2da264: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x2DA260u, 0x2DA268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA268u;
label_2da268:
    // 0x2da268: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2da268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2da26c: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x2da26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2da270: 0xae440040  sw          $a0, 0x40($s2)
    ctx->pc = 0x2da270u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 4));
    // 0x2da274: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x2da274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x2da278: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x2da278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x2da27c: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x2da27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x2da280: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2da280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2da284: 0xac23fc90  sw          $v1, -0x370($at)
    ctx->pc = 0x2da284u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966416), GPR_U32(ctx, 3));
    // 0x2da288: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2da288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2da28c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2da28cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2da290: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2da290u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2da294: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2da294u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2da298: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA298u;
        // 0x2da29c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA2A0u;
}
