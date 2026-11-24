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

// Function: sub_003DEDA0
// Address: 0x3deda0 - 0x3df010
void sub_003DEDA0_0x3deda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DEDA0_0x3deda0");
#endif

    switch (ctx->pc) {
        case 0x3dedf0u: goto label_3dedf0;
        case 0x3dee28u: goto label_3dee28;
        case 0x3dee38u: goto label_3dee38;
        case 0x3dee88u: goto label_3dee88;
        case 0x3dee9cu: goto label_3dee9c;
        case 0x3deeacu: goto label_3deeac;
        case 0x3deec8u: goto label_3deec8;
        case 0x3deed8u: goto label_3deed8;
        case 0x3def30u: goto label_3def30;
        case 0x3def48u: goto label_3def48;
        case 0x3def54u: goto label_3def54;
        case 0x3df000u: goto label_3df000;
        default: break;
    }

    ctx->pc = 0x3deda0u;

    // 0x3deda0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3deda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3deda4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3deda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3deda8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3deda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3dedac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3dedacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3dedb0: 0x90860521  lbu         $a2, 0x521($a0)
    ctx->pc = 0x3dedb0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x3dedb4: 0x10c3002c  beq         $a2, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x3DEDB4u;
    {
        const bool branch_taken_0x3dedb4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x3DEDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEDB4u;
        // 0x3dedb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dedb4) {
            ctx->pc = 0x3DEE68u;
            goto label_3dee68;
        }
    }
    ctx->pc = 0x3DEDBCu;
    // 0x3dedbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3dedbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3dedc0: 0x10c30021  beq         $a2, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x3DEDC0u;
    {
        const bool branch_taken_0x3dedc0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3dedc0) {
            ctx->pc = 0x3DEE48u;
            goto label_3dee48;
        }
    }
    ctx->pc = 0x3DEDC8u;
    // 0x3dedc8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DEDC8u;
    {
        const bool branch_taken_0x3dedc8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dedc8) {
            ctx->pc = 0x3DEDD8u;
            goto label_3dedd8;
        }
    }
    ctx->pc = 0x3DEDD0u;
    // 0x3dedd0: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x3DEDD0u;
    {
        const bool branch_taken_0x3dedd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dedd0) {
            ctx->pc = 0x3DF000u;
            goto label_3df000;
        }
    }
    ctx->pc = 0x3DEDD8u;
label_3dedd8:
    // 0x3dedd8: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x3DEDD8u;
    {
        const bool branch_taken_0x3dedd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dedd8) {
            ctx->pc = 0x3DEE30u;
            goto label_3dee30;
        }
    }
    ctx->pc = 0x3DEDE0u;
    // 0x3dede0: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x3dede0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x3dede4: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x3dede4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x3dede8: 0xc0aaae4  jal         func_2AAB90
    ctx->pc = 0x3DEDE8u;
    SET_GPR_U32(ctx, 31, 0x3DEDF0u);
    ctx->pc = 0x3DEDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEDE8u;
    // 0x3dedec: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAB90u, 0x3DEDE8u, 0x3DEDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEDF0u;
label_3dedf0:
    // 0x3dedf0: 0xae020560  sw          $v0, 0x560($s0)
    ctx->pc = 0x3dedf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 2));
    // 0x3dedf4: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3dedf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3dedf8: 0x9203052e  lbu         $v1, 0x52E($s0)
    ctx->pc = 0x3dedf8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x3dedfc: 0x3c022c00  lui         $v0, 0x2C00
    ctx->pc = 0x3dedfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11264 << 16));
    // 0x3dee00: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3dee00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3dee04: 0x34455802  ori         $a1, $v0, 0x5802
    ctx->pc = 0x3dee04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22530);
    // 0x3dee08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3dee08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dee0c: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x3dee0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3dee10: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3dee10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dee14: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3dee14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dee18: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3dee18u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dee1c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3dee1cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dee20: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3DEE20u;
    SET_GPR_U32(ctx, 31, 0x3DEE28u);
    ctx->pc = 0x3DEE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEE20u;
    // 0x3dee24: 0xffa30000  sd          $v1, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3DEE20u, 0x3DEE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEE28u;
