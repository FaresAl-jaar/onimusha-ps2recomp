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

// Function: sub_002DB8F0
// Address: 0x2db8f0 - 0x2dbc80
void sub_002DB8F0_0x2db8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB8F0_0x2db8f0");
#endif

    switch (ctx->pc) {
        case 0x2db940u: goto label_2db940;
        case 0x2db9acu: goto label_2db9ac;
        case 0x2dbb3cu: goto label_2dbb3c;
        case 0x2dbb4cu: goto label_2dbb4c;
        default: break;
    }

    ctx->pc = 0x2db8f0u;

    // 0x2db8f0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2db8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2db8f4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2db8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2db8f8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2db8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2db8fc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2db8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2db900: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2db900u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db904: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2db904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2db908: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2db908u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db90c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2db90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2db910: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2db910u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db914: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2db914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2db918: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2db918u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db91c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2db91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2db920: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2db920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2db924: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x2db924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2db928: 0x90630004  lbu         $v1, 0x4($v1)
    ctx->pc = 0x2db928u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2db92c: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2db92cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2db930: 0x102000c9  beqz        $at, . + 4 + (0xC9 << 2)
    ctx->pc = 0x2DB930u;
    {
        const bool branch_taken_0x2db930 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB930u;
        // 0x2db934: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db930) {
            ctx->pc = 0x2DBC58u;
            goto label_2dbc58;
        }
    }
    ctx->pc = 0x2DB938u;
    // 0x2db938: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2db938u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db93c: 0x0  nop
    ctx->pc = 0x2db93cu;
    // NOP
label_2db940:
    // 0x2db940: 0x86850054  lh          $a1, 0x54($s4)
    ctx->pc = 0x2db940u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x2db944: 0x92640001  lbu         $a0, 0x1($s3)
    ctx->pc = 0x2db944u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x2db948: 0x2451821  addu        $v1, $s2, $a1
    ctx->pc = 0x2db948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x2db94c: 0x64001b  divu        $zero, $v1, $a0
    ctx->pc = 0x2db94cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2db950: 0x0  nop
    ctx->pc = 0x2db950u;
    // NOP
    // 0x2db954: 0x0  nop
    ctx->pc = 0x2db954u;
    // NOP
    // 0x2db958: 0x1810  mfhi        $v1
    ctx->pc = 0x2db958u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2db95c: 0x146000b8  bnez        $v1, . + 4 + (0xB8 << 2)
    ctx->pc = 0x2DB95Cu;
    {
        const bool branch_taken_0x2db95c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db95c) {
            ctx->pc = 0x2DBC40u;
            goto label_2dbc40;
        }
    }
    ctx->pc = 0x2DB964u;
    // 0x2db964: 0xa4001b  divu        $zero, $a1, $a0
    ctx->pc = 0x2db964u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x2db968: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x2db968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
    // 0x2db96c: 0x503021  addu        $a2, $v0, $s0
    ctx->pc = 0x2db96cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2db970: 0x92640013  lbu         $a0, 0x13($s3)
    ctx->pc = 0x2db970u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 19)));
    // 0x2db974: 0x1812  mflo        $v1
    ctx->pc = 0x2db974u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x2db978: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2db978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db97c: 0x64001b  divu        $zero, $v1, $a0
    ctx->pc = 0x2db97cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2db980: 0x0  nop
    ctx->pc = 0x2db980u;
    // NOP
    // 0x2db984: 0x0  nop
    ctx->pc = 0x2db984u;
    // NOP
    // 0x2db988: 0x1810  mfhi        $v1
    ctx->pc = 0x2db988u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2db98c: 0x2441018  mult        $v0, $s2, $a0
    ctx->pc = 0x2db98cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2db990: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2db990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2db994: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2db994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2db998: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2db998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2db99c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2db99cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2db9a0: 0x2c28821  addu        $s1, $s6, $v0
    ctx->pc = 0x2db9a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x2db9a4: 0xc0a2228  jal         func_2888A0
    ctx->pc = 0x2DB9A4u;
    SET_GPR_U32(ctx, 31, 0x2DB9ACu);
    ctx->pc = 0x2DB9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB9A4u;
    // 0x2db9a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2888A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2888A0u, 0x2DB9A4u, 0x2DB9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB9ACu;
