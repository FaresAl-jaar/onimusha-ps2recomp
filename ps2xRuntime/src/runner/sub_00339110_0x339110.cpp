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

// Function: sub_00339110
// Address: 0x339110 - 0x339450
void sub_00339110_0x339110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339110_0x339110");
#endif

    switch (ctx->pc) {
        case 0x339144u: goto label_339144;
        case 0x339150u: goto label_339150;
        case 0x339160u: goto label_339160;
        case 0x339218u: goto label_339218;
        case 0x3392acu: goto label_3392ac;
        case 0x3392c4u: goto label_3392c4;
        case 0x3392f0u: goto label_3392f0;
        case 0x339324u: goto label_339324;
        case 0x339344u: goto label_339344;
        case 0x3393d0u: goto label_3393d0;
        case 0x339428u: goto label_339428;
        default: break;
    }

    ctx->pc = 0x339110u;

    // 0x339110: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x339110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x339114: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x339114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x339118: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x339118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x33911c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x33911cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x339120: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x339120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x339124: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x339124u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339128: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x339128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x33912c: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x33912cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x339130: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x339130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x339134: 0x24844060  addiu       $a0, $a0, 0x4060
    ctx->pc = 0x339134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    // 0x339138: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x339138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33913c: 0xc0ce6c4  jal         func_339B10
    ctx->pc = 0x33913Cu;
    SET_GPR_U32(ctx, 31, 0x339144u);
    ctx->pc = 0x339140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33913Cu;
    // 0x339140: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339B10u, 0x33913Cu, 0x339144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339144u;
label_339144:
    // 0x339144: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x339144u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x339148: 0xc0ce81c  jal         func_33A070
    ctx->pc = 0x339148u;
    SET_GPR_U32(ctx, 31, 0x339150u);
    ctx->pc = 0x33914Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339148u;
    // 0x33914c: 0x24844060  addiu       $a0, $a0, 0x4060 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A070u, 0x339148u, 0x339150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339150u;
label_339150:
    // 0x339150: 0x24140005  addiu       $s4, $zero, 0x5
    ctx->pc = 0x339150u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x339154: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x339154u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339158: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x339158u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33915c: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x33915cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_339160:
    // 0x339160: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x339160u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x339164: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x339164u;
    {
        const bool branch_taken_0x339164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x339168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339164u;
        // 0x339168: 0x8e300014  lw          $s0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339164) {
            ctx->pc = 0x339170u;
            goto label_339170;
        }
    }
    ctx->pc = 0x33916Cu;
    // 0x33916c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x33916cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_339170:
    // 0x339170: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x339170u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x339174: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x339174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x339178: 0x10820015  beq         $a0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x339178u;
    {
        const bool branch_taken_0x339178 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x339178) {
            ctx->pc = 0x3391D0u;
            goto label_3391d0;
        }
    }
    ctx->pc = 0x339180u;
    // 0x339180: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x339180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x339184: 0x10820012  beq         $a0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x339184u;
    {
        const bool branch_taken_0x339184 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x339188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339184u;
        // 0x339188: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339184) {
            ctx->pc = 0x3391D0u;
            goto label_3391d0;
        }
    }
    ctx->pc = 0x33918Cu;
    // 0x33918c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x33918Cu;
    {
        const bool branch_taken_0x33918c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x33918c) {
            ctx->pc = 0x3391A0u;
            goto label_3391a0;
        }
    }
    ctx->pc = 0x339194u;
    // 0x339194: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x339194u;
    {
        const bool branch_taken_0x339194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x339194) {
            ctx->pc = 0x339220u;
            goto label_339220;
        }
    }
    ctx->pc = 0x33919Cu;
    // 0x33919c: 0x0  nop
    ctx->pc = 0x33919cu;
    // NOP