label_3dee28:
    // 0x3dee28: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3DEE28u;
    {
        const bool branch_taken_0x3dee28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dee28) {
            ctx->pc = 0x3DEE38u;
            goto label_3dee38;
        }
    }
    ctx->pc = 0x3DEE30u;
label_3dee30:
    // 0x3dee30: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3DEE30u;
    SET_GPR_U32(ctx, 31, 0x3DEE38u);
    ctx->pc = 0x3DEE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEE30u;
    // 0x3dee34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3DEE30u, 0x3DEE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEE38u;
label_3dee38:
    // 0x3dee38: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x3dee38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x3dee3c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3dee3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3dee40: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x3DEE40u;
    {
        const bool branch_taken_0x3dee40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DEE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEE40u;
        // 0x3dee44: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dee40) {
            ctx->pc = 0x3DF000u;
            goto label_3df000;
        }
    }
    ctx->pc = 0x3DEE48u;
label_3dee48:
    // 0x3dee48: 0x86020526  lh          $v0, 0x526($s0)
    ctx->pc = 0x3dee48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1318)));
    // 0x3dee4c: 0xa6020512  sh          $v0, 0x512($s0)
    ctx->pc = 0x3dee4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3dee50: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x3dee50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3dee54: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x3dee54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3dee58: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x3dee58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3dee5c: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x3dee5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x3dee60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3dee60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3dee64: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x3dee64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3dee68:
    // 0x3dee68: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3dee68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3dee6c: 0xc6000570  lwc1        $f0, 0x570($s0)
    ctx->pc = 0x3dee6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3dee70: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x3dee70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x3dee74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3dee74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3dee78: 0xc60c0024  lwc1        $f12, 0x24($s0)
    ctx->pc = 0x3dee78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3dee7c: 0xc60d0554  lwc1        $f13, 0x554($s0)
    ctx->pc = 0x3dee7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3dee80: 0xc097480  jal         func_25D200
    ctx->pc = 0x3DEE80u;
    SET_GPR_U32(ctx, 31, 0x3DEE88u);
    ctx->pc = 0x3DEE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEE80u;
    // 0x3dee84: 0x46000b82  mul.s       $f14, $f1, $f0 (Delay Slot)
    ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D200u, 0x3DEE80u, 0x3DEE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEE88u;
label_3dee88:
    // 0x3dee88: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x3dee88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x3dee8c: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x3dee8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3dee90: 0xc60c056c  lwc1        $f12, 0x56C($s0)
    ctx->pc = 0x3dee90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3dee94: 0xc097448  jal         func_25D120
    ctx->pc = 0x3DEE94u;
    SET_GPR_U32(ctx, 31, 0x3DEE9Cu);
    ctx->pc = 0x3DEE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEE94u;
    // 0x3dee98: 0x26050550  addiu       $a1, $s0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D120u, 0x3DEE94u, 0x3DEE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEE9Cu;
label_3dee9c:
    // 0x3dee9c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3DEE9Cu;
    {
        const bool branch_taken_0x3dee9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DEEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEE9Cu;
        // 0x3deea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dee9c) {
            ctx->pc = 0x3DEEB8u;
            goto label_3deeb8;
        }
    }
    ctx->pc = 0x3DEEA4u;
    // 0x3deea4: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3DEEA4u;
    SET_GPR_U32(ctx, 31, 0x3DEEACu);
    ctx->pc = 0x3DEEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEEA4u;
    // 0x3deea8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3DEEA4u, 0x3DEEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEEACu;
