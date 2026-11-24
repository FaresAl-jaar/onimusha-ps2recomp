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

// Function: sub_002C3900
// Address: 0x2c3900 - 0x2c3b24
void sub_002C3900_0x2c3900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C3900_0x2c3900");
#endif

    switch (ctx->pc) {
        case 0x2c39a0u: goto label_2c39a0;
        case 0x2c39b4u: goto label_2c39b4;
        case 0x2c39c4u: goto label_2c39c4;
        case 0x2c3ae4u: goto label_2c3ae4;
        default: break;
    }

    ctx->pc = 0x2c3900u;

    // 0x2c3900: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2c3900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2c3904: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2c3904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2c3908: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2c3908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2c390c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c390cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c3910: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c3910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c3914: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2c3914u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3918: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c3918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c391c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2c391cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3920: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c3920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c3924: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2c3924u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3928: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c3928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c392c: 0x8f828b34  lw          $v0, -0x74CC($gp)
    ctx->pc = 0x2c392cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937396)));
    // 0x2c3930: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x2C3930u;
    {
        const bool branch_taken_0x2c3930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3930u;
        // 0x2c3934: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3930) {
            ctx->pc = 0x2C3A68u;
            goto label_2c3a68;
        }
    }
    ctx->pc = 0x2C3938u;
    // 0x2c3938: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x2c3938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2c393c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2c393cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3940: 0x92450003  lbu         $a1, 0x3($s2)
    ctx->pc = 0x2c3940u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x2c3944: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x2c3944u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2c3948: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2c3948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2c394c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2c394cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2c3950: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2C3950u;
    {
        const bool branch_taken_0x2c3950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C3954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3950u;
        // 0x2c3954: 0x85a821  addu        $s5, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3950) {
            ctx->pc = 0x2C3990u;
            goto label_2c3990;
        }
    }
    ctx->pc = 0x2C3958u;
    // 0x2c3958: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2c3958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c395c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C395Cu;
    {
        const bool branch_taken_0x2c395c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c395c) {
            ctx->pc = 0x2C3970u;
            goto label_2c3970;
        }
    }
    ctx->pc = 0x2C3964u;
    // 0x2c3964: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2C3964u;
    {
        const bool branch_taken_0x2c3964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3964) {
            ctx->pc = 0x2C39A8u;
            goto label_2c39a8;
        }
    }
    ctx->pc = 0x2C396Cu;
    // 0x2c396c: 0x0  nop
    ctx->pc = 0x2c396cu;
    // NOP
label_2c3970:
    // 0x2c3970: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x2c3970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x2c3974: 0x90236c1c  lbu         $v1, 0x6C1C($at)
    ctx->pc = 0x2c3974u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x2c3978: 0x27828060  addiu       $v0, $gp, -0x7FA0
    ctx->pc = 0x2c3978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x2c397c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c397cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c3980: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c3980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c3984: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C3984u;
    {
        const bool branch_taken_0x2c3984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3984u;
        // 0x2c3988: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3984) {
            ctx->pc = 0x2C39A8u;
            goto label_2c39a8;
        }
    }
    ctx->pc = 0x2C398Cu;
    // 0x2c398c: 0x0  nop
    ctx->pc = 0x2c398cu;
    // NOP
label_2c3990:
    // 0x2c3990: 0x8e850088  lw          $a1, 0x88($s4)
    ctx->pc = 0x2c3990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x2c3994: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2c3994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2c3998: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2C3998u;
    SET_GPR_U32(ctx, 31, 0x2C39A0u);
    ctx->pc = 0x2C399Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3998u;
    // 0x2c399c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2C3998u, 0x2C39A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C39A0u;
label_2c39a0:
    // 0x2c39a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c39a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c39a4: 0x0  nop
    ctx->pc = 0x2c39a4u;
    // NOP
label_2c39a8:
    // 0x2c39a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c39a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c39ac: 0xc0b2214  jal         func_2C8850
    ctx->pc = 0x2C39ACu;
    SET_GPR_U32(ctx, 31, 0x2C39B4u);
    ctx->pc = 0x2C39B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C39ACu;
    // 0x2c39b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8850u, 0x2C39ACu, 0x2C39B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C39B4u;
