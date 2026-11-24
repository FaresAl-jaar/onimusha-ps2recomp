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

// Function: sub_003B1E00
// Address: 0x3b1e00 - 0x3b20b0
void sub_003B1E00_0x3b1e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B1E00_0x3b1e00");
#endif

    switch (ctx->pc) {
        case 0x3b1ed8u: goto label_3b1ed8;
        case 0x3b1f74u: goto label_3b1f74;
        case 0x3b1f98u: goto label_3b1f98;
        case 0x3b1facu: goto label_3b1fac;
        case 0x3b2068u: goto label_3b2068;
        default: break;
    }

    ctx->pc = 0x3b1e00u;

    // 0x3b1e00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3b1e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3b1e04: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3b1e04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3b1e08: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3b1e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3b1e0c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3b1e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3b1e10: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3b1e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3b1e14: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3b1e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3b1e18: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3b1e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3b1e1c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3b1e1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3b1e20: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x3b1e20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x3b1e24: 0x8c920030  lw          $s2, 0x30($a0)
    ctx->pc = 0x3b1e24u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x3b1e28: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x3b1e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x3b1e2c: 0x1060007e  beqz        $v1, . + 4 + (0x7E << 2)
    ctx->pc = 0x3B1E2Cu;
    {
        const bool branch_taken_0x3b1e2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1E2Cu;
        // 0x3b1e30: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1e2c) {
            ctx->pc = 0x3B2028u;
            goto label_3b2028;
        }
    }
    ctx->pc = 0x3B1E34u;
    // 0x3b1e34: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3b1e34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3b1e38: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x3b1e38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x3b1e3c: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x3b1e3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x3b1e40: 0x14600079  bnez        $v1, . + 4 + (0x79 << 2)
    ctx->pc = 0x3B1E40u;
    {
        const bool branch_taken_0x3b1e40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b1e40) {
            ctx->pc = 0x3B2028u;
            goto label_3b2028;
        }
    }
    ctx->pc = 0x3B1E48u;
    // 0x3b1e48: 0x8f908060  lw          $s0, -0x7FA0($gp)
    ctx->pc = 0x3b1e48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934624)));
    // 0x3b1e4c: 0x12000076  beqz        $s0, . + 4 + (0x76 << 2)
    ctx->pc = 0x3B1E4Cu;
    {
        const bool branch_taken_0x3b1e4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1E4Cu;
        // 0x3b1e50: 0x8f918064  lw          $s1, -0x7F9C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1e4c) {
            ctx->pc = 0x3B2028u;
            goto label_3b2028;
        }
    }
    ctx->pc = 0x3B1E54u;
    // 0x3b1e54: 0x12200074  beqz        $s1, . + 4 + (0x74 << 2)
    ctx->pc = 0x3B1E54u;
    {
        const bool branch_taken_0x3b1e54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b1e54) {
            ctx->pc = 0x3B2028u;
            goto label_3b2028;
        }
    }
    ctx->pc = 0x3B1E5Cu;
    // 0x3b1e5c: 0x92042ac1  lbu         $a0, 0x2AC1($s0)
    ctx->pc = 0x3b1e5cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10945)));
    // 0x3b1e60: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B1E60u;
    {
        const bool branch_taken_0x3b1e60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b1e60) {
            ctx->pc = 0x3B1E80u;
            goto label_3b1e80;
        }
    }
    ctx->pc = 0x3B1E68u;
    // 0x3b1e68: 0x92232ac1  lbu         $v1, 0x2AC1($s1)
    ctx->pc = 0x3b1e68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10945)));
    // 0x3b1e6c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B1E6Cu;
    {
        const bool branch_taken_0x3b1e6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b1e6c) {
            ctx->pc = 0x3B1E80u;
            goto label_3b1e80;
        }
    }
    ctx->pc = 0x3B1E74u;
    // 0x3b1e74: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x3B1E74u;
    {
        const bool branch_taken_0x3b1e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1E74u;
        // 0x3b1e78: 0xa2600122  sb          $zero, 0x122($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 290), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1e74) {
            ctx->pc = 0x3B1FF8u;
            goto label_3b1ff8;
        }
    }
    ctx->pc = 0x3B1E7Cu;
    // 0x3b1e7c: 0x0  nop
    ctx->pc = 0x3b1e7cu;
    // NOP
