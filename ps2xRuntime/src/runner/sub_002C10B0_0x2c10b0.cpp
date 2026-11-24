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

// Function: sub_002C10B0
// Address: 0x2c10b0 - 0x2c135c
void sub_002C10B0_0x2c10b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C10B0_0x2c10b0");
#endif

    switch (ctx->pc) {
        case 0x2c1138u: goto label_2c1138;
        case 0x2c114cu: goto label_2c114c;
        case 0x2c1160u: goto label_2c1160;
        case 0x2c1178u: goto label_2c1178;
        case 0x2c130cu: goto label_2c130c;
        default: break;
    }

    ctx->pc = 0x2c10b0u;

    // 0x2c10b0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2c10b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2c10b4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2c10b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c10b8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2c10b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2c10bc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2c10bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2c10c0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2c10c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2c10c4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2c10c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c10c8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2c10c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2c10cc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2c10ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c10d0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2c10d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2c10d4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2c10d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c10d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2c10d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2c10dc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2c10dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c10e0: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x2c10e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2c10e4: 0x90d10002  lbu         $s1, 0x2($a2)
    ctx->pc = 0x2c10e4u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2c10e8: 0x1062003f  beq         $v1, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x2C10E8u;
    {
        const bool branch_taken_0x2c10e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C10ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C10E8u;
        // 0x2c10ec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c10e8) {
            ctx->pc = 0x2C11E8u;
            goto label_2c11e8;
        }
    }
    ctx->pc = 0x2C10F0u;
    // 0x2c10f0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2c10f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c10f4: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2C10F4u;
    {
        const bool branch_taken_0x2c10f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C10F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C10F4u;
        // 0x2c10f8: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c10f4) {
            ctx->pc = 0x2C1180u;
            goto label_2c1180;
        }
    }
    ctx->pc = 0x2C10FCu;
    // 0x2c10fc: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C10FCu;
    {
        const bool branch_taken_0x2c10fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c10fc) {
            ctx->pc = 0x2C1158u;
            goto label_2c1158;
        }
    }
    ctx->pc = 0x2C1104u;
    // 0x2c1104: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2c1104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c1108: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C1108u;
    {
        const bool branch_taken_0x2c1108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c1108) {
            ctx->pc = 0x2C1118u;
            goto label_2c1118;
        }
    }
    ctx->pc = 0x2C1110u;
    // 0x2c1110: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x2C1110u;
    {
        const bool branch_taken_0x2c1110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1110) {
            ctx->pc = 0x2C1250u;
            goto label_2c1250;
        }
    }
    ctx->pc = 0x2C1118u;
label_2c1118:
    // 0x2c1118: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c1118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c111c: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x2c111cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2c1120: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2c1120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2c1124: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c1124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c1128: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c1128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c112c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2c112cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c1130: 0xc0b2214  jal         func_2C8850
    ctx->pc = 0x2C1130u;
    SET_GPR_U32(ctx, 31, 0x2C1138u);
    ctx->pc = 0x2C1134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1130u;
    // 0x2c1134: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8850u, 0x2C1130u, 0x2C1138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1138u;
label_2c1138:
    // 0x2c1138: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x2C1138u;
    {
        const bool branch_taken_0x2c1138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C113Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1138u;
        // 0x2c113c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1138) {
            ctx->pc = 0x2C1250u;
            goto label_2c1250;
        }
    }
    ctx->pc = 0x2C1140u;
    // 0x2c1140: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c1140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1144: 0xc0aec0c  jal         func_2BB030
    ctx->pc = 0x2C1144u;
    SET_GPR_U32(ctx, 31, 0x2C114Cu);
    ctx->pc = 0x2C1148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1144u;
    // 0x2c1148: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB030u, 0x2C1144u, 0x2C114Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C114Cu;
label_2c114c:
    // 0x2c114c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x2C114Cu;
    {
        const bool branch_taken_0x2c114c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C114Cu;
        // 0x2c1150: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c114c) {
            ctx->pc = 0x2C1250u;
            goto label_2c1250;
        }
    }
    ctx->pc = 0x2C1154u;
    // 0x2c1154: 0x0  nop
    ctx->pc = 0x2c1154u;
    // NOP