label_2c39b4:
    // 0x2c39b4: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2C39B4u;
    {
        const bool branch_taken_0x2c39b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C39B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C39B4u;
        // 0x2c39b8: 0x27a30070  addiu       $v1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c39b4) {
            ctx->pc = 0x2C3A68u;
            goto label_2c3a68;
        }
    }
    ctx->pc = 0x2C39BCu;
    // 0x2c39bc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C39BCu;
    {
        const bool branch_taken_0x2c39bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C39C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C39BCu;
        // 0x2c39c0: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c39bc) {
            ctx->pc = 0x2C39E0u;
            goto label_2c39e0;
        }
    }
    ctx->pc = 0x2C39C4u;
label_2c39c4:
    // 0x2c39c4: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2c39c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c39c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2c39c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2c39cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2c39ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2c39d0: 0x0  nop
    ctx->pc = 0x2c39d0u;
    // NOP
    // 0x2c39d4: 0x0  nop
    ctx->pc = 0x2c39d4u;
    // NOP
    // 0x2c39d8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C39D8u;
    {
        const bool branch_taken_0x2c39d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c39d8) {
            ctx->pc = 0x2C39C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c39c4;
        }
    }
    ctx->pc = 0x2C39E0u;
label_2c39e0:
    // 0x2c39e0: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x2c39e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2c39e4: 0x27a30078  addiu       $v1, $sp, 0x78
    ctx->pc = 0x2c39e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x2c39e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c39e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c39ec: 0x0  nop
    ctx->pc = 0x2c39ecu;
    // NOP
    // 0x2c39f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c39f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c39f4: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2c39f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2c39f8: 0x86a20002  lh          $v0, 0x2($s5)
    ctx->pc = 0x2c39f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x2c39fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c39fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3a00: 0x0  nop
    ctx->pc = 0x2c3a00u;
    // NOP
    // 0x2c3a04: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c3a04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c3a08: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2c3a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2c3a0c: 0x86a20004  lh          $v0, 0x4($s5)
    ctx->pc = 0x2c3a0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2c3a10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c3a10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3a14: 0x0  nop
    ctx->pc = 0x2c3a14u;
    // NOP
    // 0x2c3a18: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x2c3a18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2c3a1c: 0xe4640000  swc1        $f4, 0x0($v1)
    ctx->pc = 0x2c3a1cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2c3a20: 0xc7a50070  lwc1        $f5, 0x70($sp)
    ctx->pc = 0x2c3a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c3a24: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x2c3a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c3a28: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x2c3a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c3a2c: 0xc6620020  lwc1        $f2, 0x20($s3)
    ctx->pc = 0x2c3a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c3a30: 0xc6630028  lwc1        $f3, 0x28($s3)
    ctx->pc = 0x2c3a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c3a34: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x2c3a34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x2c3a38: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x2c3a38u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x2c3a3c: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x2c3a3cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x2c3a40: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x2c3a40u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x2c3a44: 0x4601085c  madd.s      $f1, $f1, $f1
    ctx->pc = 0x2c3a44u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x2c3a48: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x2c3a48u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x2c3a4c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2c3a4cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2c3a50: 0x4603181c  madd.s      $f0, $f3, $f3
    ctx->pc = 0x2c3a50u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x2c3a54: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c3a54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c3a58: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2C3A58u;
    {
        const bool branch_taken_0x2c3a58 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c3a58) {
            ctx->pc = 0x2C3A68u;
            goto label_2c3a68;
        }
    }
    ctx->pc = 0x2C3A60u;
    // 0x2c3a60: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2c3a60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c3a64: 0x0  nop
    ctx->pc = 0x2c3a64u;
    // NOP
label_2c3a68:
    // 0x2c3a68: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x2c3a68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x2c3a6c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3A6Cu;
    {
        const bool branch_taken_0x2c3a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3A6Cu;
        // 0x2c3a70: 0x11102b  sltu        $v0, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3a6c) {
            ctx->pc = 0x2C3A80u;
            goto label_2c3a80;
        }
    }
    ctx->pc = 0x2C3A74u;
    // 0x2c3a74: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c3a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2c3a78: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x2c3a78u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c3a7c: 0x0  nop
    ctx->pc = 0x2c3a7cu;
    // NOP
