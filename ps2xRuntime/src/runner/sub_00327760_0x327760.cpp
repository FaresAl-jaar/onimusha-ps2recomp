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

// Function: sub_00327760
// Address: 0x327760 - 0x327dc0
void sub_00327760_0x327760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327760_0x327760");
#endif

    switch (ctx->pc) {
        case 0x3277b4u: goto label_3277b4;
        case 0x3277c8u: goto label_3277c8;
        case 0x3278c0u: goto label_3278c0;
        case 0x327938u: goto label_327938;
        case 0x327948u: goto label_327948;
        case 0x3279e4u: goto label_3279e4;
        case 0x327a5cu: goto label_327a5c;
        case 0x327ae0u: goto label_327ae0;
        case 0x327af0u: goto label_327af0;
        case 0x327b44u: goto label_327b44;
        case 0x327bd4u: goto label_327bd4;
        case 0x327bf8u: goto label_327bf8;
        case 0x327c4cu: goto label_327c4c;
        case 0x327c60u: goto label_327c60;
        case 0x327c70u: goto label_327c70;
        case 0x327cc8u: goto label_327cc8;
        case 0x327ce0u: goto label_327ce0;
        case 0x327cf4u: goto label_327cf4;
        case 0x327d04u: goto label_327d04;
        case 0x327db0u: goto label_327db0;
        default: break;
    }

    ctx->pc = 0x327760u;

    // 0x327760: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x327760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x327764: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x327764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x327768: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x327768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x32776c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x32776cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x327770: 0x90860521  lbu         $a2, 0x521($a0)
    ctx->pc = 0x327770u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1313)));
    // 0x327774: 0x10c30020  beq         $a2, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x327774u;
    {
        const bool branch_taken_0x327774 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x327778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327774u;
        // 0x327778: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327774) {
            ctx->pc = 0x3277F8u;
            goto label_3277f8;
        }
    }
    ctx->pc = 0x32777Cu;
    // 0x32777c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32777cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x327780: 0x10c30015  beq         $a2, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x327780u;
    {
        const bool branch_taken_0x327780 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x327780) {
            ctx->pc = 0x3277D8u;
            goto label_3277d8;
        }
    }
    ctx->pc = 0x327788u;
    // 0x327788: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x327788u;
    {
        const bool branch_taken_0x327788 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x327788) {
            ctx->pc = 0x327798u;
            goto label_327798;
        }
    }
    ctx->pc = 0x327790u;
    // 0x327790: 0x10000187  b           . + 4 + (0x187 << 2)
    ctx->pc = 0x327790u;
    {
        const bool branch_taken_0x327790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327790) {
            ctx->pc = 0x327DB0u;
            goto label_327db0;
        }
    }
    ctx->pc = 0x327798u;
label_327798:
    // 0x327798: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x327798u;
    {
        const bool branch_taken_0x327798 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x327798) {
            ctx->pc = 0x3277C0u;
            goto label_3277c0;
        }
    }
    ctx->pc = 0x3277A0u;
    // 0x3277a0: 0x8ca6085c  lw          $a2, 0x85C($a1)
    ctx->pc = 0x3277a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2140)));
    // 0x3277a4: 0x9204053b  lbu         $a0, 0x53B($s0)
    ctx->pc = 0x3277a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1339)));
    // 0x3277a8: 0x9205052e  lbu         $a1, 0x52E($s0)
    ctx->pc = 0x3277a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x3277ac: 0xc0aada0  jal         func_2AB680
    ctx->pc = 0x3277ACu;
    SET_GPR_U32(ctx, 31, 0x3277B4u);
    ctx->pc = 0x3277B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3277ACu;
    // 0x3277b0: 0x26070020  addiu       $a3, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB680u, 0x3277ACu, 0x3277B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3277B4u;
label_3277b4:
    // 0x3277b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3277B4u;
    {
        const bool branch_taken_0x3277b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3277B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3277B4u;
        // 0x3277b8: 0xae020560  sw          $v0, 0x560($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3277b4) {
            ctx->pc = 0x3277C8u;
            goto label_3277c8;
        }
    }
    ctx->pc = 0x3277BCu;
    // 0x3277bc: 0x0  nop
    ctx->pc = 0x3277bcu;
    // NOP
label_3277c0:
    // 0x3277c0: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x3277C0u;
    SET_GPR_U32(ctx, 31, 0x3277C8u);
    ctx->pc = 0x3277C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3277C0u;
    // 0x3277c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x3277C0u, 0x3277C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3277C8u;
label_3277c8:
    // 0x3277c8: 0x92030521  lbu         $v1, 0x521($s0)
    ctx->pc = 0x3277c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x3277cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3277ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3277d0: 0x10000177  b           . + 4 + (0x177 << 2)
    ctx->pc = 0x3277D0u;
    {
        const bool branch_taken_0x3277d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3277D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3277D0u;
        // 0x3277d4: 0xa2030521  sb          $v1, 0x521($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3277d0) {
            ctx->pc = 0x327DB0u;
            goto label_327db0;
        }
    }
    ctx->pc = 0x3277D8u;
