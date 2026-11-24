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

// Function: sub_002C4110
// Address: 0x2c4110 - 0x2c42e0
void sub_002C4110_0x2c4110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4110_0x2c4110");
#endif

    switch (ctx->pc) {
        case 0x2c41d0u: goto label_2c41d0;
        case 0x2c41f0u: goto label_2c41f0;
        case 0x2c4294u: goto label_2c4294;
        default: break;
    }

    ctx->pc = 0x2c4110u;

    // 0x2c4110: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c4110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c4114: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2c4114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2c4118: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2c4118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2c411c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c411cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c4120: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c4120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c4124: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2c4124u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4128: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c4128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c412c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2c412cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4130: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c4130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c4134: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2c4134u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4138: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c4138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c413c: 0x90c30002  lbu         $v1, 0x2($a2)
    ctx->pc = 0x2c413cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2c4140: 0x3063007f  andi        $v1, $v1, 0x7F
    ctx->pc = 0x2c4140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x2c4144: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2C4144u;
    {
        const bool branch_taken_0x2c4144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C4148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4144u;
        // 0x2c4148: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4144) {
            ctx->pc = 0x2C41D8u;
            goto label_2c41d8;
        }
    }
    ctx->pc = 0x2C414Cu;
    // 0x2c414c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2c414cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2c4150: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2C4150u;
    {
        const bool branch_taken_0x2c4150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C4154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4150u;
        // 0x2c4154: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4150) {
            ctx->pc = 0x2C41C0u;
            goto label_2c41c0;
        }
    }
    ctx->pc = 0x2C4158u;
    // 0x2c4158: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C4158u;
    {
        const bool branch_taken_0x2c4158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c4158) {
            ctx->pc = 0x2C41A0u;
            goto label_2c41a0;
        }
    }
    ctx->pc = 0x2C4160u;
    // 0x2c4160: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2c4160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2c4164: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C4164u;
    {
        const bool branch_taken_0x2c4164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C4168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4164u;
        // 0x2c4168: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4164) {
            ctx->pc = 0x2C4180u;
            goto label_2c4180;
        }
    }
    ctx->pc = 0x2C416Cu;
    // 0x2c416c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C416Cu;
    {
        const bool branch_taken_0x2c416c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c416c) {
            ctx->pc = 0x2C4180u;
            goto label_2c4180;
        }
    }
    ctx->pc = 0x2C4174u;
    // 0x2c4174: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2C4174u;
    {
        const bool branch_taken_0x2c4174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4174) {
            ctx->pc = 0x2C41E0u;
            goto label_2c41e0;
        }
    }
    ctx->pc = 0x2C417Cu;
    // 0x2c417c: 0x0  nop
    ctx->pc = 0x2c417cu;
    // NOP
label_2c4180:
    // 0x2c4180: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c4180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c4184: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x2c4184u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2c4188: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2c4188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2c418c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c418cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c4190: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c4190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c4194: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2C4194u;
    {
        const bool branch_taken_0x2c4194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4194u;
        // 0x2c4198: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4194) {
            ctx->pc = 0x2C41E0u;
            goto label_2c41e0;
        }
    }
    ctx->pc = 0x2C419Cu;
    // 0x2c419c: 0x0  nop
    ctx->pc = 0x2c419cu;
    // NOP
label_2c41a0:
    // 0x2c41a0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c41a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c41a4: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x2c41a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2c41a8: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2c41a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2c41ac: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2c41acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2c41b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c41b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c41b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c41b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c41b8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C41B8u;
    {
        const bool branch_taken_0x2c41b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C41BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C41B8u;
        // 0x2c41bc: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c41b8) {
            ctx->pc = 0x2C41E0u;
            goto label_2c41e0;
        }
    }
    ctx->pc = 0x2C41C0u;
label_2c41c0:
    // 0x2c41c0: 0x8e850088  lw          $a1, 0x88($s4)
    ctx->pc = 0x2c41c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x2c41c4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2c41c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2c41c8: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2C41C8u;
    SET_GPR_U32(ctx, 31, 0x2C41D0u);
    ctx->pc = 0x2C41CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C41C8u;
    // 0x2c41cc: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2C41C8u, 0x2C41D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C41D0u;
label_2c41d0:
    // 0x2c41d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C41D0u;
    {
        const bool branch_taken_0x2c41d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C41D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C41D0u;
        // 0x2c41d4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c41d0) {
            ctx->pc = 0x2C41E0u;
            goto label_2c41e0;
        }
    }
    ctx->pc = 0x2C41D8u;
label_2c41d8:
    // 0x2c41d8: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x2c41d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c41dc: 0x0  nop
    ctx->pc = 0x2c41dcu;
    // NOP
label_2c41e0:
    // 0x2c41e0: 0x92500001  lbu         $s0, 0x1($s2)
    ctx->pc = 0x2c41e0u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x2c41e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c41e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c41e8: 0xc0b2214  jal         func_2C8850
    ctx->pc = 0x2C41E8u;
    SET_GPR_U32(ctx, 31, 0x2C41F0u);
    ctx->pc = 0x2C41ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C41E8u;
    // 0x2c41ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8850u, 0x2C41E8u, 0x2C41F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C41F0u;