label_3b1e80:
    // 0x3b1e80: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B1E80u;
    {
        const bool branch_taken_0x3b1e80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b1e80) {
            ctx->pc = 0x3B1EA0u;
            goto label_3b1ea0;
        }
    }
    ctx->pc = 0x3B1E88u;
    // 0x3b1e88: 0x92232ac1  lbu         $v1, 0x2AC1($s1)
    ctx->pc = 0x3b1e88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10945)));
    // 0x3b1e8c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B1E8Cu;
    {
        const bool branch_taken_0x3b1e8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B1E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1E8Cu;
        // 0x3b1e90: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1e8c) {
            ctx->pc = 0x3B1EA0u;
            goto label_3b1ea0;
        }
    }
    ctx->pc = 0x3B1E94u;
    // 0x3b1e94: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x3B1E94u;
    {
        const bool branch_taken_0x3b1e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1E94u;
        // 0x3b1e98: 0xa2630122  sb          $v1, 0x122($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 290), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1e94) {
            ctx->pc = 0x3B1FF8u;
            goto label_3b1ff8;
        }
    }
    ctx->pc = 0x3B1E9Cu;
    // 0x3b1e9c: 0x0  nop
    ctx->pc = 0x3b1e9cu;
    // NOP
label_3b1ea0:
    // 0x3b1ea0: 0x8e630124  lw          $v1, 0x124($s3)
    ctx->pc = 0x3b1ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 292)));
    // 0x3b1ea4: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x3b1ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x3b1ea8: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x3b1ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x3b1eac: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3B1EACu;
    {
        const bool branch_taken_0x3b1eac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b1eac) {
            ctx->pc = 0x3B1EF8u;
            goto label_3b1ef8;
        }
    }
    ctx->pc = 0x3B1EB4u;
    // 0x3b1eb4: 0x92630122  lbu         $v1, 0x122($s3)
    ctx->pc = 0x3b1eb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 290)));
    // 0x3b1eb8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x3b1eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x3b1ebc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3b1ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3b1ec0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b1ec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b1ec4: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x3b1ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x3b1ec8: 0xa2620122  sb          $v0, 0x122($s3)
    ctx->pc = 0x3b1ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 290), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b1ecc: 0xc6610084  lwc1        $f1, 0x84($s3)
    ctx->pc = 0x3b1eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b1ed0: 0xc09681c  jal         func_25A070
    ctx->pc = 0x3B1ED0u;
    SET_GPR_U32(ctx, 31, 0x3B1ED8u);
    ctx->pc = 0x3B1ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1ED0u;
    // 0x3b1ed4: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x3B1ED0u, 0x3B1ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1ED8u;
label_3b1ed8:
    // 0x3b1ed8: 0xe6600084  swc1        $f0, 0x84($s3)
    ctx->pc = 0x3b1ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 132), bits); }
    // 0x3b1edc: 0x3c03ffbf  lui         $v1, 0xFFBF
    ctx->pc = 0x3b1edcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65471 << 16));
    // 0x3b1ee0: 0xe6600094  swc1        $f0, 0x94($s3)
    ctx->pc = 0x3b1ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 148), bits); }
    // 0x3b1ee4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3b1ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3b1ee8: 0x8e640124  lw          $a0, 0x124($s3)
    ctx->pc = 0x3b1ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 292)));
    // 0x3b1eec: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3b1eecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3b1ef0: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x3B1EF0u;
    {
        const bool branch_taken_0x3b1ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1EF0u;
        // 0x3b1ef4: 0xae630124  sw          $v1, 0x124($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 292), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1ef0) {
            ctx->pc = 0x3B1FF8u;
            goto label_3b1ff8;
        }
    }
    ctx->pc = 0x3B1EF8u;
label_3b1ef8:
    // 0x3b1ef8: 0x92650122  lbu         $a1, 0x122($s3)
    ctx->pc = 0x3b1ef8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 290)));
    // 0x3b1efc: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x3b1efcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x3b1f00: 0x27848060  addiu       $a0, $gp, -0x7FA0
    ctx->pc = 0x3b1f00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x3b1f04: 0x24635f10  addiu       $v1, $v1, 0x5F10
    ctx->pc = 0x3b1f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24336));
    // 0x3b1f08: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x3b1f08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x3b1f0c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3b1f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3b1f10: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3b1f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3b1f14: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3b1f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b1f18: 0x90850641  lbu         $a1, 0x641($a0)
    ctx->pc = 0x3b1f18u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1601)));
    // 0x3b1f1c: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x3b1f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3b1f20: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3b1f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3b1f24: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x3b1f24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3b1f28: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x3b1f28u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3b1f2c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3b1f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3b1f30: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3b1f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3b1f34: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3b1f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3b1f38: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x3b1f38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x3b1f3c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3B1F3Cu;
    {
        const bool branch_taken_0x3b1f3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b1f3c) {
            ctx->pc = 0x3B1F68u;
            goto label_3b1f68;
        }
    }
    ctx->pc = 0x3B1F44u;
    // 0x3b1f44: 0xae600118  sw          $zero, 0x118($s3)
    ctx->pc = 0x3b1f44u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 280), GPR_U32(ctx, 0));
    // 0x3b1f48: 0x8e630124  lw          $v1, 0x124($s3)
    ctx->pc = 0x3b1f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 292)));
    // 0x3b1f4c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x3b1f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x3b1f50: 0xae630124  sw          $v1, 0x124($s3)
    ctx->pc = 0x3b1f50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 292), GPR_U32(ctx, 3));
    // 0x3b1f54: 0x8e630124  lw          $v1, 0x124($s3)
    ctx->pc = 0x3b1f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 292)));
    // 0x3b1f58: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x3b1f58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x3b1f5c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x3B1F5Cu;
    {
        const bool branch_taken_0x3b1f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1F5Cu;
        // 0x3b1f60: 0xae630124  sw          $v1, 0x124($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 292), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1f5c) {
            ctx->pc = 0x3B1FF8u;
            goto label_3b1ff8;
        }
    }
    ctx->pc = 0x3B1F64u;
    // 0x3b1f64: 0x0  nop
    ctx->pc = 0x3b1f64u;
    // NOP