label_3deeac:
    // 0x3deeac: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x3DEEACu;
    {
        const bool branch_taken_0x3deeac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3deeac) {
            ctx->pc = 0x3DF000u;
            goto label_3df000;
        }
    }
    ctx->pc = 0x3DEEB4u;
    // 0x3deeb4: 0x0  nop
    ctx->pc = 0x3deeb4u;
    // NOP
label_3deeb8:
    // 0x3deeb8: 0x8e060560  lw          $a2, 0x560($s0)
    ctx->pc = 0x3deeb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1376)));
    // 0x3deebc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3deebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3deec0: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x3DEEC0u;
    SET_GPR_U32(ctx, 31, 0x3DEEC8u);
    ctx->pc = 0x3DEEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEEC0u;
    // 0x3deec4: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x3DEEC0u, 0x3DEEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEEC8u;
label_3deec8:
    // 0x3deec8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DEEC8u;
    {
        const bool branch_taken_0x3deec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DEECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEEC8u;
        // 0x3deecc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3deec8) {
            ctx->pc = 0x3DEED8u;
            goto label_3deed8;
        }
    }
    ctx->pc = 0x3DEED0u;
    // 0x3deed0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3DEED0u;
    SET_GPR_U32(ctx, 31, 0x3DEED8u);
    ctx->pc = 0x3DEED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEED0u;
    // 0x3deed4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3DEED0u, 0x3DEED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEED8u;
label_3deed8:
    // 0x3deed8: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3deed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3deedc: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x3deedcu;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x3deee0: 0x27aa0060  addiu       $t2, $sp, 0x60
    ctx->pc = 0x3deee0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3deee4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3deee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3deee8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3deee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3deeec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3deeecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3deef0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3deef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3deef4: 0x7fa90030  sq          $t1, 0x30($sp)
    ctx->pc = 0x3deef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 9));
    // 0x3deef8: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x3deef8u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x3deefc: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3deefcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3def00: 0x7fa60040  sq          $a2, 0x40($sp)
    ctx->pc = 0x3def00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 6));
    // 0x3def04: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x3def04u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x3def08: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x3def08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x3def0c: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3def0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x3def10: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x3def10u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x3def14: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3def14u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3def18: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x3def18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3def1c: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x3def1cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x3def20: 0x92060568  lbu         $a2, 0x568($s0)
    ctx->pc = 0x3def20u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1384)));
    // 0x3def24: 0xc60c0564  lwc1        $f12, 0x564($s0)
    ctx->pc = 0x3def24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3def28: 0xc0c0900  jal         func_302400
    ctx->pc = 0x3DEF28u;
    SET_GPR_U32(ctx, 31, 0x3DEF30u);
    ctx->pc = 0x3DEF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEF28u;
    // 0x3def2c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x3DEF28u, 0x3DEF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEF30u;
label_3def30:
    // 0x3def30: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3DEF30u;
    {
        const bool branch_taken_0x3def30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3def30) {
            ctx->pc = 0x3DEF58u;
            goto label_3def58;
        }
    }
    ctx->pc = 0x3DEF38u;
    // 0x3def38: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x3def38u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x3def3c: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x3def3cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x3def40: 0xc0aab08  jal         func_2AAC20
    ctx->pc = 0x3DEF40u;
    SET_GPR_U32(ctx, 31, 0x3DEF48u);
    ctx->pc = 0x3DEF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEF40u;
    // 0x3def44: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC20u, 0x3DEF40u, 0x3DEF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEF48u;
label_3def48:
    // 0x3def48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3def48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3def4c: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3DEF4Cu;
    SET_GPR_U32(ctx, 31, 0x3DEF54u);
    ctx->pc = 0x3DEF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEF4Cu;
    // 0x3def50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3DEF4Cu, 0x3DEF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEF54u;
label_3def54:
    // 0x3def54: 0x0  nop
    ctx->pc = 0x3def54u;
    // NOP
