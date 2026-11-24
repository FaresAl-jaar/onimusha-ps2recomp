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

// Function: sub_00281160
// Address: 0x281160 - 0x281220
void sub_00281160_0x281160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281160_0x281160");
#endif

    switch (ctx->pc) {
        case 0x28117cu: goto label_28117c;
        case 0x281210u: goto label_281210;
        default: break;
    }

    ctx->pc = 0x281160u;

    // 0x281160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x281160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x281164: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x281164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281168: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x281168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28116c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28116cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281170: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x281170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x281174: 0xc09ffb0  jal         func_27FEC0
    ctx->pc = 0x281174u;
    SET_GPR_U32(ctx, 31, 0x28117Cu);
    ctx->pc = 0x281178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281174u;
    // 0x281178: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27FEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27FEC0u, 0x281174u, 0x28117Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28117Cu;
label_28117c:
    // 0x28117c: 0x92040821  lbu         $a0, 0x821($s0)
    ctx->pc = 0x28117cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x281180: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x281180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x281184: 0x1083001e  beq         $a0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x281184u;
    {
        const bool branch_taken_0x281184 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x281188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281184u;
        // 0x281188: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281184) {
            ctx->pc = 0x281200u;
            goto label_281200;
        }
    }
    ctx->pc = 0x28118Cu;
    // 0x28118c: 0x10880018  beq         $a0, $t0, . + 4 + (0x18 << 2)
    ctx->pc = 0x28118Cu;
    {
        const bool branch_taken_0x28118c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 8));
        if (branch_taken_0x28118c) {
            ctx->pc = 0x2811F0u;
            goto label_2811f0;
        }
    }
    ctx->pc = 0x281194u;
    // 0x281194: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x281194u;
    {
        const bool branch_taken_0x281194 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x281194) {
            ctx->pc = 0x2811A8u;
            goto label_2811a8;
        }
    }
    ctx->pc = 0x28119Cu;
    // 0x28119c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x28119Cu;
    {
        const bool branch_taken_0x28119c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28119c) {
            ctx->pc = 0x281210u;
            goto label_281210;
        }
    }
    ctx->pc = 0x2811A4u;
    // 0x2811a4: 0x0  nop
    ctx->pc = 0x2811a4u;
    // NOP
label_2811a8:
    // 0x2811a8: 0x92070002  lbu         $a3, 0x2($s0)
    ctx->pc = 0x2811a8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2811ac: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x2811acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x2811b0: 0x92040838  lbu         $a0, 0x838($s0)
    ctx->pc = 0x2811b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2104)));
    // 0x2811b4: 0x24c66330  addiu       $a2, $a2, 0x6330
    ctx->pc = 0x2811b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25392));
    // 0x2811b8: 0x27858138  addiu       $a1, $gp, -0x7EC8
    ctx->pc = 0x2811b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934840));
    // 0x2811bc: 0x3c038004  lui         $v1, 0x8004
    ctx->pc = 0x2811bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32772 << 16));
    // 0x2811c0: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2811c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2811c4: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x2811c4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2811c8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2811c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2811cc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2811ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2811d0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2811d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2811d4: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x2811d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2811d8: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x2811d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x2811dc: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x2811dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x2811e0: 0xa60407f2  sh          $a0, 0x7F2($s0)
    ctx->pc = 0x2811e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 4));
    // 0x2811e4: 0xa20007f5  sb          $zero, 0x7F5($s0)
    ctx->pc = 0x2811e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 0));
    // 0x2811e8: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x2811e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x2811ec: 0xa2080821  sb          $t0, 0x821($s0)
    ctx->pc = 0x2811ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 8));
label_2811f0:
    // 0x2811f0: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x2811f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x2811f4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2811F4u;
    {
        const bool branch_taken_0x2811f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2811F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2811F4u;
        // 0x2811f8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2811f4) {
            ctx->pc = 0x281210u;
            goto label_281210;
        }
    }
    ctx->pc = 0x2811FCu;
    // 0x2811fc: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x2811fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_281200:
    // 0x281200: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x281200u;
    {
        const bool branch_taken_0x281200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x281204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281200u;
        // 0x281204: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281200) {
            ctx->pc = 0x281210u;
            goto label_281210;
        }
    }
    ctx->pc = 0x281208u;
    // 0x281208: 0xc0a012c  jal         func_2804B0
    ctx->pc = 0x281208u;
    SET_GPR_U32(ctx, 31, 0x281210u);
    ctx->pc = 0x2804B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2804B0u, 0x281208u, 0x281210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281210u;
label_281210:
    // 0x281210: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x281210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281214: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x281214u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281218: 0x3e00008  jr          $ra
    ctx->pc = 0x281218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28121Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281218u;
        // 0x28121c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281220u;
}
