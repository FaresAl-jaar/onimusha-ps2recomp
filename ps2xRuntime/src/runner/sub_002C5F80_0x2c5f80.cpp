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

// Function: sub_002C5F80
// Address: 0x2c5f80 - 0x2c62e0
void sub_002C5F80_0x2c5f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5F80_0x2c5f80");
#endif

    switch (ctx->pc) {
        case 0x2c6028u: goto label_2c6028;
        case 0x2c6040u: goto label_2c6040;
        case 0x2c6060u: goto label_2c6060;
        case 0x2c6084u: goto label_2c6084;
        case 0x2c60a8u: goto label_2c60a8;
        case 0x2c60b4u: goto label_2c60b4;
        default: break;
    }

    ctx->pc = 0x2c5f80u;

    // 0x2c5f80: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2c5f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2c5f84: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c5f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c5f88: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2c5f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2c5f8c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2c5f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2c5f90: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2c5f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2c5f94: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c5f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c5f98: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2c5f98u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5f9c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c5f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c5fa0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2c5fa0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5fa4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c5fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c5fa8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2c5fa8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5fac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c5facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c5fb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c5fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c5fb4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c5fb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5fb8: 0x84b600c2  lh          $s6, 0xC2($a1)
    ctx->pc = 0x2c5fb8u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 194)));
    // 0x2c5fbc: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x2c5fbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2c5fc0: 0x80c50002  lb          $a1, 0x2($a2)
    ctx->pc = 0x2c5fc0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2c5fc4: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x2c5fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x2c5fc8: 0x52903  sra         $a1, $a1, 4
    ctx->pc = 0x2c5fc8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
    // 0x2c5fcc: 0x5943c  dsll32      $s2, $a1, 16
    ctx->pc = 0x2c5fccu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2c5fd0: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2C5FD0u;
    {
        const bool branch_taken_0x2c5fd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C5FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5FD0u;
        // 0x2c5fd4: 0x12943f  dsra32      $s2, $s2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5fd0) {
            ctx->pc = 0x2C6058u;
            goto label_2c6058;
        }
    }
    ctx->pc = 0x2C5FD8u;
    // 0x2c5fd8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2c5fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c5fdc: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C5FDCu;
    {
        const bool branch_taken_0x2c5fdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c5fdc) {
            ctx->pc = 0x2C6038u;
            goto label_2c6038;
        }
    }
    ctx->pc = 0x2C5FE4u;
    // 0x2c5fe4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2c5fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c5fe8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C5FE8u;
    {
        const bool branch_taken_0x2c5fe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c5fe8) {
            ctx->pc = 0x2C6008u;
            goto label_2c6008;
        }
    }
    ctx->pc = 0x2C5FF0u;
    // 0x2c5ff0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c5ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5ff4: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C5FF4u;
    {
        const bool branch_taken_0x2c5ff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c5ff4) {
            ctx->pc = 0x2C6000u;
            goto label_2c6000;
        }
    }
    ctx->pc = 0x2C5FFCu;
    // 0x2c5ffc: 0x0  nop
    ctx->pc = 0x2c5ffcu;
    // NOP
label_2c6000:
    // 0x2c6000: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2C6000u;
    {
        const bool branch_taken_0x2c6000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6000u;
        // 0x2c6004: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6000) {
            ctx->pc = 0x2C6070u;
            goto label_2c6070;
        }
    }
    ctx->pc = 0x2C6008u;
label_2c6008:
    // 0x2c6008: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c6008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c600c: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x2c600cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2c6010: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2c6010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2c6014: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c6014u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c6018: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c6018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c601c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2c601cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c6020: 0xc0b2214  jal         func_2C8850
    ctx->pc = 0x2C6020u;
    SET_GPR_U32(ctx, 31, 0x2C6028u);
    ctx->pc = 0x2C6024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6020u;
    // 0x2c6024: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8850u, 0x2C6020u, 0x2C6028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6028u;
label_2c6028:
    // 0x2c6028: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C6028u;
    {
        const bool branch_taken_0x2c6028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6028) {
            ctx->pc = 0x2C6070u;
            goto label_2c6070;
        }
    }
    ctx->pc = 0x2C6030u;
    // 0x2c6030: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2C6030u;
    {
        const bool branch_taken_0x2c6030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6030u;
        // 0x2c6034: 0x26110020  addiu       $s1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6030) {
            ctx->pc = 0x2C6070u;
            goto label_2c6070;
        }
    }
    ctx->pc = 0x2C6038u;
label_2c6038:
    // 0x2c6038: 0xc0b221c  jal         func_2C8870
    ctx->pc = 0x2C6038u;
    SET_GPR_U32(ctx, 31, 0x2C6040u);
    ctx->pc = 0x2C603Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6038u;
    // 0x2c603c: 0x8e850088  lw          $a1, 0x88($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8870u, 0x2C6038u, 0x2C6040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6040u;
