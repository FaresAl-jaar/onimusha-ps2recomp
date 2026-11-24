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

// Function: sub_00389E00
// Address: 0x389e00 - 0x389f78
void sub_00389E00_0x389e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00389E00_0x389e00");
#endif

    switch (ctx->pc) {
        case 0x389e00u: goto label_389e00;
        case 0x389e04u: goto label_389e04;
        case 0x389e08u: goto label_389e08;
        case 0x389e0cu: goto label_389e0c;
        case 0x389e10u: goto label_389e10;
        case 0x389e14u: goto label_389e14;
        case 0x389e18u: goto label_389e18;
        case 0x389e1cu: goto label_389e1c;
        case 0x389e20u: goto label_389e20;
        case 0x389e24u: goto label_389e24;
        case 0x389e28u: goto label_389e28;
        case 0x389e2cu: goto label_389e2c;
        case 0x389e30u: goto label_389e30;
        case 0x389e34u: goto label_389e34;
        case 0x389e38u: goto label_389e38;
        case 0x389e3cu: goto label_389e3c;
        case 0x389e40u: goto label_389e40;
        case 0x389e44u: goto label_389e44;
        case 0x389e48u: goto label_389e48;
        case 0x389e4cu: goto label_389e4c;
        case 0x389e50u: goto label_389e50;
        case 0x389e54u: goto label_389e54;
        case 0x389e58u: goto label_389e58;
        case 0x389e5cu: goto label_389e5c;
        case 0x389e60u: goto label_389e60;
        case 0x389e64u: goto label_389e64;
        case 0x389e68u: goto label_389e68;
        case 0x389e6cu: goto label_389e6c;
        case 0x389e70u: goto label_389e70;
        case 0x389e74u: goto label_389e74;
        case 0x389e78u: goto label_389e78;
        case 0x389e7cu: goto label_389e7c;
        case 0x389e80u: goto label_389e80;
        case 0x389e84u: goto label_389e84;
        case 0x389e88u: goto label_389e88;
        case 0x389e8cu: goto label_389e8c;
        case 0x389e90u: goto label_389e90;
        case 0x389e94u: goto label_389e94;
        case 0x389e98u: goto label_389e98;
        case 0x389e9cu: goto label_389e9c;
        case 0x389ea0u: goto label_389ea0;
        case 0x389ea4u: goto label_389ea4;
        case 0x389ea8u: goto label_389ea8;
        case 0x389eacu: goto label_389eac;
        case 0x389eb0u: goto label_389eb0;
        case 0x389eb4u: goto label_389eb4;
        case 0x389eb8u: goto label_389eb8;
        case 0x389ebcu: goto label_389ebc;
        case 0x389ec0u: goto label_389ec0;
        case 0x389ec4u: goto label_389ec4;
        case 0x389ec8u: goto label_389ec8;
        case 0x389eccu: goto label_389ecc;
        case 0x389ed0u: goto label_389ed0;
        case 0x389ed4u: goto label_389ed4;
        case 0x389ed8u: goto label_389ed8;
        case 0x389edcu: goto label_389edc;
        case 0x389ee0u: goto label_389ee0;
        case 0x389ee4u: goto label_389ee4;
        case 0x389ee8u: goto label_389ee8;
        case 0x389eecu: goto label_389eec;
        case 0x389ef0u: goto label_389ef0;
        case 0x389ef4u: goto label_389ef4;
        case 0x389ef8u: goto label_389ef8;
        case 0x389efcu: goto label_389efc;
        case 0x389f00u: goto label_389f00;
        case 0x389f04u: goto label_389f04;
        case 0x389f08u: goto label_389f08;
        case 0x389f0cu: goto label_389f0c;
        case 0x389f10u: goto label_389f10;
        case 0x389f14u: goto label_389f14;
        case 0x389f18u: goto label_389f18;
        case 0x389f1cu: goto label_389f1c;
        case 0x389f20u: goto label_389f20;
        case 0x389f24u: goto label_389f24;
        case 0x389f28u: goto label_389f28;
        case 0x389f2cu: goto label_389f2c;
        case 0x389f30u: goto label_389f30;
        case 0x389f34u: goto label_389f34;
        case 0x389f38u: goto label_389f38;
        case 0x389f3cu: goto label_389f3c;
        case 0x389f40u: goto label_389f40;
        case 0x389f44u: goto label_389f44;
        case 0x389f48u: goto label_389f48;
        case 0x389f4cu: goto label_389f4c;
        case 0x389f50u: goto label_389f50;
        case 0x389f54u: goto label_389f54;
        case 0x389f58u: goto label_389f58;
        case 0x389f5cu: goto label_389f5c;
        case 0x389f60u: goto label_389f60;
        case 0x389f64u: goto label_389f64;
        case 0x389f68u: goto label_389f68;
        case 0x389f6cu: goto label_389f6c;
        case 0x389f70u: goto label_389f70;
        case 0x389f74u: goto label_389f74;
        default: break;
    }

    ctx->pc = 0x389e00u;