label_2c1158:
    // 0x2c1158: 0xc0b221c  jal         func_2C8870
    ctx->pc = 0x2C1158u;
    SET_GPR_U32(ctx, 31, 0x2C1160u);
    ctx->pc = 0x2C115Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1158u;
    // 0x2c115c: 0x8e850088  lw          $a1, 0x88($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8870u, 0x2C1158u, 0x2C1160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1160u;
label_2c1160:
    // 0x2c1160: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c1160u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1164: 0x1200003a  beqz        $s0, . + 4 + (0x3A << 2)
    ctx->pc = 0x2C1164u;
    {
        const bool branch_taken_0x2c1164 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1164u;
        // 0x2c1168: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1164) {
            ctx->pc = 0x2C1250u;
            goto label_2c1250;
        }
    }
    ctx->pc = 0x2C116Cu;
    // 0x2c116c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c116cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1170: 0xc0aec0c  jal         func_2BB030
    ctx->pc = 0x2C1170u;
    SET_GPR_U32(ctx, 31, 0x2C1178u);
    ctx->pc = 0x2C1174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1170u;
    // 0x2c1174: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB030u, 0x2C1170u, 0x2C1178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1178u;
label_2c1178:
    // 0x2c1178: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2C1178u;
    {
        const bool branch_taken_0x2c1178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C117Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1178u;
        // 0x2c117c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1178) {
            ctx->pc = 0x2C1250u;
            goto label_2c1250;
        }
    }
    ctx->pc = 0x2C1180u;
label_2c1180:
    // 0x2c1180: 0x92640002  lbu         $a0, 0x2($s3)
    ctx->pc = 0x2c1180u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2c1184: 0xc6620020  lwc1        $f2, 0x20($s3)
    ctx->pc = 0x2c1184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c1188: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2c1188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2c118c: 0xc68100c0  lwc1        $f1, 0xC0($s4)
    ctx->pc = 0x2c118cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c1190: 0x2442f38c  addiu       $v0, $v0, -0xC74
    ctx->pc = 0x2c1190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964108));
    // 0x2c1194: 0xc6640028  lwc1        $f4, 0x28($s3)
    ctx->pc = 0x2c1194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c1198: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x2c1198u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c119c: 0xc68300c8  lwc1        $f3, 0xC8($s4)
    ctx->pc = 0x2c119cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c11a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c11a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c11a4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2c11a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2c11a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c11a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c11ac: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x2c11acu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2c11b0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2c11b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2c11b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c11b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c11b8: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x2c11b8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x2c11bc: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2c11bcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2c11c0: 0x4603189c  madd.s      $f2, $f3, $f3
    ctx->pc = 0x2c11c0u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x2c11c4: 0x46020084  c1          0x20084
    ctx->pc = 0x2c11c4u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[2]);
    // 0x2c11c8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2c11c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c11cc: 0x0  nop
    ctx->pc = 0x2c11ccu;
    // NOP
    // 0x2c11d0: 0x46011501  sub.s       $f20, $f2, $f1
    ctx->pc = 0x2c11d0u;
    ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2c11d4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2c11d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c11d8: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x2C11D8u;
    {
        const bool branch_taken_0x2c11d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c11d8) {
            ctx->pc = 0x2C1250u;
            goto label_2c1250;
        }
    }
    ctx->pc = 0x2C11E0u;
    // 0x2c11e0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2C11E0u;
    {
        const bool branch_taken_0x2c11e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C11E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C11E0u;
        // 0x2c11e4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c11e0) {
            ctx->pc = 0x2C1250u;
            goto label_2c1250;
        }
    }
    ctx->pc = 0x2C11E8u;