label_2c3a80:
    // 0x2c3a80: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C3A80u;
    {
        const bool branch_taken_0x2c3a80 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3A80u;
        // 0x2c3a84: 0x26420006  addiu       $v0, $s2, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3a80) {
            ctx->pc = 0x2C3A90u;
            goto label_2c3a90;
        }
    }
    ctx->pc = 0x2C3A88u;
    // 0x2c3a88: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2C3A88u;
    {
        const bool branch_taken_0x2c3a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3a88) {
            ctx->pc = 0x2C3B00u;
            goto label_2c3b00;
        }
    }
    ctx->pc = 0x2C3A90u;
label_2c3a90:
    // 0x2c3a90: 0x938289d0  lbu         $v0, -0x7630($gp)
    ctx->pc = 0x2c3a90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2c3a94: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C3A94u;
    {
        const bool branch_taken_0x2c3a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C3A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3A94u;
        // 0x2c3a98: 0x92450005  lbu         $a1, 0x5($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3a94) {
            ctx->pc = 0x2C3AF0u;
            goto label_2c3af0;
        }
    }
    ctx->pc = 0x2C3A9Cu;
    // 0x2c3a9c: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x2C3A9Cu;
    {
        const bool branch_taken_0x2c3a9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3A9Cu;
        // 0x2c3aa0: 0xa280004f  sb          $zero, 0x4F($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3a9c) {
            ctx->pc = 0x2C3AD8u;
            goto label_2c3ad8;
        }
    }
    ctx->pc = 0x2C3AA4u;
    // 0x2c3aa4: 0x92840037  lbu         $a0, 0x37($s4)
    ctx->pc = 0x2c3aa4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 55)));
    // 0x2c3aa8: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2c3aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2c3aac: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c3aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c3ab0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c3ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c3ab4: 0xa284004e  sb          $a0, 0x4E($s4)
    ctx->pc = 0x2c3ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 78), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c3ab8: 0xa2850037  sb          $a1, 0x37($s4)
    ctx->pc = 0x2c3ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 55), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c3abc: 0xa2800032  sb          $zero, 0x32($s4)
    ctx->pc = 0x2c3abcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c3ac0: 0xa283005f  sb          $v1, 0x5F($s4)
    ctx->pc = 0x2c3ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c3ac4: 0xa6800080  sh          $zero, 0x80($s4)
    ctx->pc = 0x2c3ac4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c3ac8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2c3ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c3acc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c3accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c3ad0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C3AD0u;
    {
        const bool branch_taken_0x2c3ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3AD0u;
        // 0x2c3ad4: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3ad0) {
            ctx->pc = 0x2C3B00u;
            goto label_2c3b00;
        }
    }
    ctx->pc = 0x2C3AD8u;
label_2c3ad8:
    // 0x2c3ad8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c3ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3adc: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C3ADCu;
    SET_GPR_U32(ctx, 31, 0x2C3AE4u);
    ctx->pc = 0x2C3AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3ADCu;
    // 0x2c3ae0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C3ADCu, 0x2C3AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3AE4u;
label_2c3ae4:
    // 0x2c3ae4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3AE4u;
    {
        const bool branch_taken_0x2c3ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3ae4) {
            ctx->pc = 0x2C3AF8u;
            goto label_2c3af8;
        }
    }
    ctx->pc = 0x2C3AECu;
    // 0x2c3aec: 0x0  nop
    ctx->pc = 0x2c3aecu;
    // NOP
label_2c3af0:
    // 0x2c3af0: 0xa38589d8  sb          $a1, -0x7628($gp)
    ctx->pc = 0x2c3af0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c3af4: 0x0  nop
    ctx->pc = 0x2c3af4u;
    // NOP
label_2c3af8:
    // 0x2c3af8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c3af8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3afc: 0x0  nop
    ctx->pc = 0x2c3afcu;
    // NOP
label_2c3b00:
    // 0x2c3b00: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2c3b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c3b04: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2c3b04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c3b08: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c3b08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c3b0c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c3b0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c3b10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c3b10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c3b14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c3b14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c3b18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c3b18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c3b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C3B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3B1Cu;
        // 0x2c3b20: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3B1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C3B24u;
}