label_389e00:
    // 0x389e00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x389e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_389e04:
    // 0x389e04: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x389e04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_389e08:
    // 0x389e08: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x389e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_389e0c:
    // 0x389e0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x389e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_389e10:
    // 0x389e10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x389e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_389e14:
    // 0x389e14: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x389e14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_389e18:
    // 0x389e18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x389e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_389e1c:
    // 0x389e1c: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x389e1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_389e20:
    // 0x389e20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x389e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_389e24:
    // 0x389e24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x389e24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_389e28:
    // 0x389e28: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x389e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_389e2c:
    // 0x389e2c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_389e30:
    if (ctx->pc == 0x389E30u) {
        ctx->pc = 0x389E34u;
        goto label_389e34;
    }
    ctx->pc = 0x389E2Cu;
    {
        const bool branch_taken_0x389e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x389e2c) {
            ctx->pc = 0x389E48u;
            goto label_389e48;
        }
    }
    ctx->pc = 0x389E34u;
label_389e34:
    // 0x389e34: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x389e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_389e38:
    // 0x389e38: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x389e38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_389e3c:
    // 0x389e3c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_389e40:
    if (ctx->pc == 0x389E40u) {
        ctx->pc = 0x389E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389E3Cu;
        // 0x389e40: 0x24630030  addiu       $v1, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389E44u;
        goto label_389e44;
    }
    ctx->pc = 0x389E3Cu;
    {
        const bool branch_taken_0x389e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x389E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389E3Cu;
        // 0x389e40: 0x24630030  addiu       $v1, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389e3c) {
            ctx->pc = 0x389E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_389e28;
        }
    }
    ctx->pc = 0x389E44u;
label_389e44:
    // 0x389e44: 0x0  nop
    ctx->pc = 0x389e44u;
    // NOP
label_389e48:
    // 0x389e48: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x389e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_389e4c:
    // 0x389e4c: 0x14a20002  bne         $a1, $v0, . + 4 + (0x2 << 2)
label_389e50:
    if (ctx->pc == 0x389E50u) {
        ctx->pc = 0x389E54u;
        goto label_389e54;
    }
    ctx->pc = 0x389E4Cu;
    {
        const bool branch_taken_0x389e4c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x389e4c) {
            ctx->pc = 0x389E58u;
            goto label_389e58;
        }
    }
    ctx->pc = 0x389E54u;
label_389e54:
    // 0x389e54: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x389e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_389e58:
    // 0x389e58: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x389e58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_389e5c:
    // 0x389e5c: 0xc5030000  lwc1        $f3, 0x0($t0)
    ctx->pc = 0x389e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_389e60:
    // 0x389e60: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x389e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_389e64:
    // 0x389e64: 0xc5020004  lwc1        $f2, 0x4($t0)
    ctx->pc = 0x389e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_389e68:
    // 0x389e68: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x389e68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_389e6c:
    // 0x389e6c: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x389e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_389e70:
    // 0x389e70: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x389e70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_389e74:
    // 0x389e74: 0xc500000c  lwc1        $f0, 0xC($t0)
    ctx->pc = 0x389e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_389e78:
    // 0x389e78: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x389e78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_389e7c:
    // 0x389e7c: 0x248486e0  addiu       $a0, $a0, -0x7920
    ctx->pc = 0x389e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936288));
label_389e80:
    // 0x389e80: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x389e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_389e84:
    // 0x389e84: 0x240900fe  addiu       $t1, $zero, 0xFE
    ctx->pc = 0x389e84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
label_389e88:
    // 0x389e88: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x389e88u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_389e8c:
    // 0x389e8c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x389e8cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_389e90:
    // 0x389e90: 0xe6230000  swc1        $f3, 0x0($s1)
    ctx->pc = 0x389e90u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_389e94:
    // 0x389e94: 0x24080015  addiu       $t0, $zero, 0x15
    ctx->pc = 0x389e94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_389e98:
    // 0x389e98: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x389e98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_389e9c:
    // 0x389e9c: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x389e9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_389ea0:
    // 0x389ea0: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x389ea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_389ea4:
    // 0x389ea4: 0xc6630000  lwc1        $f3, 0x0($s3)
    ctx->pc = 0x389ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_389ea8:
    // 0x389ea8: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x389ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_389eac:
    // 0x389eac: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x389eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_389eb0:
    // 0x389eb0: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x389eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_389eb4:
    // 0x389eb4: 0xe6230010  swc1        $f3, 0x10($s1)
    ctx->pc = 0x389eb4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_389eb8:
    // 0x389eb8: 0xe6220014  swc1        $f2, 0x14($s1)
    ctx->pc = 0x389eb8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_389ebc:
    // 0x389ebc: 0xe6210018  swc1        $f1, 0x18($s1)
    ctx->pc = 0x389ebcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_389ec0:
    // 0x389ec0: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x389ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_389ec4:
    // 0x389ec4: 0xae270024  sw          $a3, 0x24($s1)
    ctx->pc = 0x389ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 7));
label_389ec8:
    // 0x389ec8: 0xae320028  sw          $s2, 0x28($s1)
    ctx->pc = 0x389ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 18));
label_389ecc:
    // 0x389ecc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x389eccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_389ed0:
    // 0x389ed0: 0xae260020  sw          $a2, 0x20($s1)
    ctx->pc = 0x389ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 6));