label_3391a0:
    // 0x3391a0: 0x92220008  lbu         $v0, 0x8($s1)
    ctx->pc = 0x3391a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3391a4: 0x1443001e  bne         $v0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x3391A4u;
    {
        const bool branch_taken_0x3391a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3391a4) {
            ctx->pc = 0x339220u;
            goto label_339220;
        }
    }
    ctx->pc = 0x3391ACu;
    // 0x3391ac: 0x86230010  lh          $v1, 0x10($s1)
    ctx->pc = 0x3391acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3391b0: 0x86220012  lh          $v0, 0x12($s1)
    ctx->pc = 0x3391b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x3391b4: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x3391b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x3391b8: 0x50082a  slt         $at, $v0, $s0
    ctx->pc = 0x3391b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3391bc: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x3391BCu;
    {
        const bool branch_taken_0x3391bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3391bc) {
            ctx->pc = 0x339220u;
            goto label_339220;
        }
    }
    ctx->pc = 0x3391C4u;
    // 0x3391c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3391c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3391c8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3391C8u;
    {
        const bool branch_taken_0x3391c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3391CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3391C8u;
        // 0x3391cc: 0xa2200009  sb          $zero, 0x9($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 9), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3391c8) {
            ctx->pc = 0x339220u;
            goto label_339220;
        }
    }
    ctx->pc = 0x3391D0u;
label_3391d0:
    // 0x3391d0: 0x92230008  lbu         $v1, 0x8($s1)
    ctx->pc = 0x3391d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3391d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3391d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3391d8: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3391D8u;
    {
        const bool branch_taken_0x3391d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3391d8) {
            ctx->pc = 0x339220u;
            goto label_339220;
        }
    }
    ctx->pc = 0x3391E0u;
    // 0x3391e0: 0x86230010  lh          $v1, 0x10($s1)
    ctx->pc = 0x3391e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3391e4: 0x86220012  lh          $v0, 0x12($s1)
    ctx->pc = 0x3391e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x3391e8: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x3391e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x3391ec: 0x50082a  slt         $at, $v0, $s0
    ctx->pc = 0x3391ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3391f0: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x3391F0u;
    {
        const bool branch_taken_0x3391f0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3391f0) {
            ctx->pc = 0x339220u;
            goto label_339220;
        }
    }
    ctx->pc = 0x3391F8u;
    // 0x3391f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3391f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3391fc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3391fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x339200: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x339200u;
    {
        const bool branch_taken_0x339200 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x339200) {
            ctx->pc = 0x339218u;
            goto label_339218;
        }
    }
    ctx->pc = 0x339208u;
    // 0x339208: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x339208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33920c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x33920cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339210: 0xc0ce3bc  jal         func_338EF0
    ctx->pc = 0x339210u;
    SET_GPR_U32(ctx, 31, 0x339218u);
    ctx->pc = 0x339214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339210u;
    // 0x339214: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338EF0u, 0x339210u, 0x339218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339218u;
label_339218:
    // 0x339218: 0xa2200009  sb          $zero, 0x9($s1)
    ctx->pc = 0x339218u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x33921c: 0x0  nop
    ctx->pc = 0x33921cu;
    // NOP
label_339220:
    // 0x339220: 0x2a610002  slti        $at, $s3, 0x2
    ctx->pc = 0x339220u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x339224: 0xae300014  sw          $s0, 0x14($s1)
    ctx->pc = 0x339224u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
    // 0x339228: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x339228u;
    {
        const bool branch_taken_0x339228 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x33922Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339228u;
        // 0x33922c: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339228) {
            ctx->pc = 0x339248u;
            goto label_339248;
        }
    }
    ctx->pc = 0x339230u;
    // 0x339230: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x339230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x339234: 0x9022ff62  lbu         $v0, -0x9E($at)
    ctx->pc = 0x339234u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x82FF62u));
    // 0x339238: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x339238u;
    {
        const bool branch_taken_0x339238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x339238) {
            ctx->pc = 0x339298u;
            goto label_339298;
        }
    }
    ctx->pc = 0x339240u;
    // 0x339240: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x339240u;
    {
        const bool branch_taken_0x339240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339240u;
        // 0x339244: 0x2410fc19  addiu       $s0, $zero, -0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966297));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339240) {
            ctx->pc = 0x339298u;
            goto label_339298;
        }
    }
    ctx->pc = 0x339248u;