label_2db9ac:
    // 0x2db9ac: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x2db9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2db9b0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2db9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2db9b4: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x2db9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x2db9b8: 0xc6640040  lwc1        $f4, 0x40($s3)
    ctx->pc = 0x2db9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2db9bc: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x2db9bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2db9c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2db9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2db9c4: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x2db9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x2db9c8: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x2db9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2db9cc: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x2db9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x2db9d0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DB9D0u;
    {
        const bool branch_taken_0x2db9d0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2DB9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB9D0u;
        // 0x2db9d4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db9d0) {
            ctx->pc = 0x2DB9E4u;
            goto label_2db9e4;
        }
    }
    ctx->pc = 0x2DB9D8u;
    // 0x2db9d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2db9d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2db9dc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2DB9DCu;
    {
        const bool branch_taken_0x2db9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB9DCu;
        // 0x2db9e0: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db9dc) {
            ctx->pc = 0x2DB9FCu;
            goto label_2db9fc;
        }
    }
    ctx->pc = 0x2DB9E4u;
label_2db9e4:
    // 0x2db9e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2db9e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2db9e8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2db9e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2db9ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2db9ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2db9f0: 0x0  nop
    ctx->pc = 0x2db9f0u;
    // NOP
    // 0x2db9f4: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2db9f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2db9f8: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2db9f8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2db9fc:
    // 0x2db9fc: 0x3c023600  lui         $v0, 0x3600
    ctx->pc = 0x2db9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13824 << 16));
    // 0x2dba00: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2dba00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2dba04: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2dba04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2dba08: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2dba08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2dba0c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2dba0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dba10: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2dba10u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2dba14: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2dba14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2dba18: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x2dba18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x2dba1c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2dba1cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2dba20: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2dba20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dba24: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x2dba24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2dba28: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2dba28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2dba2c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2dba2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2dba30: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x2dba30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2dba34: 0xc6640044  lwc1        $f4, 0x44($s3)
    ctx->pc = 0x2dba34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2dba38: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x2dba38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2dba3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2dba3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2dba40: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x2dba40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x2dba44: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x2dba44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2dba48: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x2dba48u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x2dba4c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DBA4Cu;
    {
        const bool branch_taken_0x2dba4c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2DBA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBA4Cu;
        // 0x2dba50: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dba4c) {
            ctx->pc = 0x2DBA60u;
            goto label_2dba60;
        }
    }
    ctx->pc = 0x2DBA54u;
    // 0x2dba54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dba54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dba58: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2DBA58u;
    {
        const bool branch_taken_0x2dba58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBA58u;
        // 0x2dba5c: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dba58) {
            ctx->pc = 0x2DBA78u;
            goto label_2dba78;
        }
    }
    ctx->pc = 0x2DBA60u;
label_2dba60:
    // 0x2dba60: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2dba60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2dba64: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2dba64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2dba68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2dba68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dba6c: 0x0  nop
    ctx->pc = 0x2dba6cu;
    // NOP
    // 0x2dba70: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2dba70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2dba74: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2dba74u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2dba78:
    // 0x2dba78: 0x3c023600  lui         $v0, 0x3600
    ctx->pc = 0x2dba78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)13824 << 16));
    // 0x2dba7c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2dba7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2dba80: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2dba80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2dba84: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2dba84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2dba88: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2dba88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dba8c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2dba8cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2dba90: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2dba90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2dba94: 0x34420dcd  ori         $v0, $v0, 0xDCD
    ctx->pc = 0x2dba94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3533);
    // 0x2dba98: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2dba98u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2dba9c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2dba9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dbaa0: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x2dbaa0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2dbaa4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2dbaa4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2dbaa8: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2dbaa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2dbaac: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x2dbaacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2dbab0: 0xc6640048  lwc1        $f4, 0x48($s3)
    ctx->pc = 0x2dbab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2dbab4: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x2dbab4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2dbab8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2dbab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2dbabc: 0xaf8280e0  sw          $v0, -0x7F20($gp)
    ctx->pc = 0x2dbabcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 2));
    // 0x2dbac0: 0x8f8280e0  lw          $v0, -0x7F20($gp)
    ctx->pc = 0x2dbac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2dbac4: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x2dbac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x2dbac8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DBAC8u;
    {
        const bool branch_taken_0x2dbac8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2DBACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBAC8u;
        // 0x2dbacc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbac8) {
            ctx->pc = 0x2DBADCu;
            goto label_2dbadc;
        }
    }
    ctx->pc = 0x2DBAD0u;
    // 0x2dbad0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dbad0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dbad4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2DBAD4u;
    {
        const bool branch_taken_0x2dbad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBAD4u;
        // 0x2dbad8: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbad4) {
            ctx->pc = 0x2DBAF4u;
            goto label_2dbaf4;
        }
    }
    ctx->pc = 0x2DBADCu;
