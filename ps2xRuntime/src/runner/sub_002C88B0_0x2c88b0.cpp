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

// Function: sub_002C88B0
// Address: 0x2c88b0 - 0x2c89b0
void sub_002C88B0_0x2c88b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C88B0_0x2c88b0");
#endif

    switch (ctx->pc) {
        case 0x2c8998u: goto label_2c8998;
        default: break;
    }

    ctx->pc = 0x2c88b0u;

    // 0x2c88b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c88b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c88b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c88b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c88b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c88b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c88bc: 0x94820022  lhu         $v0, 0x22($a0)
    ctx->pc = 0x2c88bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x2c88c0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2C88C0u;
    {
        const bool branch_taken_0x2c88c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C88C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C88C0u;
        // 0x2c88c4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c88c0) {
            ctx->pc = 0x2C88F8u;
            goto label_2c88f8;
        }
    }
    ctx->pc = 0x2C88C8u;
    // 0x2c88c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2c88c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2c88cc: 0xa4820022  sh          $v0, 0x22($a0)
    ctx->pc = 0x2c88ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x2c88d0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2c88d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2c88d4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C88D4u;
    {
        const bool branch_taken_0x2c88d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c88d4) {
            ctx->pc = 0x2C88F8u;
            goto label_2c88f8;
        }
    }
    ctx->pc = 0x2C88DCu;
    // 0x2c88dc: 0x9082005f  lbu         $v0, 0x5F($a0)
    ctx->pc = 0x2c88dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 95)));
    // 0x2c88e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c88e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c88e4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2C88E4u;
    {
        const bool branch_taken_0x2c88e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c88e4) {
            ctx->pc = 0x2C8960u;
            goto label_2c8960;
        }
    }
    ctx->pc = 0x2C88ECu;
    // 0x2c88ec: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2C88ECu;
    {
        const bool branch_taken_0x2c88ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C88F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C88ECu;
        // 0x2c88f0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c88ec) {
            ctx->pc = 0x2C8960u;
            goto label_2c8960;
        }
    }
    ctx->pc = 0x2C88F4u;
    // 0x2c88f4: 0x0  nop
    ctx->pc = 0x2c88f4u;
    // NOP
label_2c88f8:
    // 0x2c88f8: 0x9083005f  lbu         $v1, 0x5F($a0)
    ctx->pc = 0x2c88f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 95)));
    // 0x2c88fc: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x2c88fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2c8900: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C8900u;
    {
        const bool branch_taken_0x2c8900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8900) {
            ctx->pc = 0x2C8928u;
            goto label_2c8928;
        }
    }
    ctx->pc = 0x2C8908u;
    // 0x2c8908: 0x94820058  lhu         $v0, 0x58($a0)
    ctx->pc = 0x2c8908u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x2c890c: 0x2841001f  slti        $at, $v0, 0x1F
    ctx->pc = 0x2c890cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x2c8910: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C8910u;
    {
        const bool branch_taken_0x2c8910 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8910u;
        // 0x2c8914: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8910) {
            ctx->pc = 0x2C8928u;
            goto label_2c8928;
        }
    }
    ctx->pc = 0x2C8918u;
    // 0x2c8918: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C8918u;
    {
        const bool branch_taken_0x2c8918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8918) {
            ctx->pc = 0x2C8960u;
            goto label_2c8960;
        }
    }
    ctx->pc = 0x2C8920u;
    // 0x2c8920: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2C8920u;
    {
        const bool branch_taken_0x2c8920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8920u;
        // 0x2c8924: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8920) {
            ctx->pc = 0x2C8960u;
            goto label_2c8960;
        }
    }
    ctx->pc = 0x2C8928u;
label_2c8928:
    // 0x2c8928: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x2c8928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x2c892c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C892Cu;
    {
        const bool branch_taken_0x2c892c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c892c) {
            ctx->pc = 0x2C8958u;
            goto label_2c8958;
        }
    }
    ctx->pc = 0x2C8934u;
    // 0x2c8934: 0x94820056  lhu         $v0, 0x56($a0)
    ctx->pc = 0x2c8934u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 86)));
    // 0x2c8938: 0x28410029  slti        $at, $v0, 0x29
    ctx->pc = 0x2c8938u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x2c893c: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C893Cu;
    {
        const bool branch_taken_0x2c893c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C893Cu;
        // 0x2c8940: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c893c) {
            ctx->pc = 0x2C8958u;
            goto label_2c8958;
        }
    }
    ctx->pc = 0x2C8944u;
    // 0x2c8944: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C8944u;
    {
        const bool branch_taken_0x2c8944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8944) {
            ctx->pc = 0x2C8960u;
            goto label_2c8960;
        }
    }
    ctx->pc = 0x2C894Cu;
    // 0x2c894c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C894Cu;
    {
        const bool branch_taken_0x2c894c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C894Cu;
        // 0x2c8950: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c894c) {
            ctx->pc = 0x2C8960u;
            goto label_2c8960;
        }
    }
    ctx->pc = 0x2C8954u;
    // 0x2c8954: 0x0  nop
    ctx->pc = 0x2c8954u;
    // NOP
label_2c8958:
    // 0x2c8958: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2C8958u;
    {
        const bool branch_taken_0x2c8958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C895Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8958u;
        // 0x2c895c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8958) {
            ctx->pc = 0x2C89A0u;
            goto label_2c89a0;
        }
    }
    ctx->pc = 0x2C8960u;
label_2c8960:
    // 0x2c8960: 0xa0a004ee  sb          $zero, 0x4EE($a1)
    ctx->pc = 0x2c8960u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1262), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c8964: 0xdca20500  ld          $v0, 0x500($a1)
    ctx->pc = 0x2c8964u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 1280)));
    // 0x2c8968: 0x34420801  ori         $v0, $v0, 0x801
    ctx->pc = 0x2c8968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2049);
    // 0x2c896c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C896Cu;
    {
        const bool branch_taken_0x2c896c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C896Cu;
        // 0x2c8970: 0xfca20500  sd          $v0, 0x500($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 1280), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c896c) {
            ctx->pc = 0x2C8990u;
            goto label_2c8990;
        }
    }
    ctx->pc = 0x2C8974u;
    // 0x2c8974: 0xc4820014  lwc1        $f2, 0x14($a0)
    ctx->pc = 0x2c8974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c8978: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x2c8978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c897c: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x2c897cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c8980: 0xe4820008  swc1        $f2, 0x8($a0)
    ctx->pc = 0x2c8980u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2c8984: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x2c8984u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2c8988: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8988u;
    {
        const bool branch_taken_0x2c8988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8988u;
        // 0x2c898c: 0xe4800010  swc1        $f0, 0x10($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8988) {
            ctx->pc = 0x2C8998u;
            goto label_2c8998;
        }
    }
    ctx->pc = 0x2C8990u;
label_2c8990:
    // 0x2c8990: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C8990u;
    SET_GPR_U32(ctx, 31, 0x2C8998u);
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C8990u, 0x2C8998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8998u;
label_2c8998:
    // 0x2c8998: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x2c8998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c899c: 0x0  nop
    ctx->pc = 0x2c899cu;
    // NOP
label_2c89a0:
    // 0x2c89a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c89a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c89a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c89a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c89a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C89A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C89ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C89A8u;
        // 0x2c89ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C89A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C89B0u;
}
