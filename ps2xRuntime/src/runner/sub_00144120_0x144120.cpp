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

// Function: sub_00144120
// Address: 0x144120 - 0x144300
void sub_00144120_0x144120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144120_0x144120");
#endif

    switch (ctx->pc) {
        case 0x144138u: goto label_144138;
        case 0x144148u: goto label_144148;
        case 0x144158u: goto label_144158;
        case 0x144168u: goto label_144168;
        case 0x144178u: goto label_144178;
        case 0x144188u: goto label_144188;
        case 0x1441a4u: goto label_1441a4;
        case 0x1441d0u: goto label_1441d0;
        case 0x1441f8u: goto label_1441f8;
        case 0x144220u: goto label_144220;
        case 0x144248u: goto label_144248;
        case 0x144268u: goto label_144268;
        case 0x144278u: goto label_144278;
        case 0x144288u: goto label_144288;
        case 0x144298u: goto label_144298;
        case 0x1442a8u: goto label_1442a8;
        case 0x1442b8u: goto label_1442b8;
        case 0x1442c0u: goto label_1442c0;
        default: break;
    }

    ctx->pc = 0x144120u;

    // 0x144120: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x144120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x144124: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x144124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x144128: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x144128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14412c: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x14412cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x144130: 0xc051538  jal         func_1454E0
    ctx->pc = 0x144130u;
    SET_GPR_U32(ctx, 31, 0x144138u);
    ctx->pc = 0x144134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144130u;
    // 0x144134: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1454E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1454E0u, 0x144130u, 0x144138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144138u;
label_144138:
    // 0x144138: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x144138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x14413c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x14413cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x144140: 0xc051538  jal         func_1454E0
    ctx->pc = 0x144140u;
    SET_GPR_U32(ctx, 31, 0x144148u);
    ctx->pc = 0x144144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144140u;
    // 0x144144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1454E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1454E0u, 0x144140u, 0x144148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144148u;
label_144148:
    // 0x144148: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x144148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x14414c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x14414cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x144150: 0xc051538  jal         func_1454E0
    ctx->pc = 0x144150u;
    SET_GPR_U32(ctx, 31, 0x144158u);
    ctx->pc = 0x144154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144150u;
    // 0x144154: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1454E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1454E0u, 0x144150u, 0x144158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144158u;
label_144158:
    // 0x144158: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x144158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x14415c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x14415cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x144160: 0xc051538  jal         func_1454E0
    ctx->pc = 0x144160u;
    SET_GPR_U32(ctx, 31, 0x144168u);
    ctx->pc = 0x144164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144160u;
    // 0x144164: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1454E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1454E0u, 0x144160u, 0x144168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144168u;
label_144168:
    // 0x144168: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x144168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x14416c: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x14416cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x144170: 0xc051538  jal         func_1454E0
    ctx->pc = 0x144170u;
    SET_GPR_U32(ctx, 31, 0x144178u);
    ctx->pc = 0x144174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144170u;
    // 0x144174: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1454E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1454E0u, 0x144170u, 0x144178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144178u;
label_144178:
    // 0x144178: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x144178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x14417c: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x14417cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x144180: 0xc051538  jal         func_1454E0
    ctx->pc = 0x144180u;
    SET_GPR_U32(ctx, 31, 0x144188u);
    ctx->pc = 0x144184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144180u;
    // 0x144184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1454E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1454E0u, 0x144180u, 0x144188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144188u;
label_144188:
    // 0x144188: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x144188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x14418c: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x14418cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x144190: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x144190u;
    {
        const bool branch_taken_0x144190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x144194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144190u;
        // 0x144194: 0x3c040082  lui         $a0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144190) {
            ctx->pc = 0x1441B0u;
            goto label_1441b0;
        }
    }
    ctx->pc = 0x144198u;
    // 0x144198: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x144198u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14419c: 0xc05e360  jal         func_178D80
    ctx->pc = 0x14419Cu;
    SET_GPR_U32(ctx, 31, 0x1441A4u);
    ctx->pc = 0x1441A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14419Cu;
    // 0x1441a0: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x14419Cu, 0x1441A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1441A4u;