label_2c6040:
    // 0x2c6040: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c6040u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6044: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C6044u;
    {
        const bool branch_taken_0x2c6044 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6044) {
            ctx->pc = 0x2C6070u;
            goto label_2c6070;
        }
    }
    ctx->pc = 0x2C604Cu;
    // 0x2c604c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C604Cu;
    {
        const bool branch_taken_0x2c604c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C604Cu;
        // 0x2c6050: 0x26110020  addiu       $s1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c604c) {
            ctx->pc = 0x2C6070u;
            goto label_2c6070;
        }
    }
    ctx->pc = 0x2C6054u;
    // 0x2c6054: 0x0  nop
    ctx->pc = 0x2c6054u;
    // NOP
label_2c6058:
    // 0x2c6058: 0xc0b221c  jal         func_2C8870
    ctx->pc = 0x2C6058u;
    SET_GPR_U32(ctx, 31, 0x2C6060u);
    ctx->pc = 0x2C605Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6058u;
    // 0x2c605c: 0x8e850090  lw          $a1, 0x90($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8870u, 0x2C6058u, 0x2C6060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6060u;
label_2c6060:
    // 0x2c6060: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c6060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6064: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C6064u;
    {
        const bool branch_taken_0x2c6064 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6064) {
            ctx->pc = 0x2C6070u;
            goto label_2c6070;
        }
    }
    ctx->pc = 0x2C606Cu;
    // 0x2c606c: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x2c606cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_2c6070:
    // 0x2c6070: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C6070u;
    {
        const bool branch_taken_0x2c6070 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c6070) {
            ctx->pc = 0x2C6090u;
            goto label_2c6090;
        }
    }
    ctx->pc = 0x2C6078u;
    // 0x2c6078: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c6078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c607c: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C607Cu;
    SET_GPR_U32(ctx, 31, 0x2C6084u);
    ctx->pc = 0x2C6080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C607Cu;
    // 0x2c6080: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C607Cu, 0x2C6084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6084u;
label_2c6084:
    // 0x2c6084: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x2C6084u;
    {
        const bool branch_taken_0x2c6084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6084u;
        // 0x2c6088: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6084) {
            ctx->pc = 0x2C62B8u;
            goto label_2c62b8;
        }
    }
    ctx->pc = 0x2C608Cu;
    // 0x2c608c: 0x0  nop
    ctx->pc = 0x2c608cu;
    // NOP
label_2c6090:
    // 0x2c6090: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2C6090u;
    {
        const bool branch_taken_0x2c6090 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6090) {
            ctx->pc = 0x2C60E8u;
            goto label_2c60e8;
        }
    }
    ctx->pc = 0x2C6098u;
    // 0x2c6098: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c6098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c609c: 0x26a60020  addiu       $a2, $s5, 0x20
    ctx->pc = 0x2c609cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x2c60a0: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2C60A0u;
    SET_GPR_U32(ctx, 31, 0x2C60A8u);
    ctx->pc = 0x2C60A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C60A0u;
    // 0x2c60a4: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2C60A0u, 0x2C60A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C60A8u;
label_2c60a8:
    // 0x2c60a8: 0xc7ad0088  lwc1        $f13, 0x88($sp)
    ctx->pc = 0x2c60a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2c60ac: 0xc047b88  jal         func_11EE20
    ctx->pc = 0x2C60ACu;
    SET_GPR_U32(ctx, 31, 0x2C60B4u);
    ctx->pc = 0x2C60B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C60ACu;
    // 0x2c60b0: 0xc7ac0080  lwc1        $f12, 0x80($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x2C60ACu, 0x2C60B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C60B4u;
label_2c60b4:
    // 0x2c60b4: 0x3c024422  lui         $v0, 0x4422
    ctx->pc = 0x2c60b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17442 << 16));
    // 0x2c60b8: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x2c60b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
    // 0x2c60bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c60bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c60c0: 0x0  nop
    ctx->pc = 0x2c60c0u;
    // NOP
    // 0x2c60c4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c60c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c60c8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c60c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2c60cc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2c60ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2c60d0: 0x0  nop
    ctx->pc = 0x2c60d0u;
    // NOP
    // 0x2c60d4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2c60d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c60d8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c60d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c60dc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2c60dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2c60e0: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x2c60e0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c60e4: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x2c60e4u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