label_339248:
    // 0x339248: 0x3c010091  lui         $at, 0x91
    ctx->pc = 0x339248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
    // 0x33924c: 0x902240a5  lbu         $v0, 0x40A5($at)
    ctx->pc = 0x33924cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x9140A5u));
    // 0x339250: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x339250u;
    {
        const bool branch_taken_0x339250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x339254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339250u;
        // 0x339254: 0x3c010091  lui         $at, 0x91 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)145 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339250) {
            ctx->pc = 0x339280u;
            goto label_339280;
        }
    }
    ctx->pc = 0x339258u;
    // 0x339258: 0x902240a4  lbu         $v0, 0x40A4($at)
    ctx->pc = 0x339258u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 16548)));
    // 0x33925c: 0x14530008  bne         $v0, $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x33925Cu;
    {
        const bool branch_taken_0x33925c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x33925c) {
            ctx->pc = 0x339280u;
            goto label_339280;
        }
    }
    ctx->pc = 0x339264u;
    // 0x339264: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x339264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x339268: 0x9022ff62  lbu         $v0, -0x9E($at)
    ctx->pc = 0x339268u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x82FF62u));
    // 0x33926c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x33926Cu;
    {
        const bool branch_taken_0x33926c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33926c) {
            ctx->pc = 0x339298u;
            goto label_339298;
        }
    }
    ctx->pc = 0x339274u;
    // 0x339274: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x339274u;
    {
        const bool branch_taken_0x339274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339274u;
        // 0x339278: 0x2410fc19  addiu       $s0, $zero, -0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966297));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339274) {
            ctx->pc = 0x339298u;
            goto label_339298;
        }
    }
    ctx->pc = 0x33927Cu;
    // 0x33927c: 0x0  nop
    ctx->pc = 0x33927cu;
    // NOP
label_339280:
    // 0x339280: 0x3c010083  lui         $at, 0x83
    ctx->pc = 0x339280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)131 << 16));
    // 0x339284: 0x9022ff61  lbu         $v0, -0x9F($at)
    ctx->pc = 0x339284u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x82FF61u));
    // 0x339288: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x339288u;
    {
        const bool branch_taken_0x339288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x339288) {
            ctx->pc = 0x339298u;
            goto label_339298;
        }
    }
    ctx->pc = 0x339290u;
    // 0x339290: 0x2410fc19  addiu       $s0, $zero, -0x3E7
    ctx->pc = 0x339290u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966297));
    // 0x339294: 0x0  nop
    ctx->pc = 0x339294u;
    // NOP
label_339298:
    // 0x339298: 0x3c040091  lui         $a0, 0x91
    ctx->pc = 0x339298u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)145 << 16));
    // 0x33929c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x33929cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3392a0: 0x24843fb0  addiu       $a0, $a0, 0x3FB0
    ctx->pc = 0x3392a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16304));
    // 0x3392a4: 0xc0ce34c  jal         func_338D30
    ctx->pc = 0x3392A4u;
    SET_GPR_U32(ctx, 31, 0x3392ACu);
    ctx->pc = 0x3392A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3392A4u;
    // 0x3392a8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338D30u, 0x3392A4u, 0x3392ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3392ACu;
label_3392ac:
    // 0x3392ac: 0xae360014  sw          $s6, 0x14($s1)
    ctx->pc = 0x3392acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 22));
    // 0x3392b0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3392b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3392b4: 0x10800056  beqz        $a0, . + 4 + (0x56 << 2)
    ctx->pc = 0x3392B4u;
    {
        const bool branch_taken_0x3392b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3392b4) {
            ctx->pc = 0x339410u;
            goto label_339410;
        }
    }
    ctx->pc = 0x3392BCu;
    // 0x3392bc: 0xc08e730  jal         func_239CC0
    ctx->pc = 0x3392BCu;
    SET_GPR_U32(ctx, 31, 0x3392C4u);
    ctx->pc = 0x239CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239CC0u, 0x3392BCu, 0x3392C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3392C4u;
