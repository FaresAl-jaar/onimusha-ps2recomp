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

// Function: sub_002C0E20
// Address: 0x2c0e20 - 0x2c10a4
void sub_002C0E20_0x2c0e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0E20_0x2c0e20");
#endif

    switch (ctx->pc) {
        case 0x2c0ea8u: goto label_2c0ea8;
        case 0x2c0ebcu: goto label_2c0ebc;
        case 0x2c0ed0u: goto label_2c0ed0;
        case 0x2c0ee8u: goto label_2c0ee8;
        case 0x2c1054u: goto label_2c1054;
        default: break;
    }

    ctx->pc = 0x2c0e20u;

    // 0x2c0e20: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2c0e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2c0e24: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2c0e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c0e28: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2c0e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2c0e2c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2c0e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2c0e30: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2c0e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2c0e34: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2c0e34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0e38: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2c0e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2c0e3c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2c0e3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0e40: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2c0e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2c0e44: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2c0e44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0e48: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2c0e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2c0e4c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c0e4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0e50: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2c0e50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c0e54: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x2c0e54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2c0e58: 0x1062003f  beq         $v1, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2C0E58u;
    {
        const bool branch_taken_0x2c0e58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C0E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0E58u;
        // 0x2c0e5c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0e58) {
            ctx->pc = 0x2C0F58u;
            goto label_2c0f58;
        }
    }
    ctx->pc = 0x2C0E60u;
    // 0x2c0e60: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2c0e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c0e64: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2C0E64u;
    {
        const bool branch_taken_0x2c0e64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C0E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0E64u;
        // 0x2c0e68: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0e64) {
            ctx->pc = 0x2C0EF0u;
            goto label_2c0ef0;
        }
    }
    ctx->pc = 0x2C0E6Cu;
    // 0x2c0e6c: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C0E6Cu;
    {
        const bool branch_taken_0x2c0e6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c0e6c) {
            ctx->pc = 0x2C0EC8u;
            goto label_2c0ec8;
        }
    }
    ctx->pc = 0x2C0E74u;
    // 0x2c0e74: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2c0e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c0e78: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0E78u;
    {
        const bool branch_taken_0x2c0e78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c0e78) {
            ctx->pc = 0x2C0E88u;
            goto label_2c0e88;
        }
    }
    ctx->pc = 0x2C0E80u;
    // 0x2c0e80: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x2C0E80u;
    {
        const bool branch_taken_0x2c0e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0e80) {
            ctx->pc = 0x2C0FC0u;
            goto label_2c0fc0;
        }
    }
    ctx->pc = 0x2C0E88u;
label_2c0e88:
    // 0x2c0e88: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c0e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c0e8c: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x2c0e8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2c0e90: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2c0e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2c0e94: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c0e94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c0e98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c0e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c0e9c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2c0e9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c0ea0: 0xc0b2214  jal         func_2C8850
    ctx->pc = 0x2C0EA0u;
    SET_GPR_U32(ctx, 31, 0x2C0EA8u);
    ctx->pc = 0x2C0EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0EA0u;
    // 0x2c0ea4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8850u, 0x2C0EA0u, 0x2C0EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0EA8u;
label_2c0ea8:
    // 0x2c0ea8: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x2C0EA8u;
    {
        const bool branch_taken_0x2c0ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0EA8u;
        // 0x2c0eac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0ea8) {
            ctx->pc = 0x2C0FC0u;
            goto label_2c0fc0;
        }
    }
    ctx->pc = 0x2C0EB0u;
    // 0x2c0eb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c0eb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0eb4: 0xc0aec0c  jal         func_2BB030
    ctx->pc = 0x2C0EB4u;
    SET_GPR_U32(ctx, 31, 0x2C0EBCu);
    ctx->pc = 0x2C0EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0EB4u;
    // 0x2c0eb8: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB030u, 0x2C0EB4u, 0x2C0EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0EBCu;
