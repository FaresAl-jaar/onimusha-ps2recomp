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

// Function: sub_002CFFE0
// Address: 0x2cffe0 - 0x2d0080
void sub_002CFFE0_0x2cffe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CFFE0_0x2cffe0");
#endif

    switch (ctx->pc) {
        case 0x2d0058u: goto label_2d0058;
        case 0x2d006cu: goto label_2d006c;
        default: break;
    }

    ctx->pc = 0x2cffe0u;

    // 0x2cffe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cffe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cffe4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cffe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cffe8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cffe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cffec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cffecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cfff0: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x2cfff0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x2cfff4: 0x10650012  beq         $v1, $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2CFFF4u;
    {
        const bool branch_taken_0x2cfff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2CFFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFFF4u;
        // 0x2cfff8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfff4) {
            ctx->pc = 0x2D0040u;
            goto label_2d0040;
        }
    }
    ctx->pc = 0x2CFFFCu;
    // 0x2cfffc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CFFFCu;
    {
        const bool branch_taken_0x2cfffc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfffc) {
            ctx->pc = 0x2D0010u;
            goto label_2d0010;
        }
    }
    ctx->pc = 0x2D0004u;
    // 0x2d0004: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2D0004u;
    {
        const bool branch_taken_0x2d0004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0004) {
            ctx->pc = 0x2D0070u;
            goto label_2d0070;
        }
    }
    ctx->pc = 0x2D000Cu;
    // 0x2d000c: 0x0  nop
    ctx->pc = 0x2d000cu;
    // NOP
label_2d0010:
    // 0x2d0010: 0x7a0407a0  lq          $a0, 0x7A0($s0)
    ctx->pc = 0x2d0010u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 1952)));
    // 0x2d0014: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2d0014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2d0018: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2d0018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2d001c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x2d001cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x2d0020: 0x7e040090  sq          $a0, 0x90($s0)
    ctx->pc = 0x2d0020u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), GPR_VEC(ctx, 4));
    // 0x2d0024: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x2d0024u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d0028: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x2d0028u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d002c: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x2d002cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d0030: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x2d0030u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d0034: 0xae0207ec  sw          $v0, 0x7EC($s0)
    ctx->pc = 0x2d0034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 2));
    // 0x2d0038: 0xa2050821  sb          $a1, 0x821($s0)
    ctx->pc = 0x2d0038u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 5));
    // 0x2d003c: 0x0  nop
    ctx->pc = 0x2d003cu;
    // NOP
label_2d0040:
    // 0x2d0040: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x2d0040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x2d0044: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x2d0044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x2d0048: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x2d0048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x2d004c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2d004cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2d0050: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2D0050u;
    SET_GPR_U32(ctx, 31, 0x2D0058u);
    ctx->pc = 0x2D0054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0050u;
    // 0x2d0054: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2D0050u, 0x2D0058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0058u;
label_2d0058:
    // 0x2d0058: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x2d0058u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x2d005c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D005Cu;
    {
        const bool branch_taken_0x2d005c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D005Cu;
        // 0x2d0060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d005c) {
            ctx->pc = 0x2D0070u;
            goto label_2d0070;
        }
    }
    ctx->pc = 0x2D0064u;
    // 0x2d0064: 0xc0a012c  jal         func_2804B0
    ctx->pc = 0x2D0064u;
    SET_GPR_U32(ctx, 31, 0x2D006Cu);
    ctx->pc = 0x2804B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2804B0u, 0x2D0064u, 0x2D006Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D006Cu;
label_2d006c:
    // 0x2d006c: 0x0  nop
    ctx->pc = 0x2d006cu;
    // NOP
label_2d0070:
    // 0x2d0070: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d0070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0074: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d0074u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0078: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D007Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0078u;
        // 0x2d007c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0080u;
}