label_3def58:
    // 0x3def58: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x3def58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x3def5c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DEF5Cu;
    {
        const bool branch_taken_0x3def5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DEF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEF5Cu;
        // 0x3def60: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3def5c) {
            ctx->pc = 0x3DEF70u;
            goto label_3def70;
        }
    }
    ctx->pc = 0x3DEF64u;
    // 0x3def64: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3DEF64u;
    {
        const bool branch_taken_0x3def64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3def64) {
            ctx->pc = 0x3DEFF0u;
            goto label_3deff0;
        }
    }
    ctx->pc = 0x3DEF6Cu;
    // 0x3def6c: 0x0  nop
    ctx->pc = 0x3def6cu;
    // NOP
label_3def70:
    // 0x3def70: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x3def70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3def74: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x3def74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x3def78: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3def78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3def7c: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3def7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3def80: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x3def80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x3def84: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3DEF84u;
    {
        const bool branch_taken_0x3def84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3def84) {
            ctx->pc = 0x3DEFC0u;
            goto label_3defc0;
        }
    }
    ctx->pc = 0x3DEF8Cu;
    // 0x3def8c: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x3def8cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3def90: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x3def90u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x3def94: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3DEF94u;
    {
        const bool branch_taken_0x3def94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DEF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEF94u;
        // 0x3def98: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3def94) {
            ctx->pc = 0x3DEFE8u;
            goto label_3defe8;
        }
    }
    ctx->pc = 0x3DEF9Cu;
    // 0x3def9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3def9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3defa0: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x3defa0u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3defa4: 0x0  nop
    ctx->pc = 0x3defa4u;
    // NOP
    // 0x3defa8: 0x0  nop
    ctx->pc = 0x3defa8u;
    // NOP
    // 0x3defac: 0x2010  mfhi        $a0
    ctx->pc = 0x3defacu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x3defb0: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3defb0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3defb4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3DEFB4u;
    {
        const bool branch_taken_0x3defb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DEFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEFB4u;
        // 0x3defb8: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3defb4) {
            ctx->pc = 0x3DEFE8u;
            goto label_3defe8;
        }
    }
    ctx->pc = 0x3DEFBCu;
    // 0x3defbc: 0x0  nop
    ctx->pc = 0x3defbcu;
    // NOP
label_3defc0:
    // 0x3defc0: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x3defc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x3defc4: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x3defc4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3defc8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3DEFC8u;
    {
        const bool branch_taken_0x3defc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3defc8) {
            ctx->pc = 0x3DEFE8u;
            goto label_3defe8;
        }
    }
    ctx->pc = 0x3DEFD0u;
    // 0x3defd0: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x3defd0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x3defd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3defd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3defd8: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x3defd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x3defdc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3DEFDCu;
    {
        const bool branch_taken_0x3defdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DEFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEFDCu;
        // 0x3defe0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3defdc) {
            ctx->pc = 0x3DEFF0u;
            goto label_3deff0;
        }
    }
    ctx->pc = 0x3DEFE4u;
    // 0x3defe4: 0x0  nop
    ctx->pc = 0x3defe4u;
    // NOP
label_3defe8:
    // 0x3defe8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3defe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3defec: 0x0  nop
    ctx->pc = 0x3defecu;
    // NOP
label_3deff0:
    // 0x3deff0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DEFF0u;
    {
        const bool branch_taken_0x3deff0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DEFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEFF0u;
        // 0x3deff4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3deff0) {
            ctx->pc = 0x3DF000u;
            goto label_3df000;
        }
    }
    ctx->pc = 0x3DEFF8u;
    // 0x3deff8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3DEFF8u;
    SET_GPR_U32(ctx, 31, 0x3DF000u);
    ctx->pc = 0x3DEFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEFF8u;
    // 0x3deffc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3DEFF8u, 0x3DF000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF000u;
label_3df000:
    // 0x3df000: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3df000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3df004: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3df004u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3df008: 0x3e00008  jr          $ra
    ctx->pc = 0x3DF008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DF00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF008u;
        // 0x3df00c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DF008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DF010u;
}