label_3277d8:
    // 0x3277d8: 0x86020526  lh          $v0, 0x526($s0)
    ctx->pc = 0x3277d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1318)));
    // 0x3277dc: 0xa6020512  sh          $v0, 0x512($s0)
    ctx->pc = 0x3277dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1298), (uint16_t)GPR_U32(ctx, 2));
    // 0x3277e0: 0xa6000510  sh          $zero, 0x510($s0)
    ctx->pc = 0x3277e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 0));
    // 0x3277e4: 0xa2000514  sb          $zero, 0x514($s0)
    ctx->pc = 0x3277e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 0));
    // 0x3277e8: 0xa2000515  sb          $zero, 0x515($s0)
    ctx->pc = 0x3277e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 0));
    // 0x3277ec: 0x92020521  lbu         $v0, 0x521($s0)
    ctx->pc = 0x3277ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1313)));
    // 0x3277f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3277f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3277f4: 0xa2020521  sb          $v0, 0x521($s0)
    ctx->pc = 0x3277f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1313), (uint8_t)GPR_U32(ctx, 2));
label_3277f8:
    // 0x3277f8: 0x92030571  lbu         $v1, 0x571($s0)
    ctx->pc = 0x3277f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1393)));
    // 0x3277fc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3277fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x327800: 0x106200d3  beq         $v1, $v0, . + 4 + (0xD3 << 2)
    ctx->pc = 0x327800u;
    {
        const bool branch_taken_0x327800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x327804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327800u;
        // 0x327804: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327800) {
            ctx->pc = 0x327B50u;
            goto label_327b50;
        }
    }
    ctx->pc = 0x327808u;
    // 0x327808: 0x10620097  beq         $v1, $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x327808u;
    {
        const bool branch_taken_0x327808 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x327808) {
            ctx->pc = 0x327A68u;
            goto label_327a68;
        }
    }
    ctx->pc = 0x327810u;
    // 0x327810: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x327810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x327814: 0x1062004a  beq         $v1, $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x327814u;
    {
        const bool branch_taken_0x327814 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x327814) {
            ctx->pc = 0x327940u;
            goto label_327940;
        }
    }
    ctx->pc = 0x32781Cu;
    // 0x32781c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x32781Cu;
    {
        const bool branch_taken_0x32781c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32781c) {
            ctx->pc = 0x327830u;
            goto label_327830;
        }
    }
    ctx->pc = 0x327824u;
    // 0x327824: 0x1000010a  b           . + 4 + (0x10A << 2)
    ctx->pc = 0x327824u;
    {
        const bool branch_taken_0x327824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327824) {
            ctx->pc = 0x327C50u;
            goto label_327c50;
        }
    }
    ctx->pc = 0x32782Cu;
    // 0x32782c: 0x0  nop
    ctx->pc = 0x32782cu;
    // NOP
label_327830:
    // 0x327830: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x327830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x327834: 0xc6000564  lwc1        $f0, 0x564($s0)
    ctx->pc = 0x327834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327838: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x327838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x32783c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x32783cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x327840: 0x0  nop
    ctx->pc = 0x327840u;
    // NOP
    // 0x327844: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x327844u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x327848: 0xe6000564  swc1        $f0, 0x564($s0)
    ctx->pc = 0x327848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1380), bits); }
    // 0x32784c: 0x92020572  lbu         $v0, 0x572($s0)
    ctx->pc = 0x32784cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1394)));
    // 0x327850: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x327850u;
    {
        const bool branch_taken_0x327850 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x327854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327850u;
        // 0x327854: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327850) {
            ctx->pc = 0x327864u;
            goto label_327864;
        }
    }
    ctx->pc = 0x327858u;
    // 0x327858: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x327858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32785c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32785Cu;
    {
        const bool branch_taken_0x32785c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32785Cu;
        // 0x327860: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32785c) {
            ctx->pc = 0x32787Cu;
            goto label_32787c;
        }
    }
    ctx->pc = 0x327864u;