label_1441a4:
    // 0x1441a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1441A4u;
    {
        const bool branch_taken_0x1441a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1441A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1441A4u;
        // 0x1441a8: 0xae02004c  sw          $v0, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1441a4) {
            ctx->pc = 0x1441B8u;
            goto label_1441b8;
        }
    }
    ctx->pc = 0x1441ACu;
    // 0x1441ac: 0x0  nop
    ctx->pc = 0x1441acu;
    // NOP
label_1441b0:
    // 0x1441b0: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x1441b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x1441b4: 0x0  nop
    ctx->pc = 0x1441b4u;
    // NOP
label_1441b8:
    // 0x1441b8: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x1441b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1441bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1441BCu;
    {
        const bool branch_taken_0x1441bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1441C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1441BCu;
        // 0x1441c0: 0x3c040082  lui         $a0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1441bc) {
            ctx->pc = 0x1441D8u;
            goto label_1441d8;
        }
    }
    ctx->pc = 0x1441C4u;
    // 0x1441c4: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x1441c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1441c8: 0xc05e360  jal         func_178D80
    ctx->pc = 0x1441C8u;
    SET_GPR_U32(ctx, 31, 0x1441D0u);
    ctx->pc = 0x1441CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1441C8u;
    // 0x1441cc: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x1441C8u, 0x1441D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1441D0u;
label_1441d0:
    // 0x1441d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1441D0u;
    {
        const bool branch_taken_0x1441d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1441D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1441D0u;
        // 0x1441d4: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1441d0) {
            ctx->pc = 0x1441E0u;
            goto label_1441e0;
        }
    }
    ctx->pc = 0x1441D8u;
label_1441d8:
    // 0x1441d8: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x1441d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x1441dc: 0x0  nop
    ctx->pc = 0x1441dcu;
    // NOP
label_1441e0:
    // 0x1441e0: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1441e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1441e4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1441E4u;
    {
        const bool branch_taken_0x1441e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1441E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1441E4u;
        // 0x1441e8: 0x3c040082  lui         $a0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1441e4) {
            ctx->pc = 0x144200u;
            goto label_144200;
        }
    }
    ctx->pc = 0x1441ECu;
    // 0x1441ec: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x1441ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1441f0: 0xc05e360  jal         func_178D80
    ctx->pc = 0x1441F0u;
    SET_GPR_U32(ctx, 31, 0x1441F8u);
    ctx->pc = 0x1441F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1441F0u;
    // 0x1441f4: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x1441F0u, 0x1441F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1441F8u;
label_1441f8:
    // 0x1441f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1441F8u;
    {
        const bool branch_taken_0x1441f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1441FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1441F8u;
        // 0x1441fc: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1441f8) {
            ctx->pc = 0x144208u;
            goto label_144208;
        }
    }
    ctx->pc = 0x144200u;
label_144200:
    // 0x144200: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x144200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x144204: 0x0  nop
    ctx->pc = 0x144204u;
    // NOP
label_144208:
    // 0x144208: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x144208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x14420c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14420Cu;
    {
        const bool branch_taken_0x14420c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x144210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14420Cu;
        // 0x144210: 0x3c040082  lui         $a0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14420c) {
            ctx->pc = 0x144228u;
            goto label_144228;
        }
    }
    ctx->pc = 0x144214u;
    // 0x144214: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x144214u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x144218: 0xc05e360  jal         func_178D80
    ctx->pc = 0x144218u;
    SET_GPR_U32(ctx, 31, 0x144220u);
    ctx->pc = 0x14421Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144218u;
    // 0x14421c: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x144218u, 0x144220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144220u;
label_144220:
    // 0x144220: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x144220u;
    {
        const bool branch_taken_0x144220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144220u;
        // 0x144224: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144220) {
            ctx->pc = 0x144230u;
            goto label_144230;
        }
    }
    ctx->pc = 0x144228u;
label_144228:
    // 0x144228: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x144228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x14422c: 0x0  nop
    ctx->pc = 0x14422cu;
    // NOP
label_144230:
    // 0x144230: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x144230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x144234: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x144234u;
    {
        const bool branch_taken_0x144234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x144238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144234u;
        // 0x144238: 0x3c040082  lui         $a0, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144234) {
            ctx->pc = 0x144250u;
            goto label_144250;
        }
    }
    ctx->pc = 0x14423Cu;
    // 0x14423c: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x14423cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x144240: 0xc05e360  jal         func_178D80
    ctx->pc = 0x144240u;
    SET_GPR_U32(ctx, 31, 0x144248u);
    ctx->pc = 0x144244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144240u;
    // 0x144244: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x144240u, 0x144248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144248u;
