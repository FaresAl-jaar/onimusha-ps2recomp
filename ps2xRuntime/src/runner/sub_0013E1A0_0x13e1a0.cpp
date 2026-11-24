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

// Function: sub_0013E1A0
// Address: 0x13e1a0 - 0x13e60c
void sub_0013E1A0_0x13e1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E1A0_0x13e1a0");
#endif

    switch (ctx->pc) {
        case 0x13e1d8u: goto label_13e1d8;
        case 0x13e248u: goto label_13e248;
        case 0x13e254u: goto label_13e254;
        case 0x13e260u: goto label_13e260;
        case 0x13e270u: goto label_13e270;
        case 0x13e280u: goto label_13e280;
        case 0x13e290u: goto label_13e290;
        case 0x13e2a0u: goto label_13e2a0;
        case 0x13e2b0u: goto label_13e2b0;
        case 0x13e328u: goto label_13e328;
        case 0x13e458u: goto label_13e458;
        case 0x13e528u: goto label_13e528;
        default: break;
    }

    ctx->pc = 0x13e1a0u;

    // 0x13e1a0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x13e1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x13e1a4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x13e1a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x13e1a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x13e1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x13e1ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13e1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13e1b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13e1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13e1b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13e1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13e1b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13e1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13e1bc: 0x90226710  lbu         $v0, 0x6710($at)
    ctx->pc = 0x13e1bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6B6710u));
    // 0x13e1c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E1C0u;
    {
        const bool branch_taken_0x13e1c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E1C0u;
        // 0x13e1c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e1c0) {
            ctx->pc = 0x13E1D0u;
            goto label_13e1d0;
        }
    }
    ctx->pc = 0x13E1C8u;
    // 0x13e1c8: 0x10000109  b           . + 4 + (0x109 << 2)
    ctx->pc = 0x13E1C8u;
    {
        const bool branch_taken_0x13e1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e1c8) {
            ctx->pc = 0x13E5F0u;
            goto label_13e5f0;
        }
    }
    ctx->pc = 0x13E1D0u;
label_13e1d0:
    // 0x13e1d0: 0x10000101  b           . + 4 + (0x101 << 2)
    ctx->pc = 0x13E1D0u;
    {
        const bool branch_taken_0x13e1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E1D0u;
        // 0x13e1d4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e1d0) {
            ctx->pc = 0x13E5D8u;
            goto label_13e5d8;
        }
    }
    ctx->pc = 0x13E1D8u;
label_13e1d8:
    // 0x13e1d8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x13e1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x13e1dc: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x13e1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x13e1e0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x13e1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x13e1e4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x13e1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x13e1e8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x13e1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13e1ec: 0x24426710  addiu       $v0, $v0, 0x6710
    ctx->pc = 0x13e1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26384));
    // 0x13e1f0: 0x248475e0  addiu       $a0, $a0, 0x75E0
    ctx->pc = 0x13e1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30176));
    // 0x13e1f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13e1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13e1f8: 0x90450109  lbu         $a1, 0x109($v0)
    ctx->pc = 0x13e1f8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 265)));
    // 0x13e1fc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x13e1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x13e200: 0x245100c0  addiu       $s1, $v0, 0xC0
    ctx->pc = 0x13e200u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x13e204: 0x2463716c  addiu       $v1, $v1, 0x716C
    ctx->pc = 0x13e204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29036));
    // 0x13e208: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x13e208u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13e20c: 0x8c420104  lw          $v0, 0x104($v0)
    ctx->pc = 0x13e20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x13e210: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x13e210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13e214: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x13e214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x13e218: 0x8c730000  lw          $s3, 0x0($v1)
    ctx->pc = 0x13e218u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13e21c: 0x10400078  beqz        $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x13E21Cu;
    {
        const bool branch_taken_0x13e21c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E21Cu;
        // 0x13e220: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e21c) {
            ctx->pc = 0x13E400u;
            goto label_13e400;
        }
    }
    ctx->pc = 0x13E224u;
    // 0x13e224: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13e224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13e228: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x13e228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x13e22c: 0xa2220048  sb          $v0, 0x48($s1)
    ctx->pc = 0x13e22cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 72), (uint8_t)GPR_U32(ctx, 2));
    // 0x13e230: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x13e230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x13e234: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x13e234u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13e238: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x13e238u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x13e23c: 0x8625004a  lh          $a1, 0x4A($s1)
    ctx->pc = 0x13e23cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 74)));
    // 0x13e240: 0xc04d574  jal         func_1355D0
    ctx->pc = 0x13E240u;
    SET_GPR_U32(ctx, 31, 0x13E248u);
    ctx->pc = 0x13E244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E240u;
    // 0x13e244: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1355D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1355D0u, 0x13E240u, 0x13E248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E248u;