label_327864:
    // 0x327864: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x327864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x327868: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x327868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32786c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32786cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x327870: 0x0  nop
    ctx->pc = 0x327870u;
    // NOP
    // 0x327874: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x327874u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x327878: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x327878u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_32787c:
    // 0x32787c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x32787cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x327880: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x327880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x327884: 0x3444cccd  ori         $a0, $v0, 0xCCCD
    ctx->pc = 0x327884u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x327888: 0x26050090  addiu       $a1, $s0, 0x90
    ctx->pc = 0x327888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x32788c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x32788cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x327890: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x327890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x327894: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x327894u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x327898: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x327898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x32789c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x32789cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3278a0: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x3278a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3278a4: 0x26060550  addiu       $a2, $s0, 0x550
    ctx->pc = 0x3278a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1360));
    // 0x3278a8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3278a8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3278ac: 0xc60c0564  lwc1        $f12, 0x564($s0)
    ctx->pc = 0x3278acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3278b0: 0x0  nop
    ctx->pc = 0x3278b0u;
    // NOP
    // 0x3278b4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3278b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3278b8: 0xc0768b4  jal         func_1DA2D0
    ctx->pc = 0x3278B8u;
    SET_GPR_U32(ctx, 31, 0x3278C0u);
    ctx->pc = 0x3278BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3278B8u;
    // 0x3278bc: 0x46001341  sub.s       $f13, $f2, $f0 (Delay Slot)
    ctx->f[13] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA2D0u, 0x3278B8u, 0x3278C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3278C0u;
label_3278c0:
    // 0x3278c0: 0x92020572  lbu         $v0, 0x572($s0)
    ctx->pc = 0x3278c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1394)));
    // 0x3278c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3278c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3278c8: 0xa2020572  sb          $v0, 0x572($s0)
    ctx->pc = 0x3278c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1394), (uint8_t)GPR_U32(ctx, 2));
    // 0x3278cc: 0x92020572  lbu         $v0, 0x572($s0)
    ctx->pc = 0x3278ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1394)));
    // 0x3278d0: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x3278d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3278d4: 0x144000de  bnez        $v0, . + 4 + (0xDE << 2)
    ctx->pc = 0x3278D4u;
    {
        const bool branch_taken_0x3278d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3278D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3278D4u;
        // 0x3278d8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3278d4) {
            ctx->pc = 0x327C50u;
            goto label_327c50;
        }
    }
    ctx->pc = 0x3278DCu;
    // 0x3278dc: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3278dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3278e0: 0xa2030571  sb          $v1, 0x571($s0)
    ctx->pc = 0x3278e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1393), (uint8_t)GPR_U32(ctx, 3));
    // 0x3278e4: 0x2442cc60  addiu       $v0, $v0, -0x33A0
    ctx->pc = 0x3278e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954080));
    // 0x3278e8: 0xa2000572  sb          $zero, 0x572($s0)
    ctx->pc = 0x3278e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1394), (uint8_t)GPR_U32(ctx, 0));
    // 0x3278ec: 0x92040574  lbu         $a0, 0x574($s0)
    ctx->pc = 0x3278ecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1396)));
    // 0x3278f0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3278f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3278f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3278f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3278f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3278f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3278fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3278fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x327900: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x327900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x327904: 0x10a000d2  beqz        $a1, . + 4 + (0xD2 << 2)
    ctx->pc = 0x327904u;
    {
        const bool branch_taken_0x327904 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x327904) {
            ctx->pc = 0x327C50u;
            goto label_327c50;
        }
    }
    ctx->pc = 0x32790Cu;
    // 0x32790c: 0x9202052e  lbu         $v0, 0x52E($s0)
    ctx->pc = 0x32790cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x327910: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x327910u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x327914: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x327914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x327918: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x327918u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32791c: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x32791cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x327920: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x327920u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327924: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x327924u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327928: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x327928u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32792c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x32792cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327930: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x327930u;
    SET_GPR_U32(ctx, 31, 0x327938u);
    ctx->pc = 0x327934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327930u;
    // 0x327934: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x327930u, 0x327938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327938u;
label_327938:
    // 0x327938: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x327938u;
    {
        const bool branch_taken_0x327938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327938) {
            ctx->pc = 0x327C50u;
            goto label_327c50;
        }
    }
    ctx->pc = 0x327940u;
label_327940:
    // 0x327940: 0xc0c9f70  jal         func_327DC0
    ctx->pc = 0x327940u;
    SET_GPR_U32(ctx, 31, 0x327948u);
    ctx->pc = 0x327944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327940u;
    // 0x327944: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327DC0u, 0x327940u, 0x327948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327948u;
label_327948:
    // 0x327948: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x327948u;
    {
        const bool branch_taken_0x327948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x327948) {
            ctx->pc = 0x327960u;
            goto label_327960;
        }
    }
    ctx->pc = 0x327950u;
    // 0x327950: 0xae000518  sw          $zero, 0x518($s0)
    ctx->pc = 0x327950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1304), GPR_U32(ctx, 0));
    // 0x327954: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x327954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x327958: 0xa2020571  sb          $v0, 0x571($s0)
    ctx->pc = 0x327958u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1393), (uint8_t)GPR_U32(ctx, 2));
    // 0x32795c: 0x0  nop
    ctx->pc = 0x32795cu;
    // NOP
