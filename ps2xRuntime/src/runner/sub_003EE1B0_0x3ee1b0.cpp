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

// Function: sub_003EE1B0
// Address: 0x3ee1b0 - 0x3ee258
void sub_003EE1B0_0x3ee1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EE1B0_0x3ee1b0");
#endif

    switch (ctx->pc) {
        case 0x3ee210u: goto label_3ee210;
        case 0x3ee218u: goto label_3ee218;
        case 0x3ee220u: goto label_3ee220;
        case 0x3ee23cu: goto label_3ee23c;
        default: break;
    }

    ctx->pc = 0x3ee1b0u;

    // 0x3ee1b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ee1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ee1b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ee1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3ee1b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ee1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3ee1bc: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x3ee1bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3ee1c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ee1c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ee1c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3ee1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ee1c8: 0x1064000f  beq         $v1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x3EE1C8u;
    {
        const bool branch_taken_0x3ee1c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x3ee1c8) {
            ctx->pc = 0x3EE208u;
            goto label_3ee208;
        }
    }
    ctx->pc = 0x3EE1D0u;
    // 0x3ee1d0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EE1D0u;
    {
        const bool branch_taken_0x3ee1d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ee1d0) {
            ctx->pc = 0x3EE1E0u;
            goto label_3ee1e0;
        }
    }
    ctx->pc = 0x3EE1D8u;
    // 0x3ee1d8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x3EE1D8u;
    {
        const bool branch_taken_0x3ee1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ee1d8) {
            ctx->pc = 0x3EE248u;
            goto label_3ee248;
        }
    }
    ctx->pc = 0x3EE1E0u;
label_3ee1e0:
    // 0x3ee1e0: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3ee1e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ee1e4: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3ee1e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3ee1e8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3ee1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3ee1ec: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x3ee1ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ee1f0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3ee1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3ee1f4: 0xa20307f5  sb          $v1, 0x7F5($s0)
    ctx->pc = 0x3ee1f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 3));
    // 0x3ee1f8: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3ee1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3ee1fc: 0xae0207ec  sw          $v0, 0x7EC($s0)
    ctx->pc = 0x3ee1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 2));
    // 0x3ee200: 0xa2040821  sb          $a0, 0x821($s0)
    ctx->pc = 0x3ee200u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 4));
    // 0x3ee204: 0x0  nop
    ctx->pc = 0x3ee204u;
    // NOP
label_3ee208:
    // 0x3ee208: 0xc0fb6fc  jal         func_3EDBF0
    ctx->pc = 0x3EE208u;
    SET_GPR_U32(ctx, 31, 0x3EE210u);
    ctx->pc = 0x3EE20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE208u;
    // 0x3ee20c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EDBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDBF0u, 0x3EE208u, 0x3EE210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE210u;
label_3ee210:
    // 0x3ee210: 0xc0fb714  jal         func_3EDC50
    ctx->pc = 0x3EE210u;
    SET_GPR_U32(ctx, 31, 0x3EE218u);
    ctx->pc = 0x3EE214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE210u;
    // 0x3ee214: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EDC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDC50u, 0x3EE210u, 0x3EE218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE218u;
label_3ee218:
    // 0x3ee218: 0xc0fb724  jal         func_3EDC90
    ctx->pc = 0x3EE218u;
    SET_GPR_U32(ctx, 31, 0x3EE220u);
    ctx->pc = 0x3EE21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE218u;
    // 0x3ee21c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EDC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDC90u, 0x3EE218u, 0x3EE220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE220u;
label_3ee220:
    // 0x3ee220: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3EE220u;
    {
        const bool branch_taken_0x3ee220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ee220) {
            ctx->pc = 0x3EE248u;
            goto label_3ee248;
        }
    }
    ctx->pc = 0x3EE228u;
    // 0x3ee228: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x3ee228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x3ee22c: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x3ee22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3ee230: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3ee230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3ee234: 0xc097414  jal         func_25D050
    ctx->pc = 0x3EE234u;
    SET_GPR_U32(ctx, 31, 0x3EE23Cu);
    ctx->pc = 0x3EE238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE234u;
    // 0x3ee238: 0x26052b40  addiu       $a1, $s0, 0x2B40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 11072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D050u, 0x3EE234u, 0x3EE23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE23Cu;
label_3ee23c:
    // 0x3ee23c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3EE23Cu;
    {
        const bool branch_taken_0x3ee23c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE23Cu;
        // 0x3ee240: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee23c) {
            ctx->pc = 0x3EE248u;
            goto label_3ee248;
        }
    }
    ctx->pc = 0x3EE244u;
    // 0x3ee244: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3ee244u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_3ee248:
    // 0x3ee248: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ee248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ee24c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ee24cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ee250: 0x3e00008  jr          $ra
    ctx->pc = 0x3EE250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EE254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE250u;
        // 0x3ee254: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EE250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EE258u;
}
