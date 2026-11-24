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

// Function: sub_001D0170
// Address: 0x1d0170 - 0x1d029c
void sub_001D0170_0x1d0170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0170_0x1d0170");
#endif

    switch (ctx->pc) {
        case 0x1d0194u: goto label_1d0194;
        case 0x1d01e0u: goto label_1d01e0;
        case 0x1d0228u: goto label_1d0228;
        case 0x1d0238u: goto label_1d0238;
        case 0x1d0248u: goto label_1d0248;
        case 0x1d0258u: goto label_1d0258;
        case 0x1d026cu: goto label_1d026c;
        case 0x1d0280u: goto label_1d0280;
        default: break;
    }

    ctx->pc = 0x1d0170u;

    // 0x1d0170: 0x27bdfce0  addiu       $sp, $sp, -0x320
    ctx->pc = 0x1d0170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966496));
    // 0x1d0174: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d0174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1d0178: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d0178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d017c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d017cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d0180: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d0180u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0184: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d0184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d0188: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d0188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d018c: 0xc0438a4  jal         func_10E290
    ctx->pc = 0x1D018Cu;
    SET_GPR_U32(ctx, 31, 0x1D0194u);
    ctx->pc = 0x1D0190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D018Cu;
    // 0x1d0190: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E290u, 0x1D018Cu, 0x1D0194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0194u;
label_1d0194:
    // 0x1d0194: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1d0194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x1d0198: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d0198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d019c: 0xac209020  sw          $zero, -0x6FE0($at)
    ctx->pc = 0x1d019cu;
    runtime->Store32(rdram, ctx, 0x10009020u, GPR_U32(ctx, 0)); // MMIO: 0x10009020
    // 0x1d01a0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1d01a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1d01a4: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1d01a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x1d01a8: 0xac22e010  sw          $v0, -0x1FF0($at)
    ctx->pc = 0x1d01a8u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 2)); // MMIO: 0x1000e010
    // 0x1d01ac: 0x92633023  lbu         $v1, 0x3023($s3)
    ctx->pc = 0x1d01acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12323)));
    // 0x1d01b0: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1d01b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x1d01b4: 0x24020145  addiu       $v0, $zero, 0x145
    ctx->pc = 0x1d01b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 325));
    // 0x1d01b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d01b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d01bc: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1d01bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1d01c0: 0x8c633030  lw          $v1, 0x3030($v1)
    ctx->pc = 0x1d01c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12336)));
    // 0x1d01c4: 0xac239030  sw          $v1, -0x6FD0($at)
    ctx->pc = 0x1d01c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938672), GPR_U32(ctx, 3));
    // 0x1d01c8: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1d01c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x1d01cc: 0xac229000  sw          $v0, -0x7000($at)
    ctx->pc = 0x1d01ccu;
    runtime->Store32(rdram, ctx, 0x10009000u, GPR_U32(ctx, 2)); // MMIO: 0x10009000
    // 0x1d01d0: 0x92623023  lbu         $v0, 0x3023($s3)
    ctx->pc = 0x1d01d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12323)));
    // 0x1d01d4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1d01d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1d01d8: 0xc096a18  jal         func_25A860
    ctx->pc = 0x1D01D8u;
    SET_GPR_U32(ctx, 31, 0x1D01E0u);
    ctx->pc = 0x1D01DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D01D8u;
    // 0x1d01dc: 0xa2623023  sb          $v0, 0x3023($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 12323), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A860u, 0x1D01D8u, 0x1D01E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D01E0u;
label_1d01e0:
    // 0x1d01e0: 0x92633020  lbu         $v1, 0x3020($s3)
    ctx->pc = 0x1d01e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12320)));
    // 0x1d01e4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1d01e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d01e8: 0x8f918b2c  lw          $s1, -0x74D4($gp)
    ctx->pc = 0x1d01e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x1d01ec: 0x8f908b30  lw          $s0, -0x74D0($gp)
    ctx->pc = 0x1d01ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x1d01f0: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D01F0u;
    {
        const bool branch_taken_0x1d01f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D01F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D01F0u;
        // 0x1d01f4: 0x8f928b28  lw          $s2, -0x74D8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d01f0) {
            ctx->pc = 0x1D0250u;
            goto label_1d0250;
        }
    }
    ctx->pc = 0x1D01F8u;
    // 0x1d01f8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1d01f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d01fc: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D01FCu;
    {
        const bool branch_taken_0x1d01fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D0200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D01FCu;
        // 0x1d0200: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d01fc) {
            ctx->pc = 0x1D0240u;
            goto label_1d0240;
        }
    }
    ctx->pc = 0x1D0204u;
    // 0x1d0204: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D0204u;
    {
        const bool branch_taken_0x1d0204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d0204) {
            ctx->pc = 0x1D0230u;
            goto label_1d0230;
        }
    }
    ctx->pc = 0x1D020Cu;
    // 0x1d020c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d020cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0210: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0210u;
    {
        const bool branch_taken_0x1d0210 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d0210) {
            ctx->pc = 0x1D0220u;
            goto label_1d0220;
        }
    }
    ctx->pc = 0x1D0218u;
    // 0x1d0218: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1D0218u;
    {
        const bool branch_taken_0x1d0218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0218) {
            ctx->pc = 0x1D0258u;
            goto label_1d0258;
        }
    }
    ctx->pc = 0x1D0220u;