label_327960:
    // 0x327960: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x327960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x327964: 0xc6010568  lwc1        $f1, 0x568($s0)
    ctx->pc = 0x327964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x327968: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x327968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x32796c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x32796cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x327970: 0xc6000564  lwc1        $f0, 0x564($s0)
    ctx->pc = 0x327970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327974: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x327974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x327978: 0x2442cc58  addiu       $v0, $v0, -0x33A8
    ctx->pc = 0x327978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954072));
    // 0x32797c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x32797cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x327980: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x327980u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x327984: 0xe6000564  swc1        $f0, 0x564($s0)
    ctx->pc = 0x327984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1380), bits); }
    // 0x327988: 0x92040574  lbu         $a0, 0x574($s0)
    ctx->pc = 0x327988u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1396)));
    // 0x32798c: 0xc6000564  lwc1        $f0, 0x564($s0)
    ctx->pc = 0x32798cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327990: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x327990u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x327994: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x327994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x327998: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x327998u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32799c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32799cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3279a0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x3279a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3279a4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3279a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3279a8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x3279A8u;
    {
        const bool branch_taken_0x3279a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3279a8) {
            ctx->pc = 0x3279B8u;
            goto label_3279b8;
        }
    }
    ctx->pc = 0x3279B0u;
    // 0x3279b0: 0xe6010564  swc1        $f1, 0x564($s0)
    ctx->pc = 0x3279b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1380), bits); }
    // 0x3279b4: 0x0  nop
    ctx->pc = 0x3279b4u;
    // NOP
label_3279b8:
    // 0x3279b8: 0x3c023e57  lui         $v0, 0x3E57
    ctx->pc = 0x3279b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15959 << 16));
    // 0x3279bc: 0x34430a3d  ori         $v1, $v0, 0xA3D
    ctx->pc = 0x3279bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2621);
    // 0x3279c0: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x3279c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x3279c4: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3279c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3279c8: 0x26050090  addiu       $a1, $s0, 0x90
    ctx->pc = 0x3279c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x3279cc: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x3279ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x3279d0: 0xc60c0564  lwc1        $f12, 0x564($s0)
    ctx->pc = 0x3279d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3279d4: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x3279d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3279d8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3279d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3279dc: 0xc0768b4  jal         func_1DA2D0
    ctx->pc = 0x3279DCu;
    SET_GPR_U32(ctx, 31, 0x3279E4u);
    ctx->pc = 0x3279E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3279DCu;
    // 0x3279e0: 0x26060550  addiu       $a2, $s0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA2D0u, 0x3279DCu, 0x3279E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3279E4u;
label_3279e4:
    // 0x3279e4: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x3279e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x3279e8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x3279e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x3279ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3279ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3279f0: 0x0  nop
    ctx->pc = 0x3279f0u;
    // NOP
    // 0x3279f4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3279f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3279f8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3279F8u;
    {
        const bool branch_taken_0x3279f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3279FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3279F8u;
        // 0x3279fc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3279f8) {
            ctx->pc = 0x327A08u;
            goto label_327a08;
        }
    }
    ctx->pc = 0x327A00u;
    // 0x327a00: 0xa2020571  sb          $v0, 0x571($s0)
    ctx->pc = 0x327a00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1393), (uint8_t)GPR_U32(ctx, 2));
    // 0x327a04: 0x0  nop
    ctx->pc = 0x327a04u;
    // NOP
label_327a08:
    // 0x327a08: 0x92040574  lbu         $a0, 0x574($s0)
    ctx->pc = 0x327a08u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1396)));
    // 0x327a0c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x327a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x327a10: 0x2442cc60  addiu       $v0, $v0, -0x33A0
    ctx->pc = 0x327a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954080));
    // 0x327a14: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x327a14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x327a18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x327a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x327a1c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x327a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x327a20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x327a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x327a24: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x327a24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x327a28: 0x10a00089  beqz        $a1, . + 4 + (0x89 << 2)
    ctx->pc = 0x327A28u;
    {
        const bool branch_taken_0x327a28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x327a28) {
            ctx->pc = 0x327C50u;
            goto label_327c50;
        }
    }
    ctx->pc = 0x327A30u;
    // 0x327a30: 0x9202052e  lbu         $v0, 0x52E($s0)
    ctx->pc = 0x327a30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x327a34: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x327a34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x327a38: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x327a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x327a3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x327a3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327a40: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x327a40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x327a44: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x327a44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x327a48: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x327a48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327a4c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x327a4cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327a50: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x327a50u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327a54: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x327A54u;
    SET_GPR_U32(ctx, 31, 0x327A5Cu);
    ctx->pc = 0x327A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327A54u;
    // 0x327a58: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x327A54u, 0x327A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327A5Cu;
