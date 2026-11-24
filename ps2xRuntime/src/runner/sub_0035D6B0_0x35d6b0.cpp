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

// Function: sub_0035D6B0
// Address: 0x35d6b0 - 0x35d888
void sub_0035D6B0_0x35d6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D6B0_0x35d6b0");
#endif

    switch (ctx->pc) {
        case 0x35d700u: goto label_35d700;
        case 0x35d710u: goto label_35d710;
        case 0x35d750u: goto label_35d750;
        case 0x35d760u: goto label_35d760;
        case 0x35d7d0u: goto label_35d7d0;
        case 0x35d878u: goto label_35d878;
        default: break;
    }

    ctx->pc = 0x35d6b0u;

    // 0x35d6b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x35d6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x35d6b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x35d6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35d6b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35d6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35d6bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35d6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35d6c0: 0x90860521  lbu         $a2, 0x521($a0)
    ctx->pc = 0x35d6c0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x35d6c4: 0x10c3001e  beq         $a2, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x35D6C4u;
    {
        const bool branch_taken_0x35d6c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x35D6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D6C4u;
        // 0x35d6c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d6c4) {
            ctx->pc = 0x35D740u;
            goto label_35d740;
        }
    }
    ctx->pc = 0x35D6CCu;
    // 0x35d6cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35d6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d6d0: 0x10c30013  beq         $a2, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x35D6D0u;
    {
        const bool branch_taken_0x35d6d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x35d6d0) {
            ctx->pc = 0x35D720u;
            goto label_35d720;
        }
    }
    ctx->pc = 0x35D6D8u;
    // 0x35d6d8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x35D6D8u;
    {
        const bool branch_taken_0x35d6d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d6d8) {
            ctx->pc = 0x35D6E8u;
            goto label_35d6e8;
        }
    }
    ctx->pc = 0x35D6E0u;
    // 0x35d6e0: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x35D6E0u;
    {
        const bool branch_taken_0x35d6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d6e0) {
            ctx->pc = 0x35D878u;
            goto label_35d878;
        }
    }
    ctx->pc = 0x35D6E8u;
label_35d6e8:
    // 0x35d6e8: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x35D6E8u;
    {
        const bool branch_taken_0x35d6e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d6e8) {
            ctx->pc = 0x35D708u;
            goto label_35d708;
        }
    }
    ctx->pc = 0x35D6F0u;
    // 0x35d6f0: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x35d6f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x35d6f4: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x35d6f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x35d6f8: 0xc0a9d6c  jal         func_2A75B0
    ctx->pc = 0x35D6F8u;
    SET_GPR_U32(ctx, 31, 0x35D700u);
    ctx->pc = 0x35D6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D6F8u;
    // 0x35d6fc: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A75B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A75B0u, 0x35D6F8u, 0x35D700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D700u;
label_35d700:
    // 0x35d700: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x35D700u;
    {
        const bool branch_taken_0x35d700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D700u;
        // 0x35d704: 0xae020550  sw          $v0, 0x550($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1360), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d700) {
            ctx->pc = 0x35D710u;
            goto label_35d710;
        }
    }
    ctx->pc = 0x35D708u;
label_35d708:
    // 0x35d708: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x35D708u;
    SET_GPR_U32(ctx, 31, 0x35D710u);
    ctx->pc = 0x35D70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D708u;
    // 0x35d70c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x35D708u, 0x35D710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D710u;
label_35d710:
    // 0x35d710: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x35d710u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x35d714: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35d714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35d718: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x35D718u;
    {
        const bool branch_taken_0x35d718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D718u;
        // 0x35d71c: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d718) {
            ctx->pc = 0x35D878u;
            goto label_35d878;
        }
    }
    ctx->pc = 0x35D720u;
label_35d720:
    // 0x35d720: 0x86020526  lh          $v0, 0x526($s0)
    ctx->pc = 0x35d720u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1318)));
    // 0x35d724: 0xa6020512  sh          $v0, 0x512($s0)
    ctx->pc = 0x35d724u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x35d728: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x35d728u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x35d72c: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x35d72cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x35d730: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x35d730u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x35d734: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x35d734u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x35d738: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x35d738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x35d73c: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x35d73cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_35d740:
    // 0x35d740: 0x8e060550  lw          $a2, 0x550($s0)
    ctx->pc = 0x35d740u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
    // 0x35d744: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35d744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d748: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x35D748u;
    SET_GPR_U32(ctx, 31, 0x35D750u);
    ctx->pc = 0x35D74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D748u;
    // 0x35d74c: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x35D748u, 0x35D750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D750u;
label_35d750:
    // 0x35d750: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35D750u;
    {
        const bool branch_taken_0x35d750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35D754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D750u;
        // 0x35d754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d750) {
            ctx->pc = 0x35D760u;
            goto label_35d760;
        }
    }
    ctx->pc = 0x35D758u;
    // 0x35d758: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x35D758u;
    SET_GPR_U32(ctx, 31, 0x35D760u);
    ctx->pc = 0x35D75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D758u;
    // 0x35d75c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x35D758u, 0x35D760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D760u;