label_2c41f0:
    // 0x2c41f0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C41F0u;
    {
        const bool branch_taken_0x2c41f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c41f0) {
            ctx->pc = 0x2C4238u;
            goto label_2c4238;
        }
    }
    ctx->pc = 0x2C41F8u;
    // 0x2c41f8: 0x92250002  lbu         $a1, 0x2($s1)
    ctx->pc = 0x2c41f8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2c41fc: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2c41fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2c4200: 0x24630b9a  addiu       $v1, $v1, 0xB9A
    ctx->pc = 0x2c4200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2970));
    // 0x2c4204: 0x92460003  lbu         $a2, 0x3($s2)
    ctx->pc = 0x2c4204u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x2c4208: 0x92420004  lbu         $v0, 0x4($s2)
    ctx->pc = 0x2c4208u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2c420c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x2c420cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2c4210: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x2c4210u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2c4214: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2c4214u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2c4218: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2c4218u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2c421c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c421cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c4220: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2c4220u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c4224: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x2c4224u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2c4228: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x2c4228u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c422c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C422Cu;
    {
        const bool branch_taken_0x2c422c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c422c) {
            ctx->pc = 0x2C4238u;
            goto label_2c4238;
        }
    }
    ctx->pc = 0x2C4234u;
    // 0x2c4234: 0x3a100001  xori        $s0, $s0, 0x1
    ctx->pc = 0x2c4234u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
label_2c4238:
    // 0x2c4238: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2C4238u;
    {
        const bool branch_taken_0x2c4238 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4238) {
            ctx->pc = 0x2C42B8u;
            goto label_2c42b8;
        }
    }
    ctx->pc = 0x2C4240u;
    // 0x2c4240: 0x938289d0  lbu         $v0, -0x7630($gp)
    ctx->pc = 0x2c4240u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2c4244: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C4244u;
    {
        const bool branch_taken_0x2c4244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4244u;
        // 0x2c4248: 0x92450005  lbu         $a1, 0x5($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4244) {
            ctx->pc = 0x2C42A0u;
            goto label_2c42a0;
        }
    }
    ctx->pc = 0x2C424Cu;
    // 0x2c424c: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x2C424Cu;
    {
        const bool branch_taken_0x2c424c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C424Cu;
        // 0x2c4250: 0xa280004f  sb          $zero, 0x4F($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c424c) {
            ctx->pc = 0x2C4288u;
            goto label_2c4288;
        }
    }
    ctx->pc = 0x2C4254u;
    // 0x2c4254: 0x92840037  lbu         $a0, 0x37($s4)
    ctx->pc = 0x2c4254u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 55)));
    // 0x2c4258: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2c4258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2c425c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c425cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c4260: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c4260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c4264: 0xa284004e  sb          $a0, 0x4E($s4)
    ctx->pc = 0x2c4264u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 78), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c4268: 0xa2850037  sb          $a1, 0x37($s4)
    ctx->pc = 0x2c4268u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 55), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c426c: 0xa2800032  sb          $zero, 0x32($s4)
    ctx->pc = 0x2c426cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c4270: 0xa283005f  sb          $v1, 0x5F($s4)
    ctx->pc = 0x2c4270u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c4274: 0xa6800080  sh          $zero, 0x80($s4)
    ctx->pc = 0x2c4274u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c4278: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2c4278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c427c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c427cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c4280: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C4280u;
    {
        const bool branch_taken_0x2c4280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4280u;
        // 0x2c4284: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4280) {
            ctx->pc = 0x2C42B0u;
            goto label_2c42b0;
        }
    }
    ctx->pc = 0x2C4288u;
label_2c4288:
    // 0x2c4288: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c4288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c428c: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C428Cu;
    SET_GPR_U32(ctx, 31, 0x2C4294u);
    ctx->pc = 0x2C4290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C428Cu;
    // 0x2c4290: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C428Cu, 0x2C4294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4294u;
label_2c4294:
    // 0x2c4294: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C4294u;
    {
        const bool branch_taken_0x2c4294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4294) {
            ctx->pc = 0x2C42A8u;
            goto label_2c42a8;
        }
    }
    ctx->pc = 0x2C429Cu;
    // 0x2c429c: 0x0  nop
    ctx->pc = 0x2c429cu;
    // NOP
label_2c42a0:
    // 0x2c42a0: 0xa38589d8  sb          $a1, -0x7628($gp)
    ctx->pc = 0x2c42a0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c42a4: 0x0  nop
    ctx->pc = 0x2c42a4u;
    // NOP
label_2c42a8:
    // 0x2c42a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c42a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c42ac: 0x0  nop
    ctx->pc = 0x2c42acu;
    // NOP
label_2c42b0:
    // 0x2c42b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C42B0u;
    {
        const bool branch_taken_0x2c42b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c42b0) {
            ctx->pc = 0x2C42C0u;
            goto label_2c42c0;
        }
    }
    ctx->pc = 0x2C42B8u;
label_2c42b8:
    // 0x2c42b8: 0x26420006  addiu       $v0, $s2, 0x6
    ctx->pc = 0x2c42b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 6));
    // 0x2c42bc: 0x0  nop
    ctx->pc = 0x2c42bcu;
    // NOP
label_2c42c0:
    // 0x2c42c0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2c42c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c42c4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c42c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c42c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c42c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c42cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c42ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c42d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c42d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c42d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c42d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c42d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C42D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C42DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C42D8u;
        // 0x2c42dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C42D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C42E0u;
}