label_2c60e8:
    // 0x2c60e8: 0x92640003  lbu         $a0, 0x3($s3)
    ctx->pc = 0x2c60e8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x2c60ec: 0x16143c  dsll32      $v0, $s6, 16
    ctx->pc = 0x2c60ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 16));
    // 0x2c60f0: 0x121c3c  dsll32      $v1, $s2, 16
    ctx->pc = 0x2c60f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 16));
    // 0x2c60f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c60f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c60f8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c60f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c60fc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2c60fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c6100: 0x41200  sll         $v0, $a0, 8
    ctx->pc = 0x2c6100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x2c6104: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2c6104u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x2c6108: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C6108u;
    {
        const bool branch_taken_0x2c6108 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x2C610Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6108u;
        // 0x2c610c: 0xa6820084  sh          $v0, 0x84($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 132), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6108) {
            ctx->pc = 0x2C6114u;
            goto label_2c6114;
        }
    }
    ctx->pc = 0x2C6110u;
    // 0x2c6110: 0x31823  negu        $v1, $v1
    ctx->pc = 0x2c6110u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_2c6114:
    // 0x2c6114: 0x86820084  lh          $v0, 0x84($s4)
    ctx->pc = 0x2c6114u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 132)));
    // 0x2c6118: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x2c6118u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c611c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C611Cu;
    {
        const bool branch_taken_0x2c611c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c611c) {
            ctx->pc = 0x2C6138u;
            goto label_2c6138;
        }
    }
    ctx->pc = 0x2C6124u;
    // 0x2c6124: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c6124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6128: 0x26620006  addiu       $v0, $s3, 0x6
    ctx->pc = 0x2c6128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 6));
    // 0x2c612c: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x2C612Cu;
    {
        const bool branch_taken_0x2c612c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C612Cu;
        // 0x2c6130: 0xa38389d4  sb          $v1, -0x762C($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294937044), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c612c) {
            ctx->pc = 0x2C62B8u;
            goto label_2c62b8;
        }
    }
    ctx->pc = 0x2C6134u;
    // 0x2c6134: 0x0  nop
    ctx->pc = 0x2c6134u;
    // NOP
label_2c6138:
    // 0x2c6138: 0xa6920086  sh          $s2, 0x86($s4)
    ctx->pc = 0x2c6138u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 134), (uint16_t)GPR_U32(ctx, 18));
    // 0x2c613c: 0x96640004  lhu         $a0, 0x4($s3)
    ctx->pc = 0x2c613cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2c6140: 0x10800029  beqz        $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2C6140u;
    {
        const bool branch_taken_0x2c6140 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6140u;
        // 0x2c6144: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6140) {
            ctx->pc = 0x2C61E8u;
            goto label_2c61e8;
        }
    }
    ctx->pc = 0x2C6148u;
    // 0x2c6148: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x2c6148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2c614c: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C614Cu;
    {
        const bool branch_taken_0x2c614c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2C6150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C614Cu;
        // 0x2c6150: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c614c) {
            ctx->pc = 0x2C6164u;
            goto label_2c6164;
        }
    }
    ctx->pc = 0x2C6154u;
    // 0x2c6154: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c6154u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6158: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C6158u;
    {
        const bool branch_taken_0x2c6158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C615Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6158u;
        // 0x2c615c: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6158) {
            ctx->pc = 0x2C617Cu;
            goto label_2c617c;
        }
    }
    ctx->pc = 0x2C6160u;
    // 0x2c6160: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2c6160u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_2c6164:
    // 0x2c6164: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c6164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c6168: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2c6168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2c616c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c616cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6170: 0x0  nop
    ctx->pc = 0x2c6170u;
    // NOP
    // 0x2c6174: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2c6174u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2c6178: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2c6178u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2c617c:
    // 0x2c617c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2c617cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c6180: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2c6180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2c6184: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2c6184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2c6188: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2c6188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2c618c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c618cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c6190: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c6190u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6194: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2c6194u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2c6198: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2c6198u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2c619c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2c619cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c61a0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2C61A0u;
    {
        const bool branch_taken_0x2c61a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c61a0) {
            ctx->pc = 0x2C61B8u;
            goto label_2c61b8;
        }
    }
    ctx->pc = 0x2C61A8u;
    // 0x2c61a8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c61a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2c61ac: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2c61acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2c61b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C61B0u;
    {
        const bool branch_taken_0x2c61b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C61B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C61B0u;
        // 0x2c61b4: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c61b0) {
            ctx->pc = 0x2C61D4u;
            goto label_2c61d4;
        }
    }
    ctx->pc = 0x2C61B8u;
label_2c61b8:
    // 0x2c61b8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2c61b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c61bc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2c61bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2c61c0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c61c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2c61c4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2c61c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2c61c8: 0x0  nop
    ctx->pc = 0x2c61c8u;
    // NOP
    // 0x2c61cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2c61ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2c61d0: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x2c61d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2c61d4:
    // 0x2c61d4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c61d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2c61d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C61D8u;
    {
        const bool branch_taken_0x2c61d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c61d8) {
            ctx->pc = 0x2C61E8u;
            goto label_2c61e8;
        }
    }
    ctx->pc = 0x2C61E0u;
    // 0x2c61e0: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x2c61e0u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x2c61e4: 0x0  nop
    ctx->pc = 0x2c61e4u;
    // NOP