label_2c0ebc:
    // 0x2c0ebc: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x2C0EBCu;
    {
        const bool branch_taken_0x2c0ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0EBCu;
        // 0x2c0ec0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0ebc) {
            ctx->pc = 0x2C0FC0u;
            goto label_2c0fc0;
        }
    }
    ctx->pc = 0x2C0EC4u;
    // 0x2c0ec4: 0x0  nop
    ctx->pc = 0x2c0ec4u;
    // NOP
label_2c0ec8:
    // 0x2c0ec8: 0xc0b221c  jal         func_2C8870
    ctx->pc = 0x2C0EC8u;
    SET_GPR_U32(ctx, 31, 0x2C0ED0u);
    ctx->pc = 0x2C0ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0EC8u;
    // 0x2c0ecc: 0x8e850088  lw          $a1, 0x88($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8870u, 0x2C0EC8u, 0x2C0ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0ED0u;
label_2c0ed0:
    // 0x2c0ed0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c0ed0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0ed4: 0x1200003a  beqz        $s0, . + 4 + (0x3A << 2)
    ctx->pc = 0x2C0ED4u;
    {
        const bool branch_taken_0x2c0ed4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0ED4u;
        // 0x2c0ed8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0ed4) {
            ctx->pc = 0x2C0FC0u;
            goto label_2c0fc0;
        }
    }
    ctx->pc = 0x2C0EDCu;
    // 0x2c0edc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c0edcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0ee0: 0xc0aec0c  jal         func_2BB030
    ctx->pc = 0x2C0EE0u;
    SET_GPR_U32(ctx, 31, 0x2C0EE8u);
    ctx->pc = 0x2C0EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0EE0u;
    // 0x2c0ee4: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB030u, 0x2C0EE0u, 0x2C0EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0EE8u;
label_2c0ee8:
    // 0x2c0ee8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2C0EE8u;
    {
        const bool branch_taken_0x2c0ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0EE8u;
        // 0x2c0eec: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0ee8) {
            ctx->pc = 0x2C0FC0u;
            goto label_2c0fc0;
        }
    }
    ctx->pc = 0x2C0EF0u;
label_2c0ef0:
    // 0x2c0ef0: 0x92640002  lbu         $a0, 0x2($s3)
    ctx->pc = 0x2c0ef0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2c0ef4: 0xc6620020  lwc1        $f2, 0x20($s3)
    ctx->pc = 0x2c0ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c0ef8: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2c0ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2c0efc: 0xc68100c0  lwc1        $f1, 0xC0($s4)
    ctx->pc = 0x2c0efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0f00: 0x2442f38c  addiu       $v0, $v0, -0xC74
    ctx->pc = 0x2c0f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964108));
    // 0x2c0f04: 0xc6640028  lwc1        $f4, 0x28($s3)
    ctx->pc = 0x2c0f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c0f08: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x2c0f08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c0f0c: 0xc68300c8  lwc1        $f3, 0xC8($s4)
    ctx->pc = 0x2c0f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c0f10: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c0f10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0f14: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2c0f14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2c0f18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c0f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c0f1c: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x2c0f1cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2c0f20: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2c0f20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2c0f24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c0f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c0f28: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x2c0f28u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x2c0f2c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2c0f2cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2c0f30: 0x4603189c  madd.s      $f2, $f3, $f3
    ctx->pc = 0x2c0f30u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x2c0f34: 0x46020084  c1          0x20084
    ctx->pc = 0x2c0f34u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[2]);
    // 0x2c0f38: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2c0f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0f3c: 0x0  nop
    ctx->pc = 0x2c0f3cu;
    // NOP
    // 0x2c0f40: 0x46011501  sub.s       $f20, $f2, $f1
    ctx->pc = 0x2c0f40u;
    ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2c0f44: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2c0f44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0f48: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x2C0F48u;
    {
        const bool branch_taken_0x2c0f48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c0f48) {
            ctx->pc = 0x2C0FC0u;
            goto label_2c0fc0;
        }
    }
    ctx->pc = 0x2C0F50u;
    // 0x2c0f50: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2C0F50u;
    {
        const bool branch_taken_0x2c0f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0F50u;
        // 0x2c0f54: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0f50) {
            ctx->pc = 0x2C0FC0u;
            goto label_2c0fc0;
        }
    }
    ctx->pc = 0x2C0F58u;