label_35d760:
    // 0x35d760: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x35d760u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x35d764: 0x28830019  slti        $v1, $a0, 0x19
    ctx->pc = 0x35d764u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x35d768: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x35D768u;
    {
        const bool branch_taken_0x35d768 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35D76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D768u;
        // 0x35d76c: 0x28810047  slti        $at, $a0, 0x47 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)71) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d768) {
            ctx->pc = 0x35D7D0u;
            goto label_35d7d0;
        }
    }
    ctx->pc = 0x35D770u;
    // 0x35d770: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x35D770u;
    {
        const bool branch_taken_0x35d770 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d770) {
            ctx->pc = 0x35D7D0u;
            goto label_35d7d0;
        }
    }
    ctx->pc = 0x35D778u;
    // 0x35d778: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x35d778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x35d77c: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x35d77cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x35d780: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x35d780u;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x35d784: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35d784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d788: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x35d788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35d78c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x35d78cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d790: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x35d790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x35d794: 0x7fa90020  sq          $t1, 0x20($sp)
    ctx->pc = 0x35d794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 9));
    // 0x35d798: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x35d798u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x35d79c: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x35d79cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x35d7a0: 0x7fa60030  sq          $a2, 0x30($sp)
    ctx->pc = 0x35d7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
    // 0x35d7a4: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x35d7a4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x35d7a8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x35d7a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x35d7ac: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x35d7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x35d7b0: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x35d7b0u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x35d7b4: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x35d7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x35d7b8: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x35d7b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x35d7bc: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x35d7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x35d7c0: 0x92060558  lbu         $a2, 0x558($s0)
    ctx->pc = 0x35d7c0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1368)));
    // 0x35d7c4: 0xc60c0554  lwc1        $f12, 0x554($s0)
    ctx->pc = 0x35d7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x35d7c8: 0xc0c0900  jal         func_302400
    ctx->pc = 0x35D7C8u;
    SET_GPR_U32(ctx, 31, 0x35D7D0u);
    ctx->pc = 0x35D7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D7C8u;
    // 0x35d7cc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x35D7C8u, 0x35D7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D7D0u;
label_35d7d0:
    // 0x35d7d0: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x35d7d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x35d7d4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x35D7D4u;
    {
        const bool branch_taken_0x35d7d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D7D4u;
        // 0x35d7d8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d7d4) {
            ctx->pc = 0x35D7E8u;
            goto label_35d7e8;
        }
    }
    ctx->pc = 0x35D7DCu;
    // 0x35d7dc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x35D7DCu;
    {
        const bool branch_taken_0x35d7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d7dc) {
            ctx->pc = 0x35D868u;
            goto label_35d868;
        }
    }
    ctx->pc = 0x35D7E4u;
    // 0x35d7e4: 0x0  nop
    ctx->pc = 0x35d7e4u;
    // NOP
label_35d7e8:
    // 0x35d7e8: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x35d7e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x35d7ec: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x35d7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x35d7f0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x35d7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x35d7f4: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x35d7f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x35d7f8: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x35d7f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x35d7fc: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x35D7FCu;
    {
        const bool branch_taken_0x35d7fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x35d7fc) {
            ctx->pc = 0x35D838u;
            goto label_35d838;
        }
    }
    ctx->pc = 0x35D804u;
    // 0x35d804: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x35d804u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x35d808: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x35d808u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x35d80c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x35D80Cu;
    {
        const bool branch_taken_0x35d80c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35D810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D80Cu;
        // 0x35d810: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d80c) {
            ctx->pc = 0x35D860u;
            goto label_35d860;
        }
    }
    ctx->pc = 0x35D814u;
    // 0x35d814: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35d814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d818: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x35d818u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x35d81c: 0x0  nop
    ctx->pc = 0x35d81cu;
    // NOP
    // 0x35d820: 0x0  nop
    ctx->pc = 0x35d820u;
    // NOP
    // 0x35d824: 0x2010  mfhi        $a0
    ctx->pc = 0x35d824u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x35d828: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x35d828u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x35d82c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x35D82Cu;
    {
        const bool branch_taken_0x35d82c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D82Cu;
        // 0x35d830: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d82c) {
            ctx->pc = 0x35D860u;
            goto label_35d860;
        }
    }
    ctx->pc = 0x35D834u;
    // 0x35d834: 0x0  nop
    ctx->pc = 0x35d834u;
    // NOP
label_35d838:
    // 0x35d838: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x35d838u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x35d83c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x35d83cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x35d840: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x35D840u;
    {
        const bool branch_taken_0x35d840 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35d840) {
            ctx->pc = 0x35D860u;
            goto label_35d860;
        }
    }
    ctx->pc = 0x35D848u;
    // 0x35d848: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x35d848u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x35d84c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35d84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d850: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x35d850u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x35d854: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x35D854u;
    {
        const bool branch_taken_0x35d854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D854u;
        // 0x35d858: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d854) {
            ctx->pc = 0x35D868u;
            goto label_35d868;
        }
    }
    ctx->pc = 0x35D85Cu;
    // 0x35d85c: 0x0  nop
    ctx->pc = 0x35d85cu;
    // NOP
label_35d860:
    // 0x35d860: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35d860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d864: 0x0  nop
    ctx->pc = 0x35d864u;
    // NOP
label_35d868:
    // 0x35d868: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x35D868u;
    {
        const bool branch_taken_0x35d868 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35D86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D868u;
        // 0x35d86c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d868) {
            ctx->pc = 0x35D878u;
            goto label_35d878;
        }
    }
    ctx->pc = 0x35D870u;
    // 0x35d870: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x35D870u;
    SET_GPR_U32(ctx, 31, 0x35D878u);
    ctx->pc = 0x35D874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D870u;
    // 0x35d874: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x35D870u, 0x35D878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D878u;
label_35d878:
    // 0x35d878: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35d878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d87c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35d87cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d880: 0x3e00008  jr          $ra
    ctx->pc = 0x35D880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D880u;
        // 0x35d884: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D888u;
}