label_13e248:
    // 0x13e248: 0x8625004c  lh          $a1, 0x4C($s1)
    ctx->pc = 0x13e248u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x13e24c: 0xc04d594  jal         func_135650
    ctx->pc = 0x13E24Cu;
    SET_GPR_U32(ctx, 31, 0x13E254u);
    ctx->pc = 0x13E250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E24Cu;
    // 0x13e250: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135650u, 0x13E24Cu, 0x13E254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E254u;
label_13e254:
    // 0x13e254: 0x8625004e  lh          $a1, 0x4E($s1)
    ctx->pc = 0x13e254u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 78)));
    // 0x13e258: 0xc04d5b4  jal         func_1356D0
    ctx->pc = 0x13E258u;
    SET_GPR_U32(ctx, 31, 0x13E260u);
    ctx->pc = 0x13E25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E258u;
    // 0x13e25c: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1356D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1356D0u, 0x13E258u, 0x13E260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E260u;
label_13e260:
    // 0x13e260: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x13e260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x13e264: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x13e264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x13e268: 0xc04144e  jal         func_105138
    ctx->pc = 0x13E268u;
    SET_GPR_U32(ctx, 31, 0x13E270u);
    ctx->pc = 0x13E26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E268u;
    // 0x13e26c: 0x27a60110  addiu       $a2, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x13E268u, 0x13E270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E270u;
label_13e270:
    // 0x13e270: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x13e270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x13e274: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x13e274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x13e278: 0xc04144e  jal         func_105138
    ctx->pc = 0x13E278u;
    SET_GPR_U32(ctx, 31, 0x13E280u);
    ctx->pc = 0x13E27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E278u;
    // 0x13e27c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x13E278u, 0x13E280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E280u;
label_13e280:
    // 0x13e280: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x13e280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x13e284: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x13e284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x13e288: 0xc04144e  jal         func_105138
    ctx->pc = 0x13E288u;
    SET_GPR_U32(ctx, 31, 0x13E290u);
    ctx->pc = 0x13E28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E288u;
    // 0x13e28c: 0x27a60150  addiu       $a2, $sp, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x13E288u, 0x13E290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E290u;
label_13e290:
    // 0x13e290: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x13e290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x13e294: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x13e294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x13e298: 0xc04144e  jal         func_105138
    ctx->pc = 0x13E298u;
    SET_GPR_U32(ctx, 31, 0x13E2A0u);
    ctx->pc = 0x13E29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E298u;
    // 0x13e29c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x13E298u, 0x13E2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E2A0u;
label_13e2a0:
    // 0x13e2a0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x13e2a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e2a4: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x13E2A4u;
    {
        const bool branch_taken_0x13e2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E2A4u;
        // 0x13e2a8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e2a4) {
            ctx->pc = 0x13E3E8u;
            goto label_13e3e8;
        }
    }
    ctx->pc = 0x13E2ACu;
    // 0x13e2ac: 0x0  nop
    ctx->pc = 0x13e2acu;
    // NOP
label_13e2b0:
    // 0x13e2b0: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x13e2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x13e2b4: 0x30420030  andi        $v0, $v0, 0x30
    ctx->pc = 0x13e2b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)48);
    // 0x13e2b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E2B8u;
    {
        const bool branch_taken_0x13e2b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E2B8u;
        // 0x13e2bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e2b8) {
            ctx->pc = 0x13E2C8u;
            goto label_13e2c8;
        }
    }
    ctx->pc = 0x13E2C0u;
    // 0x13e2c0: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x13e2c0u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x13e2c4: 0x0  nop
    ctx->pc = 0x13e2c4u;
    // NOP