label_144248:
    // 0x144248: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x144248u;
    {
        const bool branch_taken_0x144248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14424Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144248u;
        // 0x14424c: 0xae02005c  sw          $v0, 0x5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144248) {
            ctx->pc = 0x144258u;
            goto label_144258;
        }
    }
    ctx->pc = 0x144250u;
label_144250:
    // 0x144250: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x144250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x144254: 0x0  nop
    ctx->pc = 0x144254u;
    // NOP
label_144258:
    // 0x144258: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x144258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14425c: 0x8e06004c  lw          $a2, 0x4C($s0)
    ctx->pc = 0x14425cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x144260: 0xc051474  jal         func_1451D0
    ctx->pc = 0x144260u;
    SET_GPR_U32(ctx, 31, 0x144268u);
    ctx->pc = 0x144264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144260u;
    // 0x144264: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1451D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1451D0u, 0x144260u, 0x144268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144268u;
label_144268:
    // 0x144268: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x144268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14426c: 0x8e060050  lw          $a2, 0x50($s0)
    ctx->pc = 0x14426cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x144270: 0xc051474  jal         func_1451D0
    ctx->pc = 0x144270u;
    SET_GPR_U32(ctx, 31, 0x144278u);
    ctx->pc = 0x144274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144270u;
    // 0x144274: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1451D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1451D0u, 0x144270u, 0x144278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144278u;
label_144278:
    // 0x144278: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x144278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x14427c: 0x8e060054  lw          $a2, 0x54($s0)
    ctx->pc = 0x14427cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x144280: 0xc051474  jal         func_1451D0
    ctx->pc = 0x144280u;
    SET_GPR_U32(ctx, 31, 0x144288u);
    ctx->pc = 0x144284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144280u;
    // 0x144284: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1451D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1451D0u, 0x144280u, 0x144288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144288u;
label_144288:
    // 0x144288: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x144288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x14428c: 0x8e060058  lw          $a2, 0x58($s0)
    ctx->pc = 0x14428cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x144290: 0xc051474  jal         func_1451D0
    ctx->pc = 0x144290u;
    SET_GPR_U32(ctx, 31, 0x144298u);
    ctx->pc = 0x144294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144290u;
    // 0x144294: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1451D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1451D0u, 0x144290u, 0x144298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144298u;
label_144298:
    // 0x144298: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x144298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x14429c: 0x8e06005c  lw          $a2, 0x5C($s0)
    ctx->pc = 0x14429cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x1442a0: 0xc051474  jal         func_1451D0
    ctx->pc = 0x1442A0u;
    SET_GPR_U32(ctx, 31, 0x1442A8u);
    ctx->pc = 0x1442A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1442A0u;
    // 0x1442a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1451D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1451D0u, 0x1442A0u, 0x1442A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1442A8u;
label_1442a8:
    // 0x1442a8: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x1442a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1442ac: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x1442acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1442b0: 0xc051474  jal         func_1451D0
    ctx->pc = 0x1442B0u;
    SET_GPR_U32(ctx, 31, 0x1442B8u);
    ctx->pc = 0x1442B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1442B0u;
    // 0x1442b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1451D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1451D0u, 0x1442B0u, 0x1442B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1442B8u;
label_1442b8:
    // 0x1442b8: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1442b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1442bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1442bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1442c0:
    // 0x1442c0: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x1442c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x1442c4: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x1442c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x1442c8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1442c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1442cc: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x1442ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x1442d0: 0x28830020  slti        $v1, $a0, 0x20
    ctx->pc = 0x1442d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1442d4: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x1442d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x1442d8: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x1442d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    // 0x1442dc: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x1442dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x1442e0: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x1442e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x1442e4: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x1442e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x1442e8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1442E8u;
    {
        const bool branch_taken_0x1442e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1442ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1442E8u;
        // 0x1442ec: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1442e8) {
            ctx->pc = 0x1442C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1442c0;
        }
    }
    ctx->pc = 0x1442F0u;
    // 0x1442f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1442f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1442f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1442f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1442f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1442F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1442FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1442F8u;
        // 0x1442fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1442F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144300u;
}