label_2c0f58:
    // 0x2c0f58: 0x92640002  lbu         $a0, 0x2($s3)
    ctx->pc = 0x2c0f58u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2c0f5c: 0xc6620020  lwc1        $f2, 0x20($s3)
    ctx->pc = 0x2c0f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c0f60: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2c0f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2c0f64: 0xc68100d0  lwc1        $f1, 0xD0($s4)
    ctx->pc = 0x2c0f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0f68: 0x2442f38c  addiu       $v0, $v0, -0xC74
    ctx->pc = 0x2c0f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964108));
    // 0x2c0f6c: 0xc6640028  lwc1        $f4, 0x28($s3)
    ctx->pc = 0x2c0f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c0f70: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x2c0f70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c0f74: 0xc68300d8  lwc1        $f3, 0xD8($s4)
    ctx->pc = 0x2c0f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c0f78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c0f78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0f7c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2c0f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2c0f80: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c0f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c0f84: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x2c0f84u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2c0f88: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2c0f88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2c0f8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c0f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c0f90: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x2c0f90u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x2c0f94: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2c0f94u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2c0f98: 0x4603189c  madd.s      $f2, $f3, $f3
    ctx->pc = 0x2c0f98u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x2c0f9c: 0x46020084  c1          0x20084
    ctx->pc = 0x2c0f9cu;
    ctx->f[2] = FPU_SQRT_S(ctx->f[2]);
    // 0x2c0fa0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2c0fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0fa4: 0x0  nop
    ctx->pc = 0x2c0fa4u;
    // NOP
    // 0x2c0fa8: 0x46011501  sub.s       $f20, $f2, $f1
    ctx->pc = 0x2c0fa8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2c0fac: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2c0facu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0fb0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0FB0u;
    {
        const bool branch_taken_0x2c0fb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c0fb0) {
            ctx->pc = 0x2C0FC0u;
            goto label_2c0fc0;
        }
    }
    ctx->pc = 0x2C0FB8u;
    // 0x2c0fb8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2c0fb8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2c0fbc: 0x0  nop
    ctx->pc = 0x2c0fbcu;
    // NOP
label_2c0fc0:
    // 0x2c0fc0: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x2C0FC0u;
    {
        const bool branch_taken_0x2c0fc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0fc0) {
            ctx->pc = 0x2C0FF8u;
            goto label_2c0ff8;
        }
    }
    ctx->pc = 0x2C0FC8u;
    // 0x2c0fc8: 0x96430004  lhu         $v1, 0x4($s2)
    ctx->pc = 0x2c0fc8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2c0fcc: 0x30627fff  andi        $v0, $v1, 0x7FFF
    ctx->pc = 0x2c0fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x2c0fd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c0fd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0fd4: 0x0  nop
    ctx->pc = 0x2c0fd4u;
    // NOP
    // 0x2c0fd8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c0fd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c0fdc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2c0fdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0fe0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2C0FE0u;
    {
        const bool branch_taken_0x2c0fe0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c0fe0) {
            ctx->pc = 0x2C0FF0u;
            goto label_2c0ff0;
        }
    }
    ctx->pc = 0x2C0FE8u;
    // 0x2c0fe8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2c0fe8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0fec: 0x0  nop
    ctx->pc = 0x2c0fecu;
    // NOP
label_2c0ff0:
    // 0x2c0ff0: 0x313c3  sra         $v0, $v1, 15
    ctx->pc = 0x2c0ff0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 15));
    // 0x2c0ff4: 0x2228826  xor         $s1, $s1, $v0
    ctx->pc = 0x2c0ff4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 2));