label_13e2c8:
    // 0x13e2c8: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x13e2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x13e2cc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x13e2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x13e2d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13E2D0u;
    {
        const bool branch_taken_0x13e2d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e2d0) {
            ctx->pc = 0x13E2F0u;
            goto label_13e2f0;
        }
    }
    ctx->pc = 0x13E2D8u;
    // 0x13e2d8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x13e2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x13e2dc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x13e2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x13e2e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E2E0u;
    {
        const bool branch_taken_0x13e2e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e2e0) {
            ctx->pc = 0x13E2F0u;
            goto label_13e2f0;
        }
    }
    ctx->pc = 0x13E2E8u;
    // 0x13e2e8: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x13e2e8u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x13e2ec: 0x0  nop
    ctx->pc = 0x13e2ecu;
    // NOP
label_13e2f0:
    // 0x13e2f0: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x13e2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x13e2f4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x13e2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x13e2f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13E2F8u;
    {
        const bool branch_taken_0x13e2f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e2f8) {
            ctx->pc = 0x13E318u;
            goto label_13e318;
        }
    }
    ctx->pc = 0x13E300u;
    // 0x13e300: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x13e300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x13e304: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13e304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13e308: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E308u;
    {
        const bool branch_taken_0x13e308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e308) {
            ctx->pc = 0x13E318u;
            goto label_13e318;
        }
    }
    ctx->pc = 0x13E310u;
    // 0x13e310: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x13e310u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x13e314: 0x0  nop
    ctx->pc = 0x13e314u;
    // NOP
label_13e318:
    // 0x13e318: 0x10800031  beqz        $a0, . + 4 + (0x31 << 2)
    ctx->pc = 0x13E318u;
    {
        const bool branch_taken_0x13e318 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E318u;
        // 0x13e31c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e318) {
            ctx->pc = 0x13E3E0u;
            goto label_13e3e0;
        }
    }
    ctx->pc = 0x13E320u;
    // 0x13e320: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x13E320u;
    {
        const bool branch_taken_0x13e320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e320) {
            ctx->pc = 0x13E3D0u;
            goto label_13e3d0;
        }
    }
    ctx->pc = 0x13E328u;
label_13e328:
    // 0x13e328: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x13e328u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13e32c: 0x2042821  addu        $a1, $s0, $a0
    ctx->pc = 0x13e32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x13e330: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x13e330u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13e334: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x13e334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x13e338: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x13e338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x13e33c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x13e33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x13e340: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x13e340u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13e344: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x13e344u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13e348: 0x4be208e8  vadd.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x13e348u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13e34c: 0xf8a30000  sqc2        $vf3, 0x0($a1)
    ctx->pc = 0x13e34cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13e350: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x13e350u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13e354: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x13e354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x13e358: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x13e358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x13e35c: 0x94276ad2  lhu         $a3, 0x6AD2($at)
    ctx->pc = 0x13e35cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)FAST_READ16(0x7E6AD2u));
    // 0x13e360: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x13e360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13e364: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x13e364u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13e368: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x13e368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x13e36c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13e36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13e370: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x13e370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13e374: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x13e374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x13e378: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x13e378u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x13e37c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13e37cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x13e380: 0x94256ad2  lhu         $a1, 0x6AD2($at)
    ctx->pc = 0x13e380u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x7E6AD2u));
    // 0x13e384: 0xde040000  ld          $a0, 0x0($s0)
    ctx->pc = 0x13e384u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13e388: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x13e388u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x13e38c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x13e38cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x13e390: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13e390u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x13e394: 0x107001a  div         $zero, $t0, $a3
    ctx->pc = 0x13e394u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x13e398: 0x0  nop
    ctx->pc = 0x13e398u;
    // NOP
    // 0x13e39c: 0x0  nop
    ctx->pc = 0x13e39cu;
    // NOP
    // 0x13e3a0: 0x4012  mflo        $t0
    ctx->pc = 0x13e3a0u;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x13e3a4: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x13e3a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x13e3a8: 0x0  nop
    ctx->pc = 0x13e3a8u;
    // NOP
    // 0x13e3ac: 0x70e5001a  div1        $zero, $a3, $a1
    ctx->pc = 0x13e3acu;
    { int32_t divisor = GPR_S32(ctx, 5); int32_t dividend = GPR_S32(ctx, 7); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
    // 0x13e3b0: 0x0  nop
    ctx->pc = 0x13e3b0u;
    // NOP
    // 0x13e3b4: 0x0  nop
    ctx->pc = 0x13e3b4u;
    // NOP
    // 0x13e3b8: 0x70002812  mflo1       $a1
    ctx->pc = 0x13e3b8u;
    SET_GPR_U64(ctx, 5, ctx->lo1);
    // 0x13e3bc: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x13e3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x13e3c0: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x13e3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x13e3c4: 0xa62814  dsllv       $a1, $a2, $a1
    ctx->pc = 0x13e3c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (GPR_U32(ctx, 5) & 0x3F));
    // 0x13e3c8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x13e3c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x13e3cc: 0xfe040000  sd          $a0, 0x0($s0)
    ctx->pc = 0x13e3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 4));