label_1d0220:
    // 0x1d0220: 0xc073e94  jal         func_1CFA50
    ctx->pc = 0x1D0220u;
    SET_GPR_U32(ctx, 31, 0x1D0228u);
    ctx->pc = 0x1D0224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0220u;
    // 0x1d0224: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA50u, 0x1D0220u, 0x1D0228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0228u;
label_1d0228:
    // 0x1d0228: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D0228u;
    {
        const bool branch_taken_0x1d0228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0228) {
            ctx->pc = 0x1D0258u;
            goto label_1d0258;
        }
    }
    ctx->pc = 0x1D0230u;
label_1d0230:
    // 0x1d0230: 0xc073dc4  jal         func_1CF710
    ctx->pc = 0x1D0230u;
    SET_GPR_U32(ctx, 31, 0x1D0238u);
    ctx->pc = 0x1D0234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0230u;
    // 0x1d0234: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF710u, 0x1D0230u, 0x1D0238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0238u;
label_1d0238:
    // 0x1d0238: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D0238u;
    {
        const bool branch_taken_0x1d0238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0238) {
            ctx->pc = 0x1D0258u;
            goto label_1d0258;
        }
    }
    ctx->pc = 0x1D0240u;
label_1d0240:
    // 0x1d0240: 0xc073fd8  jal         func_1CFF60
    ctx->pc = 0x1D0240u;
    SET_GPR_U32(ctx, 31, 0x1D0248u);
    ctx->pc = 0x1D0244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0240u;
    // 0x1d0244: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFF60u, 0x1D0240u, 0x1D0248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0248u;
label_1d0248:
    // 0x1d0248: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0248u;
    {
        const bool branch_taken_0x1d0248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0248) {
            ctx->pc = 0x1D0258u;
            goto label_1d0258;
        }
    }
    ctx->pc = 0x1D0250u;
label_1d0250:
    // 0x1d0250: 0xc073e2c  jal         func_1CF8B0
    ctx->pc = 0x1D0250u;
    SET_GPR_U32(ctx, 31, 0x1D0258u);
    ctx->pc = 0x1D0254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0250u;
    // 0x1d0254: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF8B0u, 0x1D0250u, 0x1D0258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0258u;
label_1d0258:
    // 0x1d0258: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1d0258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1d025c: 0xaf928b28  sw          $s2, -0x74D8($gp)
    ctx->pc = 0x1d025cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937384), GPR_U32(ctx, 18));
    // 0x1d0260: 0xaf918b2c  sw          $s1, -0x74D4($gp)
    ctx->pc = 0x1d0260u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937388), GPR_U32(ctx, 17));
    // 0x1d0264: 0xc096a8c  jal         func_25AA30
    ctx->pc = 0x1D0264u;
    SET_GPR_U32(ctx, 31, 0x1D026Cu);
    ctx->pc = 0x1D0268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0264u;
    // 0x1d0268: 0xaf908b30  sw          $s0, -0x74D0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937392), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AA30u, 0x1D0264u, 0x1D026Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D026Cu;
label_1d026c:
    // 0x1d026c: 0x8f8287dc  lw          $v0, -0x7824($gp)
    ctx->pc = 0x1d026cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936540)));
    // 0x1d0270: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d0270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0274: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d0274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d0278: 0xc0438a4  jal         func_10E290
    ctx->pc = 0x1D0278u;
    SET_GPR_U32(ctx, 31, 0x1D0280u);
    ctx->pc = 0x1D027Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0278u;
    // 0x1d027c: 0xaf8287dc  sw          $v0, -0x7824($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936540), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E290u, 0x1D0278u, 0x1D0280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0280u;
label_1d0280:
    // 0x1d0280: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d0280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d0284: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d0284u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d0288: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d0288u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d028c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d028cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0290: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d0290u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0294: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0294u;
        // 0x1d0298: 0x27bd0320  addiu       $sp, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D029Cu;
}