label_2c11e8:
    // 0x2c11e8: 0x92640002  lbu         $a0, 0x2($s3)
    ctx->pc = 0x2c11e8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2c11ec: 0xc6620020  lwc1        $f2, 0x20($s3)
    ctx->pc = 0x2c11ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c11f0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x2c11f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x2c11f4: 0xc68100d0  lwc1        $f1, 0xD0($s4)
    ctx->pc = 0x2c11f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c11f8: 0x2442f38c  addiu       $v0, $v0, -0xC74
    ctx->pc = 0x2c11f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964108));
    // 0x2c11fc: 0xc6640028  lwc1        $f4, 0x28($s3)
    ctx->pc = 0x2c11fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c1200: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x2c1200u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c1204: 0xc68300d8  lwc1        $f3, 0xD8($s4)
    ctx->pc = 0x2c1204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c1208: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c1208u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c120c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2c120cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2c1210: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c1210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c1214: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x2c1214u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2c1218: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2c1218u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2c121c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c121cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c1220: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x2c1220u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x2c1224: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2c1224u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2c1228: 0x4603189c  madd.s      $f2, $f3, $f3
    ctx->pc = 0x2c1228u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x2c122c: 0x46020084  c1          0x20084
    ctx->pc = 0x2c122cu;
    ctx->f[2] = FPU_SQRT_S(ctx->f[2]);
    // 0x2c1230: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2c1230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c1234: 0x0  nop
    ctx->pc = 0x2c1234u;
    // NOP
    // 0x2c1238: 0x46011501  sub.s       $f20, $f2, $f1
    ctx->pc = 0x2c1238u;
    ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2c123c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2c123cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c1240: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2C1240u;
    {
        const bool branch_taken_0x2c1240 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c1240) {
            ctx->pc = 0x2C1250u;
            goto label_2c1250;
        }
    }
    ctx->pc = 0x2C1248u;
    // 0x2c1248: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2c1248u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2c124c: 0x0  nop
    ctx->pc = 0x2c124cu;
    // NOP
label_2c1250:
    // 0x2c1250: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C1250u;
    {
        const bool branch_taken_0x2c1250 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1250u;
        // 0x2c1254: 0x3c024f00  lui         $v0, 0x4F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1250) {
            ctx->pc = 0x2C12B0u;
            goto label_2c12b0;
        }
    }
    ctx->pc = 0x2C1258u;
    // 0x2c1258: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c1258u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c125c: 0x0  nop
    ctx->pc = 0x2c125cu;
    // NOP
    // 0x2c1260: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2c1260u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c1264: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2C1264u;
    {
        const bool branch_taken_0x2c1264 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C1268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1264u;
        // 0x2c1268: 0x96440004  lhu         $a0, 0x4($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1264) {
            ctx->pc = 0x2C127Cu;
            goto label_2c127c;
        }
    }
    ctx->pc = 0x2C126Cu;
    // 0x2c126c: 0x4600a524  .word       0x4600A524                   # cvt.w.s     $f20, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c126cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[20], &tmp, sizeof(tmp)); }
    // 0x2c1270: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x2c1270u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2c1274: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C1274u;
    {
        const bool branch_taken_0x2c1274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1274u;
        // 0x2c1278: 0x96420006  lhu         $v0, 0x6($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1274) {
            ctx->pc = 0x2C1298u;
            goto label_2c1298;
        }
    }
    ctx->pc = 0x2C127Cu;
label_2c127c:
    // 0x2c127c: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x2c127cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2c1280: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2c1280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2c1284: 0x4600a524  .word       0x4600A524                   # cvt.w.s     $f20, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c1284u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[20], &tmp, sizeof(tmp)); }
    // 0x2c1288: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x2c1288u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2c128c: 0x0  nop
    ctx->pc = 0x2c128cu;
    // NOP
    // 0x2c1290: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2c1290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2c1294: 0x96420006  lhu         $v0, 0x6($s2)
    ctx->pc = 0x2c1294u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_2c1298:
    // 0x2c1298: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2c1298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2c129c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2c129cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c12a0: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2c12a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c12a4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2c12a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c12a8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c12a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2c12ac: 0x2228826  xor         $s1, $s1, $v0
    ctx->pc = 0x2c12acu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 2));
