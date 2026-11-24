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

// Function: sub_00368EC0
// Address: 0x368ec0 - 0x368f98
void sub_00368EC0_0x368ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00368EC0_0x368ec0");
#endif

    switch (ctx->pc) {
        case 0x368f5cu: goto label_368f5c;
        default: break;
    }

    ctx->pc = 0x368ec0u;

    // 0x368ec0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x368ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x368ec4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x368ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x368ec8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x368ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x368ecc: 0x27868378  addiu       $a2, $gp, -0x7C88
    ctx->pc = 0x368eccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935416));
    // 0x368ed0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x368ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x368ed4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x368ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x368ed8: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x368ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x368edc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x368edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x368ee0: 0x90872b24  lbu         $a3, 0x2B24($a0)
    ctx->pc = 0x368ee0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11044)));
    // 0x368ee4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x368ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x368ee8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x368ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x368eec: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x368eecu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x368ef0: 0xa3a60021  sb          $a2, 0x21($sp)
    ctx->pc = 0x368ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 6));
    // 0x368ef4: 0xa7a50038  sh          $a1, 0x38($sp)
    ctx->pc = 0x368ef4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 56), (uint16_t)GPR_U32(ctx, 5));
    // 0x368ef8: 0xa3a30023  sb          $v1, 0x23($sp)
    ctx->pc = 0x368ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 35), (uint8_t)GPR_U32(ctx, 3));
    // 0x368efc: 0xa3a20026  sb          $v0, 0x26($sp)
    ctx->pc = 0x368efcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 38), (uint8_t)GPR_U32(ctx, 2));
    // 0x368f00: 0xa3a00022  sb          $zero, 0x22($sp)
    ctx->pc = 0x368f00u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 34), (uint8_t)GPR_U32(ctx, 0));
    // 0x368f04: 0xa3a00024  sb          $zero, 0x24($sp)
    ctx->pc = 0x368f04u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 36), (uint8_t)GPR_U32(ctx, 0));
    // 0x368f08: 0xa3a00025  sb          $zero, 0x25($sp)
    ctx->pc = 0x368f08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 37), (uint8_t)GPR_U32(ctx, 0));
    // 0x368f0c: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x368f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368f10: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x368f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x368f14: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x368f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368f18: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x368f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x368f1c: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x368f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x368f20: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x368f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x368f24: 0x848200c2  lh          $v0, 0xC2($a0)
    ctx->pc = 0x368f24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 194)));
    // 0x368f28: 0xa7a20034  sh          $v0, 0x34($sp)
    ctx->pc = 0x368f28u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 52), (uint16_t)GPR_U32(ctx, 2));
    // 0x368f2c: 0xa3a00036  sb          $zero, 0x36($sp)
    ctx->pc = 0x368f2cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 54), (uint8_t)GPR_U32(ctx, 0));
    // 0x368f30: 0xa3a00027  sb          $zero, 0x27($sp)
    ctx->pc = 0x368f30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 39), (uint8_t)GPR_U32(ctx, 0));
    // 0x368f34: 0x90822b24  lbu         $v0, 0x2B24($a0)
    ctx->pc = 0x368f34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11044)));
    // 0x368f38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x368f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x368f3c: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x368f3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x368f40: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x368F40u;
    {
        const bool branch_taken_0x368f40 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x368F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368F40u;
        // 0x368f44: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368f40) {
            ctx->pc = 0x368F4Cu;
            goto label_368f4c;
        }
    }
    ctx->pc = 0x368F48u;
    // 0x368f48: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x368f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_368f4c:
    // 0x368f4c: 0xa3a20037  sb          $v0, 0x37($sp)
    ctx->pc = 0x368f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 55), (uint8_t)GPR_U32(ctx, 2));
    // 0x368f50: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x368f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x368f54: 0xc09a5a0  jal         func_269680
    ctx->pc = 0x368F54u;
    SET_GPR_U32(ctx, 31, 0x368F5Cu);
    ctx->pc = 0x368F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368F54u;
    // 0x368f58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269680u, 0x368F54u, 0x368F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368F5Cu;
label_368f5c:
    // 0x368f5c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x368F5Cu;
    {
        const bool branch_taken_0x368f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x368f5c) {
            ctx->pc = 0x368F80u;
            goto label_368f80;
        }
    }
    ctx->pc = 0x368F64u;
    // 0x368f64: 0x9203065c  lbu         $v1, 0x65C($s0)
    ctx->pc = 0x368f64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x368f68: 0xa0430780  sb          $v1, 0x780($v0)
    ctx->pc = 0x368f68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x368f6c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x368f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x368f70: 0xae022b20  sw          $v0, 0x2B20($s0)
    ctx->pc = 0x368f70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11040), GPR_U32(ctx, 2));
    // 0x368f74: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x368F74u;
    {
        const bool branch_taken_0x368f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x368F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368F74u;
        // 0x368f78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368f74) {
            ctx->pc = 0x368F88u;
            goto label_368f88;
        }
    }
    ctx->pc = 0x368F7Cu;
    // 0x368f7c: 0x0  nop
    ctx->pc = 0x368f7cu;
    // NOP
label_368f80:
    // 0x368f80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x368f80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368f84: 0x0  nop
    ctx->pc = 0x368f84u;
    // NOP
label_368f88:
    // 0x368f88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x368f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x368f8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x368f8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x368f90: 0x3e00008  jr          $ra
    ctx->pc = 0x368F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x368F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368F90u;
        // 0x368f94: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368F90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x368F98u;
}