label_327a5c:
    // 0x327a5c: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x327A5Cu;
    {
        const bool branch_taken_0x327a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327a5c) {
            ctx->pc = 0x327C50u;
            goto label_327c50;
        }
    }
    ctx->pc = 0x327A64u;
    // 0x327a64: 0x0  nop
    ctx->pc = 0x327a64u;
    // NOP
label_327a68:
    // 0x327a68: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x327a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x327a6c: 0xc6010568  lwc1        $f1, 0x568($s0)
    ctx->pc = 0x327a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x327a70: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x327a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x327a74: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x327a74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x327a78: 0xc6000564  lwc1        $f0, 0x564($s0)
    ctx->pc = 0x327a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327a7c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x327a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x327a80: 0x2442cc58  addiu       $v0, $v0, -0x33A8
    ctx->pc = 0x327a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954072));
    // 0x327a84: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x327a84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x327a88: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x327a88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x327a8c: 0xe6000564  swc1        $f0, 0x564($s0)
    ctx->pc = 0x327a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1380), bits); }
    // 0x327a90: 0x92040574  lbu         $a0, 0x574($s0)
    ctx->pc = 0x327a90u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1396)));
    // 0x327a94: 0xc6000564  lwc1        $f0, 0x564($s0)
    ctx->pc = 0x327a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327a98: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x327a98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x327a9c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x327a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x327aa0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x327aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x327aa4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x327aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x327aa8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x327aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x327aac: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x327aacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x327ab0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x327AB0u;
    {
        const bool branch_taken_0x327ab0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x327ab0) {
            ctx->pc = 0x327AC0u;
            goto label_327ac0;
        }
    }
    ctx->pc = 0x327AB8u;
    // 0x327ab8: 0xe6010564  swc1        $f1, 0x564($s0)
    ctx->pc = 0x327ab8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1380), bits); }
    // 0x327abc: 0x0  nop
    ctx->pc = 0x327abcu;
    // NOP
label_327ac0:
    // 0x327ac0: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x327ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x327ac4: 0xc6000564  lwc1        $f0, 0x564($s0)
    ctx->pc = 0x327ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327ac8: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x327ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x327acc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x327accu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x327ad0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x327ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x327ad4: 0x26050090  addiu       $a1, $s0, 0x90
    ctx->pc = 0x327ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x327ad8: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x327AD8u;
    SET_GPR_U32(ctx, 31, 0x327AE0u);
    ctx->pc = 0x327ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327AD8u;
    // 0x327adc: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x327AD8u, 0x327AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327AE0u;
label_327ae0:
    // 0x327ae0: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x327ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x327ae4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x327ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x327ae8: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x327AE8u;
    SET_GPR_U32(ctx, 31, 0x327AF0u);
    ctx->pc = 0x327AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327AE8u;
    // 0x327aec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x327AE8u, 0x327AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327AF0u;
label_327af0:
    // 0x327af0: 0x92040574  lbu         $a0, 0x574($s0)
    ctx->pc = 0x327af0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1396)));
    // 0x327af4: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x327af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x327af8: 0x2442cc60  addiu       $v0, $v0, -0x33A0
    ctx->pc = 0x327af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954080));
    // 0x327afc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x327afcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x327b00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x327b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x327b04: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x327b04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x327b08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x327b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x327b0c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x327b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x327b10: 0x10a0004f  beqz        $a1, . + 4 + (0x4F << 2)
    ctx->pc = 0x327B10u;
    {
        const bool branch_taken_0x327b10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x327b10) {
            ctx->pc = 0x327C50u;
            goto label_327c50;
        }
    }
    ctx->pc = 0x327B18u;
    // 0x327b18: 0x9202052e  lbu         $v0, 0x52E($s0)
    ctx->pc = 0x327b18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x327b1c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x327b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x327b20: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x327b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x327b24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x327b24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327b28: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x327b28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x327b2c: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x327b2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x327b30: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x327b30u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327b34: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x327b34u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327b38: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x327b38u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327b3c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x327B3Cu;
    SET_GPR_U32(ctx, 31, 0x327B44u);
    ctx->pc = 0x327B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327B3Cu;
    // 0x327b40: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x327B3Cu, 0x327B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327B44u;
label_327b44:
    // 0x327b44: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x327B44u;
    {
        const bool branch_taken_0x327b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327b44) {
            ctx->pc = 0x327C50u;
            goto label_327c50;
        }
    }
    ctx->pc = 0x327B4Cu;
    // 0x327b4c: 0x0  nop
    ctx->pc = 0x327b4cu;
    // NOP