label_13e3d0:
    // 0x13e3d0: 0x28440003  slti        $a0, $v0, 0x3
    ctx->pc = 0x13e3d0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x13e3d4: 0x1480ffd4  bnez        $a0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x13E3D4u;
    {
        const bool branch_taken_0x13e3d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e3d4) {
            ctx->pc = 0x13E328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13e328;
        }
    }
    ctx->pc = 0x13E3DCu;
    // 0x13e3dc: 0x0  nop
    ctx->pc = 0x13e3dcu;
    // NOP
label_13e3e0:
    // 0x13e3e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x13e3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13e3e4: 0x26100070  addiu       $s0, $s0, 0x70
    ctx->pc = 0x13e3e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_13e3e8:
    // 0x13e3e8: 0x73102a  slt         $v0, $v1, $s3
    ctx->pc = 0x13e3e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x13e3ec: 0x1440ffb0  bnez        $v0, . + 4 + (-0x50 << 2)
    ctx->pc = 0x13E3ECu;
    {
        const bool branch_taken_0x13e3ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e3ec) {
            ctx->pc = 0x13E2B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13e2b0;
        }
    }
    ctx->pc = 0x13E3F4u;
    // 0x13e3f4: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x13e3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x13e3f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13e3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13e3fc: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x13e3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
label_13e400:
    // 0x13e400: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x13e400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x13e404: 0x14400072  bnez        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x13E404u;
    {
        const bool branch_taken_0x13e404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e404) {
            ctx->pc = 0x13E5D0u;
            goto label_13e5d0;
        }
    }
    ctx->pc = 0x13E40Cu;
    // 0x13e40c: 0xa2200048  sb          $zero, 0x48($s1)
    ctx->pc = 0x13e40cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x13e410: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x13e410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x13e414: 0x92230049  lbu         $v1, 0x49($s1)
    ctx->pc = 0x13e414u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 73)));
    // 0x13e418: 0x244275e0  addiu       $v0, $v0, 0x75E0
    ctx->pc = 0x13e418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30176));
    // 0x13e41c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13e41cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13e420: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13e420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13e424: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x13e424u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13e428: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x13e428u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x13e42c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x13e42cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x13e430: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x13e430u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x13e434: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x13e434u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x13e438: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x13e438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x13e43c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x13e43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x13e440: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x13E440u;
    {
        const bool branch_taken_0x13e440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e440) {
            ctx->pc = 0x13E508u;
            goto label_13e508;
        }
    }
    ctx->pc = 0x13E448u;
    // 0x13e448: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x13e448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x13e44c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13e44cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e450: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x13E450u;
    {
        const bool branch_taken_0x13e450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E450u;
        // 0x13e454: 0x2463716c  addiu       $v1, $v1, 0x716C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29036));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e450) {
            ctx->pc = 0x13E4E0u;
            goto label_13e4e0;
        }
    }
    ctx->pc = 0x13E458u;
label_13e458:
    // 0x13e458: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x13e458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x13e45c: 0x30420030  andi        $v0, $v0, 0x30
    ctx->pc = 0x13e45cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)48);
    // 0x13e460: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E460u;
    {
        const bool branch_taken_0x13e460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E460u;
        // 0x13e464: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e460) {
            ctx->pc = 0x13E470u;
            goto label_13e470;
        }
    }
    ctx->pc = 0x13E468u;
    // 0x13e468: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x13e468u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x13e46c: 0x0  nop
    ctx->pc = 0x13e46cu;
    // NOP