label_389ed4:
    // 0x389ed4: 0xc0510e0  jal         func_144380
label_389ed8:
    if (ctx->pc == 0x389ED8u) {
        ctx->pc = 0x389ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389ED4u;
        // 0x389ed8: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389EDCu;
        goto label_389edc;
    }
    ctx->pc = 0x389ED4u;
    SET_GPR_U32(ctx, 31, 0x389EDCu);
    ctx->pc = 0x389ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389ED4u;
    // 0x389ed8: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144380u, 0x389ED4u, 0x389EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389EDCu;
label_389edc:
    // 0x389edc: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x389edcu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_389ee0:
    // 0x389ee0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x389ee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_389ee4:
    // 0x389ee4: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x389ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
label_389ee8:
    // 0x389ee8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x389ee8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_389eec:
    // 0x389eec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x389eecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_389ef0:
    // 0x389ef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x389ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_389ef4:
    // 0x389ef4: 0x24050207  addiu       $a1, $zero, 0x207
    ctx->pc = 0x389ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 519));
label_389ef8:
    // 0x389ef8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x389ef8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_389efc:
    // 0x389efc: 0x0  nop
    ctx->pc = 0x389efcu;
    // NOP
label_389f00:
    // 0x389f00: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x389f00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_389f04:
    // 0x389f04: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x389f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_389f08:
    // 0x389f08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x389f08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_389f0c:
    // 0x389f0c: 0x0  nop
    ctx->pc = 0x389f0cu;
    // NOP
label_389f10:
    // 0x389f10: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x389f10u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_389f14:
    // 0x389f14: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x389f14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_389f18:
    // 0x389f18: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x389f18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_389f1c:
    // 0x389f1c: 0x0  nop
    ctx->pc = 0x389f1cu;
    // NOP
label_389f20:
    // 0x389f20: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x389f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_389f24:
    // 0x389f24: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x389f24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_389f28:
    // 0x389f28: 0xc0d0484  jal         func_341210
label_389f2c:
    if (ctx->pc == 0x389F2Cu) {
        ctx->pc = 0x389F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389F28u;
        // 0x389f2c: 0x30470fff  andi        $a3, $v0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        ctx->pc = 0x389F30u;
        goto label_389f30;
    }
    ctx->pc = 0x389F28u;
    SET_GPR_U32(ctx, 31, 0x389F30u);
    ctx->pc = 0x389F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389F28u;
    // 0x389f2c: 0x30470fff  andi        $a3, $v0, 0xFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    ctx->in_delay_slot = false;
    ctx->pc = 0x341210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341210u, 0x389F28u, 0x389F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389F30u;
label_389f30:
    // 0x389f30: 0x8e1904d4  lw          $t9, 0x4D4($s0)
    ctx->pc = 0x389f30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1236)));
label_389f34:
    // 0x389f34: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x389f34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_389f38:
    // 0x389f38: 0x320f809  jalr        $t9
label_389f3c:
    if (ctx->pc == 0x389F3Cu) {
        ctx->pc = 0x389F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389F38u;
        // 0x389f3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389F40u;
        goto label_389f40;
    }
    ctx->pc = 0x389F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x389F40u);
        ctx->pc = 0x389F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389F38u;
        // 0x389f3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389F38u, 0x389F40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x389F40u;
label_389f40:
    // 0x389f40: 0x96020030  lhu         $v0, 0x30($s0)
    ctx->pc = 0x389f40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
label_389f44:
    // 0x389f44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x389f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_389f48:
    // 0x389f48: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x389f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_389f4c:
    // 0x389f4c: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x389f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
label_389f50:
    // 0x389f50: 0xa6020030  sh          $v0, 0x30($s0)
    ctx->pc = 0x389f50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 2));
label_389f54:
    // 0x389f54: 0xc0e2744  jal         func_389D10
label_389f58:
    if (ctx->pc == 0x389F58u) {
        ctx->pc = 0x389F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389F54u;
        // 0x389f58: 0xae30002c  sw          $s0, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389F5Cu;
        goto label_389f5c;
    }
    ctx->pc = 0x389F54u;
    SET_GPR_U32(ctx, 31, 0x389F5Cu);
    ctx->pc = 0x389F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389F54u;
    // 0x389f58: 0xae30002c  sw          $s0, 0x2C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389D10u, 0x389F54u, 0x389F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389F5Cu;
label_389f5c:
    // 0x389f5c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x389f5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_389f60:
    // 0x389f60: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x389f60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_389f64:
    // 0x389f64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x389f64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_389f68:
    // 0x389f68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x389f68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_389f6c:
    // 0x389f6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x389f6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_389f70:
    // 0x389f70: 0x3e00008  jr          $ra
label_389f74:
    if (ctx->pc == 0x389F74u) {
        ctx->pc = 0x389F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389F70u;
        // 0x389f74: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389F78u;
        goto label_fallthrough_0x389f70;
    }
    ctx->pc = 0x389F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389F70u;
        // 0x389f74: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x389f70:
    ctx->pc = 0x389F78u;
}