label_327b50:
    // 0x327b50: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x327b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x327b54: 0xc6010568  lwc1        $f1, 0x568($s0)
    ctx->pc = 0x327b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x327b58: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x327b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x327b5c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x327b5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x327b60: 0xc6000564  lwc1        $f0, 0x564($s0)
    ctx->pc = 0x327b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327b64: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x327b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x327b68: 0x2442cc58  addiu       $v0, $v0, -0x33A8
    ctx->pc = 0x327b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954072));
    // 0x327b6c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x327b6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x327b70: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x327b70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x327b74: 0xe6000564  swc1        $f0, 0x564($s0)
    ctx->pc = 0x327b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1380), bits); }
    // 0x327b78: 0x92040574  lbu         $a0, 0x574($s0)
    ctx->pc = 0x327b78u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1396)));
    // 0x327b7c: 0xc6000564  lwc1        $f0, 0x564($s0)
    ctx->pc = 0x327b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327b80: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x327b80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x327b84: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x327b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x327b88: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x327b88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x327b8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x327b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x327b90: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x327b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x327b94: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x327b94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x327b98: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x327B98u;
    {
        const bool branch_taken_0x327b98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x327b98) {
            ctx->pc = 0x327BA8u;
            goto label_327ba8;
        }
    }
    ctx->pc = 0x327BA0u;
    // 0x327ba0: 0xe6010564  swc1        $f1, 0x564($s0)
    ctx->pc = 0x327ba0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1380), bits); }
    // 0x327ba4: 0x0  nop
    ctx->pc = 0x327ba4u;
    // NOP
label_327ba8:
    // 0x327ba8: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x327ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x327bac: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x327bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x327bb0: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x327bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x327bb4: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x327bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x327bb8: 0x26050090  addiu       $a1, $s0, 0x90
    ctx->pc = 0x327bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x327bbc: 0x34428885  ori         $v0, $v0, 0x8885
    ctx->pc = 0x327bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34949);
    // 0x327bc0: 0xc60c0564  lwc1        $f12, 0x564($s0)
    ctx->pc = 0x327bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x327bc4: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x327bc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x327bc8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x327bc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x327bcc: 0xc0768b4  jal         func_1DA2D0
    ctx->pc = 0x327BCCu;
    SET_GPR_U32(ctx, 31, 0x327BD4u);
    ctx->pc = 0x327BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327BCCu;
    // 0x327bd0: 0x26060550  addiu       $a2, $s0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA2D0u, 0x327BCCu, 0x327BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327BD4u;
label_327bd4:
    // 0x327bd4: 0x3c02471c  lui         $v0, 0x471C
    ctx->pc = 0x327bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18204 << 16));
    // 0x327bd8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x327bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x327bdc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x327bdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x327be0: 0x0  nop
    ctx->pc = 0x327be0u;
    // NOP
    // 0x327be4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x327be4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x327be8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x327BE8u;
    {
        const bool branch_taken_0x327be8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x327BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327BE8u;
        // 0x327bec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327be8) {
            ctx->pc = 0x327BF8u;
            goto label_327bf8;
        }
    }
    ctx->pc = 0x327BF0u;
    // 0x327bf0: 0xc0c9d34  jal         func_3274D0
    ctx->pc = 0x327BF0u;
    SET_GPR_U32(ctx, 31, 0x327BF8u);
    ctx->pc = 0x3274D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3274D0u, 0x327BF0u, 0x327BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327BF8u;
label_327bf8:
    // 0x327bf8: 0x92040574  lbu         $a0, 0x574($s0)
    ctx->pc = 0x327bf8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1396)));
    // 0x327bfc: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x327bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x327c00: 0x2442cc60  addiu       $v0, $v0, -0x33A0
    ctx->pc = 0x327c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954080));
    // 0x327c04: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x327c04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x327c08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x327c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x327c0c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x327c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x327c10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x327c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x327c14: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x327c14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x327c18: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x327C18u;
    {
        const bool branch_taken_0x327c18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x327c18) {
            ctx->pc = 0x327C50u;
            goto label_327c50;
        }
    }
    ctx->pc = 0x327C20u;
    // 0x327c20: 0x9202052e  lbu         $v0, 0x52E($s0)
    ctx->pc = 0x327c20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1326)));
    // 0x327c24: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x327c24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x327c28: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x327c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x327c2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x327c2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327c30: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x327c30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x327c34: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x327c34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x327c38: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x327c38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327c3c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x327c3cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327c40: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x327c40u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327c44: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x327C44u;
    SET_GPR_U32(ctx, 31, 0x327C4Cu);
    ctx->pc = 0x327C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327C44u;
    // 0x327c48: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x327C44u, 0x327C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327C4Cu;
label_327c4c:
    // 0x327c4c: 0x0  nop
    ctx->pc = 0x327c4cu;
    // NOP
label_327c50:
    // 0x327c50: 0x8e060560  lw          $a2, 0x560($s0)
    ctx->pc = 0x327c50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1376)));
    // 0x327c54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x327c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327c58: 0xc0c08b4  jal         func_3022D0
    ctx->pc = 0x327C58u;
    SET_GPR_U32(ctx, 31, 0x327C60u);
    ctx->pc = 0x327C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327C58u;
    // 0x327c5c: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3022D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3022D0u, 0x327C58u, 0x327C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327C60u;