label_13e470:
    // 0x13e470: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x13e470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x13e474: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x13e474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x13e478: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13E478u;
    {
        const bool branch_taken_0x13e478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e478) {
            ctx->pc = 0x13E498u;
            goto label_13e498;
        }
    }
    ctx->pc = 0x13E480u;
    // 0x13e480: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x13e480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x13e484: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x13e484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x13e488: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E488u;
    {
        const bool branch_taken_0x13e488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e488) {
            ctx->pc = 0x13E498u;
            goto label_13e498;
        }
    }
    ctx->pc = 0x13E490u;
    // 0x13e490: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x13e490u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x13e494: 0x0  nop
    ctx->pc = 0x13e494u;
    // NOP
label_13e498:
    // 0x13e498: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x13e498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x13e49c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x13e49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x13e4a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13E4A0u;
    {
        const bool branch_taken_0x13e4a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e4a0) {
            ctx->pc = 0x13E4C0u;
            goto label_13e4c0;
        }
    }
    ctx->pc = 0x13E4A8u;
    // 0x13e4a8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x13e4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x13e4ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13e4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13e4b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E4B0u;
    {
        const bool branch_taken_0x13e4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e4b0) {
            ctx->pc = 0x13E4C0u;
            goto label_13e4c0;
        }
    }
    ctx->pc = 0x13E4B8u;
    // 0x13e4b8: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x13e4b8u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x13e4bc: 0x0  nop
    ctx->pc = 0x13e4bcu;
    // NOP
label_13e4c0:
    // 0x13e4c0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13E4C0u;
    {
        const bool branch_taken_0x13e4c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e4c0) {
            ctx->pc = 0x13E4D8u;
            goto label_13e4d8;
        }
    }
    ctx->pc = 0x13E4C8u;
    // 0x13e4c8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x13e4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x13e4cc: 0x2107c  dsll32      $v0, $v0, 1
    ctx->pc = 0x13e4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 1));
    // 0x13e4d0: 0x2107e  dsrl32      $v0, $v0, 1
    ctx->pc = 0x13e4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 1));
    // 0x13e4d4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x13e4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_13e4d8:
    // 0x13e4d8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x13e4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x13e4dc: 0x26100070  addiu       $s0, $s0, 0x70
    ctx->pc = 0x13e4dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_13e4e0:
    // 0x13e4e0: 0x92220049  lbu         $v0, 0x49($s1)
    ctx->pc = 0x13e4e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 73)));
    // 0x13e4e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13e4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13e4e8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x13e4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13e4ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13e4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13e4f0: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x13e4f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13e4f4: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x13E4F4u;
    {
        const bool branch_taken_0x13e4f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e4f4) {
            ctx->pc = 0x13E458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13e458;
        }
    }
    ctx->pc = 0x13E4FCu;
    // 0x13e4fc: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x13E4FCu;
    {
        const bool branch_taken_0x13e4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e4fc) {
            ctx->pc = 0x13E5D0u;
            goto label_13e5d0;
        }
    }
    ctx->pc = 0x13E504u;
    // 0x13e504: 0x0  nop
    ctx->pc = 0x13e504u;
    // NOP
label_13e508:
    // 0x13e508: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x13e508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x13e50c: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x13E50Cu;
    {
        const bool branch_taken_0x13e50c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E50Cu;
        // 0x13e510: 0x3c04006b  lui         $a0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e50c) {
            ctx->pc = 0x13E5D0u;
            goto label_13e5d0;
        }
    }
    ctx->pc = 0x13E514u;
    // 0x13e514: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13e514u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e518: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x13e518u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x13e51c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x13E51Cu;
    {
        const bool branch_taken_0x13e51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E51Cu;
        // 0x13e520: 0x2484716c  addiu       $a0, $a0, 0x716C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29036));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e51c) {
            ctx->pc = 0x13E5B0u;
            goto label_13e5b0;
        }
    }
    ctx->pc = 0x13E524u;
    // 0x13e524: 0x0  nop
    ctx->pc = 0x13e524u;
    // NOP
label_13e528:
    // 0x13e528: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x13e528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x13e52c: 0x30630030  andi        $v1, $v1, 0x30
    ctx->pc = 0x13e52cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)48);
    // 0x13e530: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E530u;
    {
        const bool branch_taken_0x13e530 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E530u;
        // 0x13e534: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e530) {
            ctx->pc = 0x13E540u;
            goto label_13e540;
        }
    }
    ctx->pc = 0x13E538u;
    // 0x13e538: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x13e538u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x13e53c: 0x0  nop
    ctx->pc = 0x13e53cu;
    // NOP