label_2dbadc:
    // 0x2dbadc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2dbadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2dbae0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2dbae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2dbae4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2dbae4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dbae8: 0x0  nop
    ctx->pc = 0x2dbae8u;
    // NOP
    // 0x2dbaec: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2dbaecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2dbaf0: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2dbaf0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2dbaf4:
    // 0x2dbaf4: 0x3c033600  lui         $v1, 0x3600
    ctx->pc = 0x2dbaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13824 << 16));
    // 0x2dbaf8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2dbaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2dbafc: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x2dbafcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x2dbb00: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x2dbb00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2dbb04: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2dbb04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2dbb08: 0x27a50088  addiu       $a1, $sp, 0x88
    ctx->pc = 0x2dbb08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x2dbb0c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2dbb0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dbb10: 0x26660004  addiu       $a2, $s3, 0x4
    ctx->pc = 0x2dbb10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x2dbb14: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2dbb14u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2dbb18: 0x26670006  addiu       $a3, $s3, 0x6
    ctx->pc = 0x2dbb18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 6));
    // 0x2dbb1c: 0x26680008  addiu       $t0, $s3, 0x8
    ctx->pc = 0x2dbb1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x2dbb20: 0x2669000c  addiu       $t1, $s3, 0xC
    ctx->pc = 0x2dbb20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x2dbb24: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2dbb24u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2dbb28: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2dbb28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dbb2c: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x2dbb2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2dbb30: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2dbb30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2dbb34: 0xc096da0  jal         func_25B680
    ctx->pc = 0x2DBB34u;
    SET_GPR_U32(ctx, 31, 0x2DBB3Cu);
    ctx->pc = 0x2DBB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBB34u;
    // 0x2dbb38: 0xe6200008  swc1        $f0, 0x8($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B680u, 0x2DBB34u, 0x2DBB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBB3Cu;
label_2dbb3c:
    // 0x2dbb3c: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x2dbb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2dbb40: 0xa6220022  sh          $v0, 0x22($s1)
    ctx->pc = 0x2dbb40u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x2dbb44: 0xc096d80  jal         func_25B600
    ctx->pc = 0x2DBB44u;
    SET_GPR_U32(ctx, 31, 0x2DBB4Cu);
    ctx->pc = 0x2DBB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBB44u;
    // 0x2dbb48: 0x8e640014  lw          $a0, 0x14($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B600u, 0x2DBB44u, 0x2DBB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBB4Cu;
label_2dbb4c:
    // 0x2dbb4c: 0xa2220024  sb          $v0, 0x24($s1)
    ctx->pc = 0x2dbb4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 36), (uint8_t)GPR_U32(ctx, 2));
    // 0x2dbb50: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2dbb50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2dbb54: 0xa6200020  sh          $zero, 0x20($s1)
    ctx->pc = 0x2dbb54u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x2dbb58: 0x34630dcd  ori         $v1, $v1, 0xDCD
    ctx->pc = 0x2dbb58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3533);
    // 0x2dbb5c: 0x8f8580e0  lw          $a1, -0x7F20($gp)
    ctx->pc = 0x2dbb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2dbb60: 0x86640020  lh          $a0, 0x20($s3)
    ctx->pc = 0x2dbb60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2dbb64: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x2dbb64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2dbb68: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2dbb68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2dbb6c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2dbb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2dbb70: 0xaf8380e0  sw          $v1, -0x7F20($gp)
    ctx->pc = 0x2dbb70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 3));
    // 0x2dbb74: 0x8f8580e0  lw          $a1, -0x7F20($gp)
    ctx->pc = 0x2dbb74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2dbb78: 0x86630002  lh          $v1, 0x2($s3)
    ctx->pc = 0x2dbb78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x2dbb7c: 0x52b02  srl         $a1, $a1, 12
    ctx->pc = 0x2dbb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 12));
    // 0x2dbb80: 0xa4001b  divu        $zero, $a1, $a0
    ctx->pc = 0x2dbb80u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x2dbb84: 0x0  nop
    ctx->pc = 0x2dbb84u;
    // NOP
    // 0x2dbb88: 0x0  nop
    ctx->pc = 0x2dbb88u;
    // NOP
    // 0x2dbb8c: 0x2010  mfhi        $a0
    ctx->pc = 0x2dbb8cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2dbb90: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2dbb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2dbb94: 0xa6230026  sh          $v1, 0x26($s1)
    ctx->pc = 0x2dbb94u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 38), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dbb98: 0x86230026  lh          $v1, 0x26($s1)
    ctx->pc = 0x2dbb98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 38)));
    // 0x2dbb9c: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DBB9Cu;
    {
        const bool branch_taken_0x2dbb9c = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x2DBBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBB9Cu;
        // 0x2dbba0: 0x28617ff1  slti        $at, $v1, 0x7FF1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32753) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbb9c) {
            ctx->pc = 0x2DBBACu;
            goto label_2dbbac;
        }
    }
    ctx->pc = 0x2DBBA4u;
    // 0x2dbba4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2DBBA4u;
    {
        const bool branch_taken_0x2dbba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBBA4u;
        // 0x2dbba8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbba4) {
            ctx->pc = 0x2DBBBCu;
            goto label_2dbbbc;
        }
    }
    ctx->pc = 0x2DBBACu;
