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

// Function: sub_002F4190
// Address: 0x2f4190 - 0x2f42fc
void sub_002F4190_0x2f4190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4190_0x2f4190");
#endif

    switch (ctx->pc) {
        case 0x2f41c0u: goto label_2f41c0;
        case 0x2f41d0u: goto label_2f41d0;
        case 0x2f4218u: goto label_2f4218;
        case 0x2f4238u: goto label_2f4238;
        case 0x2f42a8u: goto label_2f42a8;
        default: break;
    }

    ctx->pc = 0x2f4190u;

    // 0x2f4190: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2f4190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2f4194: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2f4194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2f4198: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2f4198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2f419c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2f419cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2f41a0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2f41a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f41a4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f41a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2f41a8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2f41a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f41ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f41acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f41b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f41b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f41b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f41b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f41b8: 0xc0bcc08  jal         func_2F3020
    ctx->pc = 0x2F41B8u;
    SET_GPR_U32(ctx, 31, 0x2F41C0u);
    ctx->pc = 0x2F41BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F41B8u;
    // 0x2f41bc: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3020u, 0x2F41B8u, 0x2F41C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F41C0u;
label_2f41c0:
    // 0x2f41c0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2f41c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f41c4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2f41c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f41c8: 0xc0bcff4  jal         func_2F3FD0
    ctx->pc = 0x2F41C8u;
    SET_GPR_U32(ctx, 31, 0x2F41D0u);
    ctx->pc = 0x2F41CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F41C8u;
    // 0x2f41cc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3FD0u, 0x2F41C8u, 0x2F41D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F41D0u;
label_2f41d0:
    // 0x2f41d0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f41d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f41d4: 0x3943c  dsll32      $s2, $v1, 16
    ctx->pc = 0x2f41d4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2f41d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f41d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f41dc: 0x12620004  beq         $s3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F41DCu;
    {
        const bool branch_taken_0x2f41dc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F41E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F41DCu;
        // 0x2f41e0: 0x12943f  dsra32      $s2, $s2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f41dc) {
            ctx->pc = 0x2F41F0u;
            goto label_2f41f0;
        }
    }
    ctx->pc = 0x2F41E4u;
    // 0x2f41e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2f41e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f41e8: 0x16620007  bne         $s3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F41E8u;
    {
        const bool branch_taken_0x2f41e8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f41e8) {
            ctx->pc = 0x2F4208u;
            goto label_2f4208;
        }
    }
    ctx->pc = 0x2F41F0u;
label_2f41f0:
    // 0x2f41f0: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F41F0u;
    {
        const bool branch_taken_0x2f41f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f41f0) {
            ctx->pc = 0x2F4200u;
            goto label_2f4200;
        }
    }
    ctx->pc = 0x2F41F8u;
    // 0x2f41f8: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2F41F8u;
    {
        const bool branch_taken_0x2f41f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F41FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F41F8u;
        // 0x2f41fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f41f8) {
            ctx->pc = 0x2F42D8u;
            goto label_2f42d8;
        }
    }
    ctx->pc = 0x2F4200u;
label_2f4200:
    // 0x2f4200: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2F4200u;
    {
        const bool branch_taken_0x2f4200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4200u;
        // 0x2f4204: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4200) {
            ctx->pc = 0x2F42D8u;
            goto label_2f42d8;
        }
    }
    ctx->pc = 0x2F4208u;
label_2f4208:
    // 0x2f4208: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2f4208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f420c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f420cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4210: 0xc0bcdd4  jal         func_2F3750
    ctx->pc = 0x2F4210u;
    SET_GPR_U32(ctx, 31, 0x2F4218u);
    ctx->pc = 0x2F4214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4210u;
    // 0x2f4214: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3750u, 0x2F4210u, 0x2F4218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4218u;
label_2f4218:
    // 0x2f4218: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x2f4218u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2f421c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F421Cu;
    {
        const bool branch_taken_0x2f421c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F421Cu;
        // 0x2f4220: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f421c) {
            ctx->pc = 0x2F4230u;
            goto label_2f4230;
        }
    }
    ctx->pc = 0x2F4224u;
    // 0x2f4224: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2F4224u;
    {
        const bool branch_taken_0x2f4224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4224u;
        // 0x2f4228: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4224) {
            ctx->pc = 0x2F42D8u;
            goto label_2f42d8;
        }
    }
    ctx->pc = 0x2F422Cu;
    // 0x2f422c: 0x0  nop
    ctx->pc = 0x2f422cu;
    // NOP