label_3b1f68:
    // 0x3b1f68: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x3b1f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3b1f6c: 0xc096988  jal         func_25A620
    ctx->pc = 0x3B1F6Cu;
    SET_GPR_U32(ctx, 31, 0x3B1F74u);
    ctx->pc = 0x3B1F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1F6Cu;
    // 0x3b1f70: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A620u, 0x3B1F6Cu, 0x3B1F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1F74u;
label_3b1f74:
    // 0x3b1f74: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x3b1f74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x3b1f78: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3b1f78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b1f7c: 0x0  nop
    ctx->pc = 0x3b1f7cu;
    // NOP
    // 0x3b1f80: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b1f80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b1f84: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
    ctx->pc = 0x3B1F84u;
    {
        const bool branch_taken_0x3b1f84 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3B1F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1F84u;
        // 0x3b1f88: 0x3c010081  lui         $at, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1f84) {
            ctx->pc = 0x3B1FF8u;
            goto label_3b1ff8;
        }
    }
    ctx->pc = 0x3B1F8Cu;
    // 0x3b1f8c: 0x8c24fde8  lw          $a0, -0x218($at)
    ctx->pc = 0x3b1f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966760)));
    // 0x3b1f90: 0xc096988  jal         func_25A620
    ctx->pc = 0x3B1F90u;
    SET_GPR_U32(ctx, 31, 0x3B1F98u);
    ctx->pc = 0x3B1F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1F90u;
    // 0x3b1f94: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A620u, 0x3B1F90u, 0x3B1F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1F98u;
label_3b1f98:
    // 0x3b1f98: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3b1f98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3b1f9c: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x3b1f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x3b1fa0: 0x8c24fde8  lw          $a0, -0x218($at)
    ctx->pc = 0x3b1fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x80FDE8u));
    // 0x3b1fa4: 0xc096988  jal         func_25A620
    ctx->pc = 0x3B1FA4u;
    SET_GPR_U32(ctx, 31, 0x3B1FACu);
    ctx->pc = 0x3B1FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1FA4u;
    // 0x3b1fa8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A620u, 0x3B1FA4u, 0x3B1FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1FACu;
label_3b1fac:
    // 0x3b1fac: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3b1facu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b1fb0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3B1FB0u;
    {
        const bool branch_taken_0x3b1fb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b1fb0) {
            ctx->pc = 0x3B1FC0u;
            goto label_3b1fc0;
        }
    }
    ctx->pc = 0x3B1FB8u;
    // 0x3b1fb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B1FB8u;
    {
        const bool branch_taken_0x3b1fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1FB8u;
        // 0x3b1fbc: 0xa2600122  sb          $zero, 0x122($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 290), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1fb8) {
            ctx->pc = 0x3B1FC8u;
            goto label_3b1fc8;
        }
    }
    ctx->pc = 0x3B1FC0u;
label_3b1fc0:
    // 0x3b1fc0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b1fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b1fc4: 0xa2630122  sb          $v1, 0x122($s3)
    ctx->pc = 0x3b1fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 290), (uint8_t)GPR_U32(ctx, 3));
label_3b1fc8:
    // 0x3b1fc8: 0x92650122  lbu         $a1, 0x122($s3)
    ctx->pc = 0x3b1fc8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 290)));
    // 0x3b1fcc: 0x27848060  addiu       $a0, $gp, -0x7FA0
    ctx->pc = 0x3b1fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x3b1fd0: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x3b1fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x3b1fd4: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x3b1fd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x3b1fd8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3b1fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3b1fdc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3b1fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3b1fe0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3b1fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b1fe4: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x3b1fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3b1fe8: 0xae6400f0  sw          $a0, 0xF0($s3)
    ctx->pc = 0x3b1fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 240), GPR_U32(ctx, 4));
    // 0x3b1fec: 0x8e640124  lw          $a0, 0x124($s3)
    ctx->pc = 0x3b1fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 292)));
    // 0x3b1ff0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x3b1ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3b1ff4: 0xae630124  sw          $v1, 0x124($s3)
    ctx->pc = 0x3b1ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 292), GPR_U32(ctx, 3));