label_13e540:
    // 0x13e540: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x13e540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x13e544: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x13e544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x13e548: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13E548u;
    {
        const bool branch_taken_0x13e548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e548) {
            ctx->pc = 0x13E568u;
            goto label_13e568;
        }
    }
    ctx->pc = 0x13E550u;
    // 0x13e550: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x13e550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x13e554: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x13e554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x13e558: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E558u;
    {
        const bool branch_taken_0x13e558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e558) {
            ctx->pc = 0x13E568u;
            goto label_13e568;
        }
    }
    ctx->pc = 0x13E560u;
    // 0x13e560: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x13e560u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x13e564: 0x0  nop
    ctx->pc = 0x13e564u;
    // NOP
label_13e568:
    // 0x13e568: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x13e568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x13e56c: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x13e56cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x13e570: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13E570u;
    {
        const bool branch_taken_0x13e570 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e570) {
            ctx->pc = 0x13E590u;
            goto label_13e590;
        }
    }
    ctx->pc = 0x13E578u;
    // 0x13e578: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x13e578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x13e57c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x13e57cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x13e580: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13E580u;
    {
        const bool branch_taken_0x13e580 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e580) {
            ctx->pc = 0x13E590u;
            goto label_13e590;
        }
    }
    ctx->pc = 0x13E588u;
    // 0x13e588: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x13e588u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x13e58c: 0x0  nop
    ctx->pc = 0x13e58cu;
    // NOP
label_13e590:
    // 0x13e590: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x13E590u;
    {
        const bool branch_taken_0x13e590 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e590) {
            ctx->pc = 0x13E5A8u;
            goto label_13e5a8;
        }
    }
    ctx->pc = 0x13E598u;
    // 0x13e598: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x13e598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x13e59c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x13e59cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x13e5a0: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x13e5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x13e5a4: 0x0  nop
    ctx->pc = 0x13e5a4u;
    // NOP
label_13e5a8:
    // 0x13e5a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13e5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13e5ac: 0x26100070  addiu       $s0, $s0, 0x70
    ctx->pc = 0x13e5acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_13e5b0:
    // 0x13e5b0: 0x92230049  lbu         $v1, 0x49($s1)
    ctx->pc = 0x13e5b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 73)));
    // 0x13e5b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13e5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13e5b8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x13e5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x13e5bc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x13e5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13e5c0: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x13e5c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x13e5c4: 0x1460ffd8  bnez        $v1, . + 4 + (-0x28 << 2)
    ctx->pc = 0x13E5C4u;
    {
        const bool branch_taken_0x13e5c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e5c4) {
            ctx->pc = 0x13E528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13e528;
        }
    }
    ctx->pc = 0x13E5CCu;
    // 0x13e5cc: 0x0  nop
    ctx->pc = 0x13e5ccu;
    // NOP
label_13e5d0:
    // 0x13e5d0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x13e5d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x13e5d4: 0x0  nop
    ctx->pc = 0x13e5d4u;
    // NOP
label_13e5d8:
    // 0x13e5d8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x13e5d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x13e5dc: 0x90226710  lbu         $v0, 0x6710($at)
    ctx->pc = 0x13e5dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6B6710u));
    // 0x13e5e0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x13e5e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13e5e4: 0x1440fefc  bnez        $v0, . + 4 + (-0x104 << 2)
    ctx->pc = 0x13E5E4u;
    {
        const bool branch_taken_0x13e5e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E5E4u;
        // 0x13e5e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e5e4) {
            ctx->pc = 0x13E1D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13e1d8;
        }
    }
    ctx->pc = 0x13E5ECu;
    // 0x13e5ec: 0x0  nop
    ctx->pc = 0x13e5ecu;
    // NOP
label_13e5f0:
    // 0x13e5f0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x13e5f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13e5f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13e5f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13e5f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13e5f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13e5fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13e5fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13e600: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13e600u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e604: 0x3e00008  jr          $ra
    ctx->pc = 0x13E604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E604u;
        // 0x13e608: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E60Cu;
}