label_3392c4:
    // 0x3392c4: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x3392C4u;
    {
        const bool branch_taken_0x3392c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3392C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3392C4u;
        // 0x3392c8: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3392c4) {
            ctx->pc = 0x339410u;
            goto label_339410;
        }
    }
    ctx->pc = 0x3392CCu;
    // 0x3392cc: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3392CCu;
    {
        const bool branch_taken_0x3392cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3392cc) {
            ctx->pc = 0x3392E0u;
            goto label_3392e0;
        }
    }
    ctx->pc = 0x3392D4u;
    // 0x3392d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3392D4u;
    {
        const bool branch_taken_0x3392d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3392d4) {
            ctx->pc = 0x3392F8u;
            goto label_3392f8;
        }
    }
    ctx->pc = 0x3392DCu;
    // 0x3392dc: 0x0  nop
    ctx->pc = 0x3392dcu;
    // NOP
label_3392e0:
    // 0x3392e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3392e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3392e4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3392e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3392e8: 0xc0ce3bc  jal         func_338EF0
    ctx->pc = 0x3392E8u;
    SET_GPR_U32(ctx, 31, 0x3392F0u);
    ctx->pc = 0x3392ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3392E8u;
    // 0x3392ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338EF0u, 0x3392E8u, 0x3392F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3392F0u;
label_3392f0:
    // 0x3392f0: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x3392F0u;
    {
        const bool branch_taken_0x3392f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3392f0) {
            ctx->pc = 0x339410u;
            goto label_339410;
        }
    }
    ctx->pc = 0x3392F8u;
label_3392f8:
    // 0x3392f8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3392f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3392fc: 0x14430044  bne         $v0, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x3392FCu;
    {
        const bool branch_taken_0x3392fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x339300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3392FCu;
        // 0x339300: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3392fc) {
            ctx->pc = 0x339410u;
            goto label_339410;
        }
    }
    ctx->pc = 0x339304u;
    // 0x339304: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x339304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x339308: 0x8c23cee4  lw          $v1, -0x311C($at)
    ctx->pc = 0x339308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954724)));
    // 0x33930c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x33930cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x339310: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x339310u;
    {
        const bool branch_taken_0x339310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x339314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339310u;
        // 0x339314: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339310) {
            ctx->pc = 0x339330u;
            goto label_339330;
        }
    }
    ctx->pc = 0x339318u;
    // 0x339318: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x339318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33931c: 0xc0ce3bc  jal         func_338EF0
    ctx->pc = 0x33931Cu;
    SET_GPR_U32(ctx, 31, 0x339324u);
    ctx->pc = 0x339320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33931Cu;
    // 0x339320: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338EF0u, 0x33931Cu, 0x339324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339324u;
label_339324:
    // 0x339324: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x339324u;
    {
        const bool branch_taken_0x339324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x339324) {
            ctx->pc = 0x339410u;
            goto label_339410;
        }
    }
    ctx->pc = 0x33932Cu;
    // 0x33932c: 0x0  nop
    ctx->pc = 0x33932cu;
    // NOP
label_339330:
    // 0x339330: 0x9222000a  lbu         $v0, 0xA($s1)
    ctx->pc = 0x339330u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x339334: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x339334u;
    {
        const bool branch_taken_0x339334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x339334) {
            ctx->pc = 0x339410u;
            goto label_339410;
        }
    }
    ctx->pc = 0x33933Cu;
    // 0x33933c: 0xc08eca6  jal         func_23B298
    ctx->pc = 0x33933Cu;
    SET_GPR_U32(ctx, 31, 0x339344u);
    ctx->pc = 0x339340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33933Cu;
    // 0x339340: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B298u, 0x33933Cu, 0x339344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339344u;
label_339344:
    // 0x339344: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x339344u;
    {
        const bool branch_taken_0x339344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x339344) {
            ctx->pc = 0x339350u;
            goto label_339350;
        }
    }
    ctx->pc = 0x33934Cu;
    // 0x33934c: 0xa220000a  sb          $zero, 0xA($s1)
    ctx->pc = 0x33934cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10), (uint8_t)GPR_U32(ctx, 0));