label_2dbbac:
    // 0x2dbbac: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DBBACu;
    {
        const bool branch_taken_0x2dbbac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dbbac) {
            ctx->pc = 0x2DBBBCu;
            goto label_2dbbbc;
        }
    }
    ctx->pc = 0x2DBBB4u;
    // 0x2dbbb4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2DBBB4u;
    {
        const bool branch_taken_0x2dbbb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBBB4u;
        // 0x2dbbb8: 0x24037ff0  addiu       $v1, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbbb4) {
            ctx->pc = 0x2DBBBCu;
            goto label_2dbbbc;
        }
    }
    ctx->pc = 0x2DBBBCu;
label_2dbbbc:
    // 0x2dbbbc: 0xa6230026  sh          $v1, 0x26($s1)
    ctx->pc = 0x2dbbbcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 38), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dbbc0: 0xa6200028  sh          $zero, 0x28($s1)
    ctx->pc = 0x2dbbc0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 40), (uint16_t)GPR_U32(ctx, 0));
    // 0x2dbbc4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2dbbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2dbbc8: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x2dbbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2dbbcc: 0x34630dcd  ori         $v1, $v1, 0xDCD
    ctx->pc = 0x2dbbccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3533);
    // 0x2dbbd0: 0xc6640024  lwc1        $f4, 0x24($s3)
    ctx->pc = 0x2dbbd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2dbbd4: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x2dbbd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2dbbd8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2dbbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2dbbdc: 0xaf8380e0  sw          $v1, -0x7F20($gp)
    ctx->pc = 0x2dbbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934752), GPR_U32(ctx, 3));
    // 0x2dbbe0: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x2dbbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x2dbbe4: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x2dbbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x2dbbe8: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DBBE8u;
    {
        const bool branch_taken_0x2dbbe8 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2DBBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBBE8u;
        // 0x2dbbec: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbbe8) {
            ctx->pc = 0x2DBBFCu;
            goto label_2dbbfc;
        }
    }
    ctx->pc = 0x2DBBF0u;
    // 0x2dbbf0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2dbbf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dbbf4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2DBBF4u;
    {
        const bool branch_taken_0x2dbbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBBF4u;
        // 0x2dbbf8: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbbf4) {
            ctx->pc = 0x2DBC14u;
            goto label_2dbc14;
        }
    }
    ctx->pc = 0x2DBBFCu;
label_2dbbfc:
    // 0x2dbbfc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2dbbfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2dbc00: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2dbc00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2dbc04: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2dbc04u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dbc08: 0x0  nop
    ctx->pc = 0x2dbc08u;
    // NOP
    // 0x2dbc0c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x2dbc0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2dbc10: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2dbc10u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2dbc14:
    // 0x2dbc14: 0x3c043600  lui         $a0, 0x3600
    ctx->pc = 0x2dbc14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)13824 << 16));
    // 0x2dbc18: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2dbc18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2dbc1c: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x2dbc1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x2dbc20: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x2dbc20u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2dbc24: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2dbc24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dbc28: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2dbc28u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2dbc2c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2dbc2cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2dbc30: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x2dbc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dbc34: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x2dbc34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2dbc38: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2dbc38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2dbc3c: 0xe620002c  swc1        $f0, 0x2C($s1)
    ctx->pc = 0x2dbc3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
label_2dbc40:
    // 0x2dbc40: 0x8e830070  lw          $v1, 0x70($s4)
    ctx->pc = 0x2dbc40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x2dbc44: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2dbc44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2dbc48: 0x90630004  lbu         $v1, 0x4($v1)
    ctx->pc = 0x2dbc48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2dbc4c: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x2dbc4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2dbc50: 0x1460ff3b  bnez        $v1, . + 4 + (-0xC5 << 2)
    ctx->pc = 0x2DBC50u;
    {
        const bool branch_taken_0x2dbc50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DBC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBC50u;
        // 0x2dbc54: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbc50) {
            ctx->pc = 0x2DB940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db940;
        }
    }
    ctx->pc = 0x2DBC58u;
label_2dbc58:
    // 0x2dbc58: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2dbc58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2dbc5c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2dbc5cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2dbc60: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2dbc60u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dbc64: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2dbc64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dbc68: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2dbc68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dbc6c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2dbc6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dbc70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dbc70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dbc74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dbc74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dbc78: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBC78u;
        // 0x2dbc7c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DBC78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DBC80u;
}