label_327c60:
    // 0x327c60: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x327C60u;
    {
        const bool branch_taken_0x327c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x327C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327C60u;
        // 0x327c64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327c60) {
            ctx->pc = 0x327C70u;
            goto label_327c70;
        }
    }
    ctx->pc = 0x327C68u;
    // 0x327c68: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x327C68u;
    SET_GPR_U32(ctx, 31, 0x327C70u);
    ctx->pc = 0x327C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327C68u;
    // 0x327c6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x327C68u, 0x327C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327C70u;
label_327c70:
    // 0x327c70: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x327c70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x327c74: 0x78295c20  lq          $t1, 0x5C20($at)
    ctx->pc = 0x327c74u;
    SET_GPR_VEC(ctx, 9, FAST_READ128(0x665C20u));
    // 0x327c78: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x327c78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x327c7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x327c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327c80: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x327c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x327c84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x327c84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327c88: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x327c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x327c8c: 0x7fa90040  sq          $t1, 0x40($sp)
    ctx->pc = 0x327c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 9));
    // 0x327c90: 0x78265c30  lq          $a2, 0x5C30($at)
    ctx->pc = 0x327c90u;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x665C30u));
    // 0x327c94: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x327c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x327c98: 0x7fa60050  sq          $a2, 0x50($sp)
    ctx->pc = 0x327c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 6));
    // 0x327c9c: 0x78235c40  lq          $v1, 0x5C40($at)
    ctx->pc = 0x327c9cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x665C40u));
    // 0x327ca0: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x327ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x327ca4: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x327ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x327ca8: 0x78225c50  lq          $v0, 0x5C50($at)
    ctx->pc = 0x327ca8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x665C50u));
    // 0x327cac: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x327cacu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x327cb0: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x327cb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x327cb4: 0x7d420000  sq          $v0, 0x0($t2)
    ctx->pc = 0x327cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 2));
    // 0x327cb8: 0x92060573  lbu         $a2, 0x573($s0)
    ctx->pc = 0x327cb8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1395)));
    // 0x327cbc: 0xc60c056c  lwc1        $f12, 0x56C($s0)
    ctx->pc = 0x327cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x327cc0: 0xc0c0900  jal         func_302400
    ctx->pc = 0x327CC0u;
    SET_GPR_U32(ctx, 31, 0x327CC8u);
    ctx->pc = 0x327CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327CC0u;
    // 0x327cc4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302400u, 0x327CC0u, 0x327CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327CC8u;
label_327cc8:
    // 0x327cc8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x327CC8u;
    {
        const bool branch_taken_0x327cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x327cc8) {
            ctx->pc = 0x327D08u;
            goto label_327d08;
        }
    }
    ctx->pc = 0x327CD0u;
    // 0x327cd0: 0x8e050518  lw          $a1, 0x518($s0)
    ctx->pc = 0x327cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1304)));
    // 0x327cd4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x327cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x327cd8: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x327CD8u;
    SET_GPR_U32(ctx, 31, 0x327CE0u);
    ctx->pc = 0x327CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327CD8u;
    // 0x327cdc: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x327CD8u, 0x327CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327CE0u;
label_327ce0:
    // 0x327ce0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x327ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327ce4: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x327CE4u;
    {
        const bool branch_taken_0x327ce4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x327CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327CE4u;
        // 0x327ce8: 0x260401c0  addiu       $a0, $s0, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327ce4) {
            ctx->pc = 0x327D08u;
            goto label_327d08;
        }
    }
    ctx->pc = 0x327CECu;
    // 0x327cec: 0xc09e8e4  jal         func_27A390
    ctx->pc = 0x327CECu;
    SET_GPR_U32(ctx, 31, 0x327CF4u);
    ctx->pc = 0x27A390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A390u, 0x327CECu, 0x327CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327CF4u;
label_327cf4:
    // 0x327cf4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x327CF4u;
    {
        const bool branch_taken_0x327cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x327CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327CF4u;
        // 0x327cf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327cf4) {
            ctx->pc = 0x327D08u;
            goto label_327d08;
        }
    }
    ctx->pc = 0x327CFCu;
    // 0x327cfc: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x327CFCu;
    SET_GPR_U32(ctx, 31, 0x327D04u);
    ctx->pc = 0x327D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327CFCu;
    // 0x327d00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x327CFCu, 0x327D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327D04u;
label_327d04:
    // 0x327d04: 0x0  nop
    ctx->pc = 0x327d04u;
    // NOP