label_2c0ff8:
    // 0x2c0ff8: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2C0FF8u;
    {
        const bool branch_taken_0x2c0ff8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0ff8) {
            ctx->pc = 0x2C1078u;
            goto label_2c1078;
        }
    }
    ctx->pc = 0x2C1000u;
    // 0x2c1000: 0x938289d0  lbu         $v0, -0x7630($gp)
    ctx->pc = 0x2c1000u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2c1004: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C1004u;
    {
        const bool branch_taken_0x2c1004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C1008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1004u;
        // 0x2c1008: 0x92450003  lbu         $a1, 0x3($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1004) {
            ctx->pc = 0x2C1060u;
            goto label_2c1060;
        }
    }
    ctx->pc = 0x2C100Cu;
    // 0x2c100c: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x2C100Cu;
    {
        const bool branch_taken_0x2c100c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C100Cu;
        // 0x2c1010: 0xa280004f  sb          $zero, 0x4F($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c100c) {
            ctx->pc = 0x2C1048u;
            goto label_2c1048;
        }
    }
    ctx->pc = 0x2C1014u;
    // 0x2c1014: 0x92840037  lbu         $a0, 0x37($s4)
    ctx->pc = 0x2c1014u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 55)));
    // 0x2c1018: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2c1018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2c101c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c101cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c1020: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c1020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c1024: 0xa284004e  sb          $a0, 0x4E($s4)
    ctx->pc = 0x2c1024u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 78), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c1028: 0xa2850037  sb          $a1, 0x37($s4)
    ctx->pc = 0x2c1028u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 55), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c102c: 0xa2800032  sb          $zero, 0x32($s4)
    ctx->pc = 0x2c102cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c1030: 0xa283005f  sb          $v1, 0x5F($s4)
    ctx->pc = 0x2c1030u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c1034: 0xa6800080  sh          $zero, 0x80($s4)
    ctx->pc = 0x2c1034u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c1038: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2c1038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c103c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c103cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1040: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C1040u;
    {
        const bool branch_taken_0x2c1040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1040u;
        // 0x2c1044: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1040) {
            ctx->pc = 0x2C1070u;
            goto label_2c1070;
        }
    }
    ctx->pc = 0x2C1048u;
label_2c1048:
    // 0x2c1048: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c1048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c104c: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C104Cu;
    SET_GPR_U32(ctx, 31, 0x2C1054u);
    ctx->pc = 0x2C1050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C104Cu;
    // 0x2c1050: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C104Cu, 0x2C1054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1054u;
label_2c1054:
    // 0x2c1054: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C1054u;
    {
        const bool branch_taken_0x2c1054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1054) {
            ctx->pc = 0x2C1068u;
            goto label_2c1068;
        }
    }
    ctx->pc = 0x2C105Cu;
    // 0x2c105c: 0x0  nop
    ctx->pc = 0x2c105cu;
    // NOP
label_2c1060:
    // 0x2c1060: 0xa38589d8  sb          $a1, -0x7628($gp)
    ctx->pc = 0x2c1060u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c1064: 0x0  nop
    ctx->pc = 0x2c1064u;
    // NOP
label_2c1068:
    // 0x2c1068: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c1068u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c106c: 0x0  nop
    ctx->pc = 0x2c106cu;
    // NOP
label_2c1070:
    // 0x2c1070: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C1070u;
    {
        const bool branch_taken_0x2c1070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1070) {
            ctx->pc = 0x2C1080u;
            goto label_2c1080;
        }
    }
    ctx->pc = 0x2C1078u;
label_2c1078:
    // 0x2c1078: 0x26420006  addiu       $v0, $s2, 0x6
    ctx->pc = 0x2c1078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 6));
    // 0x2c107c: 0x0  nop
    ctx->pc = 0x2c107cu;
    // NOP
label_2c1080:
    // 0x2c1080: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2c1080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c1084: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2c1084u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c1088: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2c1088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c108c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2c108cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c1090: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2c1090u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c1094: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2c1094u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c1098: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c1098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c109c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C109Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C10A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C109Cu;
        // 0x2c10a0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C109Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C10A4u;
}