label_2c12b0:
    // 0x2c12b0: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2C12B0u;
    {
        const bool branch_taken_0x2c12b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c12b0) {
            ctx->pc = 0x2C1330u;
            goto label_2c1330;
        }
    }
    ctx->pc = 0x2C12B8u;
    // 0x2c12b8: 0x938289d0  lbu         $v0, -0x7630($gp)
    ctx->pc = 0x2c12b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2c12bc: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C12BCu;
    {
        const bool branch_taken_0x2c12bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C12C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C12BCu;
        // 0x2c12c0: 0x92450003  lbu         $a1, 0x3($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c12bc) {
            ctx->pc = 0x2C1318u;
            goto label_2c1318;
        }
    }
    ctx->pc = 0x2C12C4u;
    // 0x2c12c4: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x2C12C4u;
    {
        const bool branch_taken_0x2c12c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C12C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C12C4u;
        // 0x2c12c8: 0xa280004f  sb          $zero, 0x4F($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c12c4) {
            ctx->pc = 0x2C1300u;
            goto label_2c1300;
        }
    }
    ctx->pc = 0x2C12CCu;
    // 0x2c12cc: 0x92840037  lbu         $a0, 0x37($s4)
    ctx->pc = 0x2c12ccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 55)));
    // 0x2c12d0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2c12d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2c12d4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c12d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c12d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c12d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c12dc: 0xa284004e  sb          $a0, 0x4E($s4)
    ctx->pc = 0x2c12dcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 78), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c12e0: 0xa2850037  sb          $a1, 0x37($s4)
    ctx->pc = 0x2c12e0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 55), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c12e4: 0xa2800032  sb          $zero, 0x32($s4)
    ctx->pc = 0x2c12e4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c12e8: 0xa283005f  sb          $v1, 0x5F($s4)
    ctx->pc = 0x2c12e8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c12ec: 0xa6800080  sh          $zero, 0x80($s4)
    ctx->pc = 0x2c12ecu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c12f0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2c12f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c12f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c12f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c12f8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C12F8u;
    {
        const bool branch_taken_0x2c12f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C12FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C12F8u;
        // 0x2c12fc: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c12f8) {
            ctx->pc = 0x2C1328u;
            goto label_2c1328;
        }
    }
    ctx->pc = 0x2C1300u;
label_2c1300:
    // 0x2c1300: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c1300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1304: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C1304u;
    SET_GPR_U32(ctx, 31, 0x2C130Cu);
    ctx->pc = 0x2C1308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1304u;
    // 0x2c1308: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C1304u, 0x2C130Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C130Cu;
label_2c130c:
    // 0x2c130c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C130Cu;
    {
        const bool branch_taken_0x2c130c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c130c) {
            ctx->pc = 0x2C1320u;
            goto label_2c1320;
        }
    }
    ctx->pc = 0x2C1314u;
    // 0x2c1314: 0x0  nop
    ctx->pc = 0x2c1314u;
    // NOP
label_2c1318:
    // 0x2c1318: 0xa38589d8  sb          $a1, -0x7628($gp)
    ctx->pc = 0x2c1318u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c131c: 0x0  nop
    ctx->pc = 0x2c131cu;
    // NOP
label_2c1320:
    // 0x2c1320: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c1320u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1324: 0x0  nop
    ctx->pc = 0x2c1324u;
    // NOP
label_2c1328:
    // 0x2c1328: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C1328u;
    {
        const bool branch_taken_0x2c1328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1328) {
            ctx->pc = 0x2C1338u;
            goto label_2c1338;
        }
    }
    ctx->pc = 0x2C1330u;
label_2c1330:
    // 0x2c1330: 0x26420008  addiu       $v0, $s2, 0x8
    ctx->pc = 0x2c1330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x2c1334: 0x0  nop
    ctx->pc = 0x2c1334u;
    // NOP
label_2c1338:
    // 0x2c1338: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2c1338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c133c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2c133cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c1340: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2c1340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c1344: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2c1344u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c1348: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2c1348u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c134c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2c134cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c1350: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c1350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c1354: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1354u;
        // 0x2c1358: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C135Cu;
}