label_339350:
    // 0x339350: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x339350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x339354: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x339354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x339358: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x339358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x33935c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x33935cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x339360: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x339360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x339364: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x339364u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x339368: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x339368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x33936c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33936cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x339370: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x339370u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x339374: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x339374u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x339378: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x339378u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33937c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x33937Cu;
    {
        const bool branch_taken_0x33937c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x33937c) {
            ctx->pc = 0x339394u;
            goto label_339394;
        }
    }
    ctx->pc = 0x339384u;
    // 0x339384: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x339384u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x339388: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x339388u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x33938c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33938Cu;
    {
        const bool branch_taken_0x33938c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33938Cu;
        // 0x339390: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33938c) {
            ctx->pc = 0x3393B0u;
            goto label_3393b0;
        }
    }
    ctx->pc = 0x339394u;
label_339394:
    // 0x339394: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x339394u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x339398: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x339398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x33939c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33939cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3393a0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3393a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3393a4: 0x0  nop
    ctx->pc = 0x3393a4u;
    // NOP
    // 0x3393a8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3393a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3393ac: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3393acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3393b0:
    // 0x3393b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3393b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3393b4: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x3393b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3393b8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3393B8u;
    {
        const bool branch_taken_0x3393b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3393BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3393B8u;
        // 0x3393bc: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3393b8) {
            ctx->pc = 0x3393C8u;
            goto label_3393c8;
        }
    }
    ctx->pc = 0x3393C0u;
    // 0x3393c0: 0xa220000a  sb          $zero, 0xA($s1)
    ctx->pc = 0x3393c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x3393c4: 0x0  nop
    ctx->pc = 0x3393c4u;
    // NOP
label_3393c8:
    // 0x3393c8: 0xc08ec0a  jal         func_23B028
    ctx->pc = 0x3393C8u;
    SET_GPR_U32(ctx, 31, 0x3393D0u);
    ctx->pc = 0x3393CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3393C8u;
    // 0x3393cc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B028u, 0x3393C8u, 0x3393D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3393D0u;
label_3393d0:
    // 0x3393d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3393d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3393d4: 0x0  nop
    ctx->pc = 0x3393d4u;
    // NOP
    // 0x3393d8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3393d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3393dc: 0x3c02433b  lui         $v0, 0x433B
    ctx->pc = 0x3393dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17211 << 16));
    // 0x3393e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3393e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3393e4: 0x0  nop
    ctx->pc = 0x3393e4u;
    // NOP
    // 0x3393e8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x3393e8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3393ec: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x3393ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x3393f0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3393f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3393f4: 0x0  nop
    ctx->pc = 0x3393f4u;
    // NOP
    // 0x3393f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3393f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3393fc: 0x0  nop
    ctx->pc = 0x3393fcu;
    // NOP
    // 0x339400: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x339400u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x339404: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x339404u;
    {
        const bool branch_taken_0x339404 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x339404) {
            ctx->pc = 0x339410u;
            goto label_339410;
        }
    }
    ctx->pc = 0x33940Cu;
    // 0x33940c: 0xa220000a  sb          $zero, 0xA($s1)
    ctx->pc = 0x33940cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10), (uint8_t)GPR_U32(ctx, 0));
label_339410:
    // 0x339410: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x339410u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x339414: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x339414u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x339418: 0x1680ff51  bnez        $s4, . + 4 + (-0xAF << 2)
    ctx->pc = 0x339418u;
    {
        const bool branch_taken_0x339418 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x33941Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339418u;
        // 0x33941c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339418) {
            ctx->pc = 0x339160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_339160;
        }
    }
    ctx->pc = 0x339420u;
    // 0x339420: 0xc08d256  jal         func_234958
    ctx->pc = 0x339420u;
    SET_GPR_U32(ctx, 31, 0x339428u);
    ctx->pc = 0x339424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339420u;
    // 0x339424: 0xaeb200a0  sw          $s2, 0xA0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 160), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234958u, 0x339420u, 0x339428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339428u;
label_339428:
    // 0x339428: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x339428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x33942c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x33942cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x339430: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x339430u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x339434: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x339434u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x339438: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x339438u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33943c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33943cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x339440: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x339440u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x339444: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x339444u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x339448: 0x3e00008  jr          $ra
    ctx->pc = 0x339448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33944Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339448u;
        // 0x33944c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x339450u;
}
