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

// Function: sub_003E9B90
// Address: 0x3e9b90 - 0x3e9c48
void sub_003E9B90_0x3e9b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E9B90_0x3e9b90");
#endif

    switch (ctx->pc) {
        case 0x3e9c10u: goto label_3e9c10;
        case 0x3e9c1cu: goto label_3e9c1c;
        default: break;
    }

    ctx->pc = 0x3e9b90u;

    // 0x3e9b90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e9b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e9b94: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3e9b94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e9b98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e9b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e9b9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e9b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3e9ba0: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x3e9ba0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3e9ba4: 0x1066001a  beq         $v1, $a2, . + 4 + (0x1A << 2)
    ctx->pc = 0x3E9BA4u;
    {
        const bool branch_taken_0x3e9ba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x3E9BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9BA4u;
        // 0x3e9ba8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9ba4) {
            ctx->pc = 0x3E9C10u;
            goto label_3e9c10;
        }
    }
    ctx->pc = 0x3E9BACu;
    // 0x3e9bac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E9BACu;
    {
        const bool branch_taken_0x3e9bac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9bac) {
            ctx->pc = 0x3E9BC0u;
            goto label_3e9bc0;
        }
    }
    ctx->pc = 0x3E9BB4u;
    // 0x3e9bb4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x3E9BB4u;
    {
        const bool branch_taken_0x3e9bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9bb4) {
            ctx->pc = 0x3E9C38u;
            goto label_3e9c38;
        }
    }
    ctx->pc = 0x3E9BBCu;
    // 0x3e9bbc: 0x0  nop
    ctx->pc = 0x3e9bbcu;
    // NOP
label_3e9bc0:
    // 0x3e9bc0: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3e9bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e9bc4: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3e9bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e9bc8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x3e9bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e9bcc: 0xa60507f2  sh          $a1, 0x7F2($s0)
    ctx->pc = 0x3e9bccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x3e9bd0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3e9bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3e9bd4: 0xa20507f5  sb          $a1, 0x7F5($s0)
    ctx->pc = 0x3e9bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x3e9bd8: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3e9bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3e9bdc: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x3e9bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x3e9be0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3e9be0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e9be4: 0xa2060821  sb          $a2, 0x821($s0)
    ctx->pc = 0x3e9be4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 6));
    // 0x3e9be8: 0xc60d28f0  lwc1        $f13, 0x28F0($s0)
    ctx->pc = 0x3e9be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3e9bec: 0x46006836  c.le.s      $f13, $f0
    ctx->pc = 0x3e9becu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e9bf0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3E9BF0u;
    {
        const bool branch_taken_0x3e9bf0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e9bf0) {
            ctx->pc = 0x3E9C00u;
            goto label_3e9c00;
        }
    }
    ctx->pc = 0x3E9BF8u;
    // 0x3e9bf8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3E9BF8u;
    {
        const bool branch_taken_0x3e9bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9BF8u;
        // 0x3e9bfc: 0xa2060780  sb          $a2, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9bf8) {
            ctx->pc = 0x3E9C38u;
            goto label_3e9c38;
        }
    }
    ctx->pc = 0x3E9C00u;
label_3e9c00:
    // 0x3e9c00: 0x3c02c396  lui         $v0, 0xC396
    ctx->pc = 0x3e9c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
    // 0x3e9c04: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3e9c04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3e9c08: 0xc0fa3fc  jal         func_3E8FF0
    ctx->pc = 0x3E9C08u;
    SET_GPR_U32(ctx, 31, 0x3E9C10u);
    ctx->pc = 0x3E8FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E8FF0u, 0x3E9C08u, 0x3E9C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9C10u;
label_3e9c10:
    // 0x3e9c10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e9c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9c14: 0xc0fa410  jal         func_3E9040
    ctx->pc = 0x3E9C14u;
    SET_GPR_U32(ctx, 31, 0x3E9C1Cu);
    ctx->pc = 0x3E9C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9C14u;
    // 0x3e9c18: 0x26050024  addiu       $a1, $s0, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E9040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E9040u, 0x3E9C14u, 0x3E9C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9C1Cu;
label_3e9c1c:
    // 0x3e9c1c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E9C1Cu;
    {
        const bool branch_taken_0x3e9c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9C1Cu;
        // 0x3e9c20: 0x3c044516  lui         $a0, 0x4516 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17686 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9c1c) {
            ctx->pc = 0x3E9C38u;
            goto label_3e9c38;
        }
    }
    ctx->pc = 0x3E9C24u;
    // 0x3e9c24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e9c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e9c28: 0x348454f6  ori         $a0, $a0, 0x54F6
    ctx->pc = 0x3e9c28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)21750);
    // 0x3e9c2c: 0xae040024  sw          $a0, 0x24($s0)
    ctx->pc = 0x3e9c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 4));
    // 0x3e9c30: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3e9c30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x3e9c34: 0x0  nop
    ctx->pc = 0x3e9c34u;
    // NOP
label_3e9c38:
    // 0x3e9c38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e9c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e9c3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e9c3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e9c40: 0x3e00008  jr          $ra
    ctx->pc = 0x3E9C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E9C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9C40u;
        // 0x3e9c44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9C40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E9C48u;
}