label_3b1ff8:
    // 0x3b1ff8: 0x92660122  lbu         $a2, 0x122($s3)
    ctx->pc = 0x3b1ff8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 290)));
    // 0x3b1ffc: 0x3c033ae4  lui         $v1, 0x3AE4
    ctx->pc = 0x3b1ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15076 << 16));
    // 0x3b2000: 0x27858060  addiu       $a1, $gp, -0x7FA0
    ctx->pc = 0x3b2000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x3b2004: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x3b2004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3b2008: 0x3463c389  ori         $v1, $v1, 0xC389
    ctx->pc = 0x3b2008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)50057);
    // 0x3b200c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x3b200cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3b2010: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3b2010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3b2014: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x3b2014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3b2018: 0xae650030  sw          $a1, 0x30($s3)
    ctx->pc = 0x3b2018u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 5));
    // 0x3b201c: 0xa26400dd  sb          $a0, 0xDD($s3)
    ctx->pc = 0x3b201cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 221), (uint8_t)GPR_U32(ctx, 4));
    // 0x3b2020: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x3B2020u;
    {
        const bool branch_taken_0x3b2020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2020u;
        // 0x3b2024: 0xae6300b0  sw          $v1, 0xB0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2020) {
            ctx->pc = 0x3B2090u;
            goto label_3b2090;
        }
    }
    ctx->pc = 0x3B2028u;
label_3b2028:
    // 0x3b2028: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3b2028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3b202c: 0x90256c1c  lbu         $a1, 0x6C1C($at)
    ctx->pc = 0x3b202cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x3b2030: 0x27848060  addiu       $a0, $gp, -0x7FA0
    ctx->pc = 0x3b2030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x3b2034: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3b2034u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x3b2038: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3b2038u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3b203c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3b203cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3b2040: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3b2040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3b2044: 0xae640030  sw          $a0, 0x30($s3)
    ctx->pc = 0x3b2044u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 4));
    // 0x3b2048: 0x8e640124  lw          $a0, 0x124($s3)
    ctx->pc = 0x3b2048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 292)));
    // 0x3b204c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3b204cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3b2050: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3B2050u;
    {
        const bool branch_taken_0x3b2050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b2050) {
            ctx->pc = 0x3B2078u;
            goto label_3b2078;
        }
    }
    ctx->pc = 0x3B2058u;
    // 0x3b2058: 0x8e6500f0  lw          $a1, 0xF0($s3)
    ctx->pc = 0x3b2058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x3b205c: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3b205cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3b2060: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3B2060u;
    SET_GPR_U32(ctx, 31, 0x3B2068u);
    ctx->pc = 0x3B2064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2060u;
    // 0x3b2064: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3B2060u, 0x3B2068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2068u;
label_3b2068:
    // 0x3b2068: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B2068u;
    {
        const bool branch_taken_0x3b2068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b2068) {
            ctx->pc = 0x3B2078u;
            goto label_3b2078;
        }
    }
    ctx->pc = 0x3B2070u;
    // 0x3b2070: 0xae620030  sw          $v0, 0x30($s3)
    ctx->pc = 0x3b2070u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 2));
    // 0x3b2074: 0x0  nop
    ctx->pc = 0x3b2074u;
    // NOP
label_3b2078:
    // 0x3b2078: 0x8e630030  lw          $v1, 0x30($s3)
    ctx->pc = 0x3b2078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x3b207c: 0x12430004  beq         $s2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B207Cu;
    {
        const bool branch_taken_0x3b207c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b207c) {
            ctx->pc = 0x3B2090u;
            goto label_3b2090;
        }
    }
    ctx->pc = 0x3B2084u;
    // 0x3b2084: 0x8e630124  lw          $v1, 0x124($s3)
    ctx->pc = 0x3b2084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 292)));
    // 0x3b2088: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x3b2088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x3b208c: 0xae630124  sw          $v1, 0x124($s3)
    ctx->pc = 0x3b208cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 292), GPR_U32(ctx, 3));
label_3b2090:
    // 0x3b2090: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3b2090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b2094: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3b2094u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b2098: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3b2098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3b209c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3b209cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b20a0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3b20a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b20a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3b20a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b20a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3B20A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B20ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B20A8u;
        // 0x3b20ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B20A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B20B0u;
}