label_327d08:
    // 0x327d08: 0x92030515  lbu         $v1, 0x515($s0)
    ctx->pc = 0x327d08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1301)));
    // 0x327d0c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x327D0Cu;
    {
        const bool branch_taken_0x327d0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x327D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327D0Cu;
        // 0x327d10: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327d0c) {
            ctx->pc = 0x327D20u;
            goto label_327d20;
        }
    }
    ctx->pc = 0x327D14u;
    // 0x327d14: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x327D14u;
    {
        const bool branch_taken_0x327d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327d14) {
            ctx->pc = 0x327DA0u;
            goto label_327da0;
        }
    }
    ctx->pc = 0x327D1Cu;
    // 0x327d1c: 0x0  nop
    ctx->pc = 0x327d1cu;
    // NOP
label_327d20:
    // 0x327d20: 0x86040510  lh          $a0, 0x510($s0)
    ctx->pc = 0x327d20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x327d24: 0x24037ffd  addiu       $v1, $zero, 0x7FFD
    ctx->pc = 0x327d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32765));
    // 0x327d28: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x327d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x327d2c: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x327d2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x327d30: 0x86040512  lh          $a0, 0x512($s0)
    ctx->pc = 0x327d30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1298)));
    // 0x327d34: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x327D34u;
    {
        const bool branch_taken_0x327d34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x327d34) {
            ctx->pc = 0x327D70u;
            goto label_327d70;
        }
    }
    ctx->pc = 0x327D3Cu;
    // 0x327d3c: 0x86050510  lh          $a1, 0x510($s0)
    ctx->pc = 0x327d3cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x327d40: 0x28a37ff0  slti        $v1, $a1, 0x7FF0
    ctx->pc = 0x327d40u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32752) ? 1 : 0);
    // 0x327d44: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x327D44u;
    {
        const bool branch_taken_0x327d44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x327D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327D44u;
        // 0x327d48: 0x24047ff0  addiu       $a0, $zero, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327d44) {
            ctx->pc = 0x327D98u;
            goto label_327d98;
        }
    }
    ctx->pc = 0x327D4Cu;
    // 0x327d4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x327d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x327d50: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x327d50u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x327d54: 0x0  nop
    ctx->pc = 0x327d54u;
    // NOP
    // 0x327d58: 0x0  nop
    ctx->pc = 0x327d58u;
    // NOP
    // 0x327d5c: 0x2010  mfhi        $a0
    ctx->pc = 0x327d5cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x327d60: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x327d60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x327d64: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x327D64u;
    {
        const bool branch_taken_0x327d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327D64u;
        // 0x327d68: 0xa2030514  sb          $v1, 0x514($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1300), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327d64) {
            ctx->pc = 0x327D98u;
            goto label_327d98;
        }
    }
    ctx->pc = 0x327D6Cu;
    // 0x327d6c: 0x0  nop
    ctx->pc = 0x327d6cu;
    // NOP
label_327d70:
    // 0x327d70: 0x86030510  lh          $v1, 0x510($s0)
    ctx->pc = 0x327d70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x327d74: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x327d74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x327d78: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x327D78u;
    {
        const bool branch_taken_0x327d78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x327d78) {
            ctx->pc = 0x327D98u;
            goto label_327d98;
        }
    }
    ctx->pc = 0x327D80u;
    // 0x327d80: 0xa6040510  sh          $a0, 0x510($s0)
    ctx->pc = 0x327d80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1296), (uint16_t)GPR_U32(ctx, 4));
    // 0x327d84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x327d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x327d88: 0xa2030515  sb          $v1, 0x515($s0)
    ctx->pc = 0x327d88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1301), (uint8_t)GPR_U32(ctx, 3));
    // 0x327d8c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x327D8Cu;
    {
        const bool branch_taken_0x327d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327D8Cu;
        // 0x327d90: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327d8c) {
            ctx->pc = 0x327DA0u;
            goto label_327da0;
        }
    }
    ctx->pc = 0x327D94u;
    // 0x327d94: 0x0  nop
    ctx->pc = 0x327d94u;
    // NOP
label_327d98:
    // 0x327d98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x327d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x327d9c: 0x0  nop
    ctx->pc = 0x327d9cu;
    // NOP
label_327da0:
    // 0x327da0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x327DA0u;
    {
        const bool branch_taken_0x327da0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x327DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327DA0u;
        // 0x327da4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327da0) {
            ctx->pc = 0x327DB0u;
            goto label_327db0;
        }
    }
    ctx->pc = 0x327DA8u;
    // 0x327da8: 0xc0c0830  jal         func_3020C0
    ctx->pc = 0x327DA8u;
    SET_GPR_U32(ctx, 31, 0x327DB0u);
    ctx->pc = 0x327DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327DA8u;
    // 0x327dac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3020C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3020C0u, 0x327DA8u, 0x327DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327DB0u;
label_327db0:
    // 0x327db0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x327db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x327db4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x327db4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x327db8: 0x3e00008  jr          $ra
    ctx->pc = 0x327DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327DB8u;
        // 0x327dbc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327DB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327DC0u;
}