label_2f4230:
    // 0x2f4230: 0xc0d23ec  jal         func_348FB0
    ctx->pc = 0x2F4230u;
    SET_GPR_U32(ctx, 31, 0x2F4238u);
    ctx->pc = 0x2F4234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4230u;
    // 0x2f4234: 0x3284ffff  andi        $a0, $s4, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x348FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348FB0u, 0x2F4230u, 0x2F4238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4238u;
label_2f4238:
    // 0x2f4238: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F4238u;
    {
        const bool branch_taken_0x2f4238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4238) {
            ctx->pc = 0x2F4248u;
            goto label_2f4248;
        }
    }
    ctx->pc = 0x2F4240u;
    // 0x2f4240: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F4240u;
    {
        const bool branch_taken_0x2f4240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4240u;
        // 0x2f4244: 0x9042000c  lbu         $v0, 0xC($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4240) {
            ctx->pc = 0x2F424Cu;
            goto label_2f424c;
        }
    }
    ctx->pc = 0x2F4248u;
label_2f4248:
    // 0x2f4248: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x2f4248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_2f424c:
    // 0x2f424c: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x2f424cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f4250: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x2f4250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
    // 0x2f4254: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2f4254u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2f4258: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x2f4258u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2f425c: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x2f425cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x2f4260: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F4260u;
    {
        const bool branch_taken_0x2f4260 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4260) {
            ctx->pc = 0x2F426Cu;
            goto label_2f426c;
        }
    }
    ctx->pc = 0x2F4268u;
    // 0x2f4268: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f4268u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f426c:
    // 0x2f426c: 0x1660000a  bnez        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x2F426Cu;
    {
        const bool branch_taken_0x2f426c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F426Cu;
        // 0x2f4270: 0x3052ffff  andi        $s2, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f426c) {
            ctx->pc = 0x2F4298u;
            goto label_2f4298;
        }
    }
    ctx->pc = 0x2F4274u;
    // 0x2f4274: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x2f4274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x2f4278: 0x3242ffff  andi        $v0, $s2, 0xFFFF
    ctx->pc = 0x2f4278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x2f427c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2f427cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2f4280: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x2f4280u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f4284: 0x41180a  movz        $v1, $v0, $at
    ctx->pc = 0x2f4284u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x2f4288: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x2f4288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2f428c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2F428Cu;
    {
        const bool branch_taken_0x2f428c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F428Cu;
        // 0x2f4290: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f428c) {
            ctx->pc = 0x2F42D8u;
            goto label_2f42d8;
        }
    }
    ctx->pc = 0x2F4294u;
    // 0x2f4294: 0x0  nop
    ctx->pc = 0x2f4294u;
    // NOP
label_2f4298:
    // 0x2f4298: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2f4298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f429c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2f429cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f42a0: 0xc0bce00  jal         func_2F3800
    ctx->pc = 0x2F42A0u;
    SET_GPR_U32(ctx, 31, 0x2F42A8u);
    ctx->pc = 0x2F42A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F42A0u;
    // 0x2f42a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3800u, 0x2F42A0u, 0x2F42A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F42A8u;
label_2f42a8:
    // 0x2f42a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F42A8u;
    {
        const bool branch_taken_0x2f42a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f42a8) {
            ctx->pc = 0x2F42C0u;
            goto label_2f42c0;
        }
    }
    ctx->pc = 0x2F42B0u;
    // 0x2f42b0: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x2f42b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
    // 0x2f42b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F42B4u;
    {
        const bool branch_taken_0x2f42b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F42B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F42B4u;
        // 0x2f42b8: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f42b4) {
            ctx->pc = 0x2F42D8u;
            goto label_2f42d8;
        }
    }
    ctx->pc = 0x2F42BCu;
    // 0x2f42bc: 0x0  nop
    ctx->pc = 0x2f42bcu;
    // NOP
label_2f42c0:
    // 0x2f42c0: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F42C0u;
    {
        const bool branch_taken_0x2f42c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F42C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F42C0u;
        // 0x2f42c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f42c0) {
            ctx->pc = 0x2F42D8u;
            goto label_2f42d8;
        }
    }
    ctx->pc = 0x2F42C8u;
    // 0x2f42c8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2f42c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2f42cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F42CCu;
    {
        const bool branch_taken_0x2f42cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F42D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F42CCu;
        // 0x2f42d0: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f42cc) {
            ctx->pc = 0x2F42D8u;
            goto label_2f42d8;
        }
    }
    ctx->pc = 0x2F42D4u;
    // 0x2f42d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f42d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f42d8:
    // 0x2f42d8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2f42d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f42dc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2f42dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f42e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2f42e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f42e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f42e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f42e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f42e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f42ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f42ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f42f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f42f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f42f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F42F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F42F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F42F4u;
        // 0x2f42f8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F42F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F42FCu;
}