label_2c61e8:
    // 0x2c61e8: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C61E8u;
    {
        const bool branch_taken_0x2c61e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C61ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C61E8u;
        // 0x2c61ec: 0x3082ffff  andi        $v0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c61e8) {
            ctx->pc = 0x2C61FCu;
            goto label_2c61fc;
        }
    }
    ctx->pc = 0x2C61F0u;
    // 0x2c61f0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2C61F0u;
    {
        const bool branch_taken_0x2c61f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C61F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C61F0u;
        // 0x2c61f4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c61f0) {
            ctx->pc = 0x2C6280u;
            goto label_2c6280;
        }
    }
    ctx->pc = 0x2C61F8u;
    // 0x2c61f8: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x2c61f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_2c61fc:
    // 0x2c61fc: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C61FCu;
    {
        const bool branch_taken_0x2c61fc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2C6200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C61FCu;
        // 0x2c6200: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c61fc) {
            ctx->pc = 0x2C6214u;
            goto label_2c6214;
        }
    }
    ctx->pc = 0x2C6204u;
    // 0x2c6204: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c6204u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6208: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C6208u;
    {
        const bool branch_taken_0x2c6208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C620Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6208u;
        // 0x2c620c: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6208) {
            ctx->pc = 0x2C622Cu;
            goto label_2c622c;
        }
    }
    ctx->pc = 0x2C6210u;
    // 0x2c6210: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2c6210u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_2c6214:
    // 0x2c6214: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c6214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c6218: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2c6218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2c621c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c621cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6220: 0x0  nop
    ctx->pc = 0x2c6220u;
    // NOP
    // 0x2c6224: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2c6224u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2c6228: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2c6228u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2c622c:
    // 0x2c622c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x2c622cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c6230: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x2c6230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x2c6234: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x2c6234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x2c6238: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2c6238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2c623c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c623cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c6240: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c6240u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6244: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x2c6244u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2c6248: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2c6248u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2c624c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2c624cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6250: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2C6250u;
    {
        const bool branch_taken_0x2c6250 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c6250) {
            ctx->pc = 0x2C6268u;
            goto label_2c6268;
        }
    }
    ctx->pc = 0x2C6258u;
    // 0x2c6258: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c6258u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2c625c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2c625cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2c6260: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C6260u;
    {
        const bool branch_taken_0x2c6260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6260) {
            ctx->pc = 0x2C6280u;
            goto label_2c6280;
        }
    }
    ctx->pc = 0x2C6268u;
label_2c6268:
    // 0x2c6268: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2c6268u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c626c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2c626cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2c6270: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c6270u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2c6274: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2c6274u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2c6278: 0x0  nop
    ctx->pc = 0x2c6278u;
    // NOP
    // 0x2c627c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2c627cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2c6280:
    // 0x2c6280: 0xa6830022  sh          $v1, 0x22($s4)
    ctx->pc = 0x2c6280u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c6284: 0x26620006  addiu       $v0, $s3, 0x6
    ctx->pc = 0x2c6284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 6));
    // 0x2c6288: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x2c6288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x2c628c: 0xae82002c  sw          $v0, 0x2C($s4)
    ctx->pc = 0x2c628cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 2));
    // 0x2c6290: 0x246351a0  addiu       $v1, $v1, 0x51A0
    ctx->pc = 0x2c6290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20896));
    // 0x2c6294: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c6294u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6298: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2c6298u;
    { uint32_t bits = FAST_READ32(0x4E51A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c629c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2c629cu;
    { uint32_t bits = FAST_READ32(0x4E51A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c62a0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2c62a0u;
    { uint32_t bits = FAST_READ32(0x4E51A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c62a4: 0xe6820008  swc1        $f2, 0x8($s4)
    ctx->pc = 0x2c62a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x2c62a8: 0xe681000c  swc1        $f1, 0xC($s4)
    ctx->pc = 0x2c62a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x2c62ac: 0xe6800010  swc1        $f0, 0x10($s4)
    ctx->pc = 0x2c62acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 16), bits); }
    // 0x2c62b0: 0xa2800046  sb          $zero, 0x46($s4)
    ctx->pc = 0x2c62b0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 70), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c62b4: 0x0  nop
    ctx->pc = 0x2c62b4u;
    // NOP
label_2c62b8:
    // 0x2c62b8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2c62b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c62bc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2c62bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c62c0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2c62c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c62c4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c62c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c62c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c62c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c62cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c62ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c62d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c62d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c62d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c62d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c62d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C62D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C62DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C62D8u;
        // 0x2c62dc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C62D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C62E0u;
}
