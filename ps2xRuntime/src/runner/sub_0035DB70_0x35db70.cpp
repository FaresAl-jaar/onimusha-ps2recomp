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

// Function: sub_0035DB70
// Address: 0x35db70 - 0x35e0a8
void sub_0035DB70_0x35db70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035DB70_0x35db70");
#endif

    switch (ctx->pc) {
        case 0x35dba0u: goto label_35dba0;
        case 0x35dbccu: goto label_35dbcc;
        case 0x35dc04u: goto label_35dc04;
        case 0x35dc5cu: goto label_35dc5c;
        case 0x35dca0u: goto label_35dca0;
        case 0x35dcb4u: goto label_35dcb4;
        case 0x35dd58u: goto label_35dd58;
        case 0x35de28u: goto label_35de28;
        case 0x35de48u: goto label_35de48;
        case 0x35de58u: goto label_35de58;
        case 0x35dee0u: goto label_35dee0;
        case 0x35def4u: goto label_35def4;
        case 0x35df10u: goto label_35df10;
        case 0x35df88u: goto label_35df88;
        case 0x35df9cu: goto label_35df9c;
        case 0x35dfd8u: goto label_35dfd8;
        case 0x35dfe8u: goto label_35dfe8;
        case 0x35dff8u: goto label_35dff8;
        case 0x35e008u: goto label_35e008;
        case 0x35e020u: goto label_35e020;
        default: break;
    }

    ctx->pc = 0x35db70u;

    // 0x35db70: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x35db70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x35db74: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x35db74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x35db78: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x35db78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x35db7c: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x35db7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x35db80: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x35db80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x35db84: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x35db84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x35db88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35db88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x35db8c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x35db8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35db90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35db90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35db94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35db94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35db98: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x35DB98u;
    {
        const bool branch_taken_0x35db98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35DB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DB98u;
        // 0x35db9c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35db98) {
            ctx->pc = 0x35DBBCu;
            goto label_35dbbc;
        }
    }
    ctx->pc = 0x35DBA0u;
label_35dba0:
    // 0x35dba0: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x35dba0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x35dba4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x35dba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x35dba8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35dba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35dbac: 0x0  nop
    ctx->pc = 0x35dbacu;
    // NOP
    // 0x35dbb0: 0x0  nop
    ctx->pc = 0x35dbb0u;
    // NOP
    // 0x35dbb4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35DBB4u;
    {
        const bool branch_taken_0x35dbb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35dbb4) {
            ctx->pc = 0x35DBA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35dba0;
        }
    }
    ctx->pc = 0x35DBBCu;
label_35dbbc:
    // 0x35dbbc: 0x260401c0  addiu       $a0, $s0, 0x1C0
    ctx->pc = 0x35dbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    // 0x35dbc0: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x35dbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x35dbc4: 0xc09e900  jal         func_27A400
    ctx->pc = 0x35DBC4u;
    SET_GPR_U32(ctx, 31, 0x35DBCCu);
    ctx->pc = 0x35DBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DBC4u;
    // 0x35dbc8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A400u, 0x35DBC4u, 0x35DBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DBCCu;
label_35dbcc:
    // 0x35dbcc: 0x8e0306c8  lw          $v1, 0x6C8($s0)
    ctx->pc = 0x35dbccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1736)));
    // 0x35dbd0: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x35dbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x35dbd4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x35dbd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x35dbd8: 0xae0306c8  sw          $v1, 0x6C8($s0)
    ctx->pc = 0x35dbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1736), GPR_U32(ctx, 3));
    // 0x35dbdc: 0x8e0306cc  lw          $v1, 0x6CC($s0)
    ctx->pc = 0x35dbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1740)));
    // 0x35dbe0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x35dbe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x35dbe4: 0xae0306cc  sw          $v1, 0x6CC($s0)
    ctx->pc = 0x35dbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1740), GPR_U32(ctx, 3));
    // 0x35dbe8: 0x8e0306ac  lw          $v1, 0x6AC($s0)
    ctx->pc = 0x35dbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1708)));
    // 0x35dbec: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x35dbecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x35dbf0: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x35DBF0u;
    {
        const bool branch_taken_0x35dbf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35dbf0) {
            ctx->pc = 0x35DC68u;
            goto label_35dc68;
        }
    }
    ctx->pc = 0x35DBF8u;
    // 0x35dbf8: 0xc60d28e8  lwc1        $f13, 0x28E8($s0)
    ctx->pc = 0x35dbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x35dbfc: 0xc047b88  jal         func_11EE20
    ctx->pc = 0x35DBFCu;
    SET_GPR_U32(ctx, 31, 0x35DC04u);
    ctx->pc = 0x35DC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DBFCu;
    // 0x35dc00: 0xc60c28e0  lwc1        $f12, 0x28E0($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE20u, 0x35DBFCu, 0x35DC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DC04u;
label_35dc04:
    // 0x35dc04: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x35dc04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x35dc08: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x35dc08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x35dc0c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x35dc0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x35dc10: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x35dc10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x35dc14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x35dc14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35dc18: 0x0  nop
    ctx->pc = 0x35dc18u;
    // NOP
    // 0x35dc1c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x35dc1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x35dc20: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x35dc20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x35dc24: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x35dc24u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x35dc28: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35dc28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x35dc2c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x35dc2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x35dc30: 0x0  nop
    ctx->pc = 0x35dc30u;
    // NOP
    // 0x35dc34: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x35dc34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x35dc38: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x35dc38u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x35dc3c: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x35dc3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x35dc40: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x35dc40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x35dc44: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x35dc44u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x35dc48: 0x24630800  addiu       $v1, $v1, 0x800
    ctx->pc = 0x35dc48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x35dc4c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x35dc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35dc50: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x35dc50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35dc54: 0xc096a08  jal         func_25A820
    ctx->pc = 0x35DC54u;
    SET_GPR_U32(ctx, 31, 0x35DC5Cu);
    ctx->pc = 0x35DC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DC54u;
    // 0x35dc58: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A820u, 0x35DC54u, 0x35DC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DC5Cu;
label_35dc5c:
    // 0x35dc5c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x35DC5Cu;
    {
        const bool branch_taken_0x35dc5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35dc5c) {
            ctx->pc = 0x35DC80u;
            goto label_35dc80;
        }
    }
    ctx->pc = 0x35DC64u;
    // 0x35dc64: 0x0  nop
    ctx->pc = 0x35dc64u;
    // NOP
label_35dc68:
    // 0x35dc68: 0x8e0406ac  lw          $a0, 0x6AC($s0)
    ctx->pc = 0x35dc68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1708)));
    // 0x35dc6c: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x35dc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x35dc70: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x35dc70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x35dc74: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x35DC74u;
    {
        const bool branch_taken_0x35dc74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35dc74) {
            ctx->pc = 0x35DC98u;
            goto label_35dc98;
        }
    }
    ctx->pc = 0x35DC7Cu;
    // 0x35dc7c: 0x0  nop
    ctx->pc = 0x35dc7cu;
    // NOP
label_35dc80:
    // 0x35dc80: 0xde040520  ld          $a0, 0x520($s0)
    ctx->pc = 0x35dc80u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 1312)));
    // 0x35dc84: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x35dc84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x35dc88: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x35dc88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x35dc8c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x35dc8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x35dc90: 0xfe030520  sd          $v1, 0x520($s0)
    ctx->pc = 0x35dc90u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1312), GPR_U64(ctx, 3));
    // 0x35dc94: 0x0  nop
    ctx->pc = 0x35dc94u;
    // NOP
label_35dc98:
    // 0x35dc98: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x35dc98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35dc9c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x35dc9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35dca0:
    // 0x35dca0: 0x8e252f50  lw          $a1, 0x2F50($s1)
    ctx->pc = 0x35dca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12112)));
    // 0x35dca4: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x35DCA4u;
    {
        const bool branch_taken_0x35dca4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x35DCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DCA4u;
        // 0x35dca8: 0x3c04008d  lui         $a0, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35dca4) {
            ctx->pc = 0x35DD08u;
            goto label_35dd08;
        }
    }
    ctx->pc = 0x35DCACu;
    // 0x35dcac: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x35DCACu;
    SET_GPR_U32(ctx, 31, 0x35DCB4u);
    ctx->pc = 0x35DCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DCACu;
    // 0x35dcb0: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x35DCACu, 0x35DCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DCB4u;
label_35dcb4:
    // 0x35dcb4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x35DCB4u;
    {
        const bool branch_taken_0x35dcb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35dcb4) {
            ctx->pc = 0x35DCD8u;
            goto label_35dcd8;
        }
    }
    ctx->pc = 0x35DCBCu;
    // 0x35dcbc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x35DCBCu;
    {
        const bool branch_taken_0x35dcbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35dcbc) {
            ctx->pc = 0x35DCF0u;
            goto label_35dcf0;
        }
    }
    ctx->pc = 0x35DCC4u;
    // 0x35dcc4: 0x9044065c  lbu         $a0, 0x65C($v0)
    ctx->pc = 0x35dcc4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1628)));
    // 0x35dcc8: 0x2403009e  addiu       $v1, $zero, 0x9E
    ctx->pc = 0x35dcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
    // 0x35dccc: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x35DCCCu;
    {
        const bool branch_taken_0x35dccc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35dccc) {
            ctx->pc = 0x35DCF0u;
            goto label_35dcf0;
        }
    }
    ctx->pc = 0x35DCD4u;
    // 0x35dcd4: 0x0  nop
    ctx->pc = 0x35dcd4u;
    // NOP
label_35dcd8:
    // 0x35dcd8: 0xae202f50  sw          $zero, 0x2F50($s1)
    ctx->pc = 0x35dcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12112), GPR_U32(ctx, 0));
    // 0x35dcdc: 0x92033050  lbu         $v1, 0x3050($s0)
    ctx->pc = 0x35dcdcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12368)));
    // 0x35dce0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x35dce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x35dce4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x35DCE4u;
    {
        const bool branch_taken_0x35dce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35DCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DCE4u;
        // 0x35dce8: 0xa2033050  sb          $v1, 0x3050($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 12368), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35dce4) {
            ctx->pc = 0x35DD08u;
            goto label_35dd08;
        }
    }
    ctx->pc = 0x35DCECu;
    // 0x35dcec: 0x0  nop
    ctx->pc = 0x35dcecu;
    // NOP
label_35dcf0:
    // 0x35dcf0: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x35DCF0u;
    {
        const bool branch_taken_0x35dcf0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x35dcf0) {
            ctx->pc = 0x35DD00u;
            goto label_35dd00;
        }
    }
    ctx->pc = 0x35DCF8u;
    // 0x35dcf8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x35DCF8u;
    {
        const bool branch_taken_0x35dcf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35DCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DCF8u;
        // 0x35dcfc: 0xac40023c  sw          $zero, 0x23C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 572), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35dcf8) {
            ctx->pc = 0x35DD08u;
            goto label_35dd08;
        }
    }
    ctx->pc = 0x35DD00u;
label_35dd00:
    // 0x35dd00: 0xac50023c  sw          $s0, 0x23C($v0)
    ctx->pc = 0x35dd00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 572), GPR_U32(ctx, 16));
    // 0x35dd04: 0x0  nop
    ctx->pc = 0x35dd04u;
    // NOP
label_35dd08:
    // 0x35dd08: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x35dd08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x35dd0c: 0x2a430004  slti        $v1, $s2, 0x4
    ctx->pc = 0x35dd0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x35dd10: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x35DD10u;
    {
        const bool branch_taken_0x35dd10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35DD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DD10u;
        // 0x35dd14: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35dd10) {
            ctx->pc = 0x35DCA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35dca0;
        }
    }
    ctx->pc = 0x35DD18u;
    // 0x35dd18: 0x92033050  lbu         $v1, 0x3050($s0)
    ctx->pc = 0x35dd18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12368)));
    // 0x35dd1c: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x35dd1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x35dd20: 0x10200095  beqz        $at, . + 4 + (0x95 << 2)
    ctx->pc = 0x35DD20u;
    {
        const bool branch_taken_0x35dd20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x35DD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DD20u;
        // 0x35dd24: 0x326300ff  andi        $v1, $s3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35dd20) {
            ctx->pc = 0x35DF78u;
            goto label_35df78;
        }
    }
    ctx->pc = 0x35DD28u;
    // 0x35dd28: 0x14600093  bnez        $v1, . + 4 + (0x93 << 2)
    ctx->pc = 0x35DD28u;
    {
        const bool branch_taken_0x35dd28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35DD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DD28u;
        // 0x35dd2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35dd28) {
            ctx->pc = 0x35DF78u;
            goto label_35df78;
        }
    }
    ctx->pc = 0x35DD30u;
    // 0x35dd30: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x35dd30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x35dd34: 0x3c0a0067  lui         $t2, 0x67
    ctx->pc = 0x35dd34u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)103 << 16));
    // 0x35dd38: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x35dd38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x35dd3c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x35dd3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35dd40: 0x254a0b80  addiu       $t2, $t2, 0xB80
    ctx->pc = 0x35dd40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2944));
    // 0x35dd44: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x35dd44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x35dd48: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x35dd48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x35dd4c: 0x240c009e  addiu       $t4, $zero, 0x9E
    ctx->pc = 0x35dd4cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
    // 0x35dd50: 0x240d0002  addiu       $t5, $zero, 0x2
    ctx->pc = 0x35dd50u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35dd54: 0x0  nop
    ctx->pc = 0x35dd54u;
    // NOP
label_35dd58:
    // 0x35dd58: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x35dd58u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35dd5c: 0x12200082  beqz        $s1, . + 4 + (0x82 << 2)
    ctx->pc = 0x35DD5Cu;
    {
        const bool branch_taken_0x35dd5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x35dd5c) {
            ctx->pc = 0x35DF68u;
            goto label_35df68;
        }
    }
    ctx->pc = 0x35DD64u;
    // 0x35dd64: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x35dd64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x35dd68: 0x2468fffe  addiu       $t0, $v1, -0x2
    ctx->pc = 0x35dd68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x35dd6c: 0x2d010002  sltiu       $at, $t0, 0x2
    ctx->pc = 0x35dd6cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x35dd70: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x35DD70u;
    {
        const bool branch_taken_0x35dd70 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x35DD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DD70u;
        // 0x35dd74: 0x640b0001  daddiu      $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35dd70) {
            ctx->pc = 0x35DD80u;
            goto label_35dd80;
        }
    }
    ctx->pc = 0x35DD78u;
    // 0x35dd78: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x35dd78u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35dd7c: 0x0  nop
    ctx->pc = 0x35dd7cu;
    // NOP
label_35dd80:
    // 0x35dd80: 0x11600079  beqz        $t3, . + 4 + (0x79 << 2)
    ctx->pc = 0x35DD80u;
    {
        const bool branch_taken_0x35dd80 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x35dd80) {
            ctx->pc = 0x35DF68u;
            goto label_35df68;
        }
    }
    ctx->pc = 0x35DD88u;
    // 0x35dd88: 0x8e2b06ac  lw          $t3, 0x6AC($s1)
    ctx->pc = 0x35dd88u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1708)));
    // 0x35dd8c: 0x31680002  andi        $t0, $t3, 0x2
    ctx->pc = 0x35dd8cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)2);
    // 0x35dd90: 0x11000075  beqz        $t0, . + 4 + (0x75 << 2)
    ctx->pc = 0x35DD90u;
    {
        const bool branch_taken_0x35dd90 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x35DD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DD90u;
        // 0x35dd94: 0x31680004  andi        $t0, $t3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35dd90) {
            ctx->pc = 0x35DF68u;
            goto label_35df68;
        }
    }
    ctx->pc = 0x35DD98u;
    // 0x35dd98: 0x15000073  bnez        $t0, . + 4 + (0x73 << 2)
    ctx->pc = 0x35DD98u;
    {
        const bool branch_taken_0x35dd98 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x35dd98) {
            ctx->pc = 0x35DF68u;
            goto label_35df68;
        }
    }
    ctx->pc = 0x35DDA0u;
    // 0x35dda0: 0x8e2829c0  lw          $t0, 0x29C0($s1)
    ctx->pc = 0x35dda0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x35dda4: 0x95080000  lhu         $t0, 0x0($t0)
    ctx->pc = 0x35dda4u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x35dda8: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35DDA8u;
    {
        const bool branch_taken_0x35dda8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x35dda8) {
            ctx->pc = 0x35DDB8u;
            goto label_35ddb8;
        }
    }
    ctx->pc = 0x35DDB0u;
    // 0x35ddb0: 0x106d006d  beq         $v1, $t5, . + 4 + (0x6D << 2)
    ctx->pc = 0x35DDB0u;
    {
        const bool branch_taken_0x35ddb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 13));
        if (branch_taken_0x35ddb0) {
            ctx->pc = 0x35DF68u;
            goto label_35df68;
        }
    }
    ctx->pc = 0x35DDB8u;
label_35ddb8:
    // 0x35ddb8: 0x9228065c  lbu         $t0, 0x65C($s1)
    ctx->pc = 0x35ddb8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1628)));
    // 0x35ddbc: 0x110c006a  beq         $t0, $t4, . + 4 + (0x6A << 2)
    ctx->pc = 0x35DDBCu;
    {
        const bool branch_taken_0x35ddbc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 12));
        if (branch_taken_0x35ddbc) {
            ctx->pc = 0x35DF68u;
            goto label_35df68;
        }
    }
    ctx->pc = 0x35DDC4u;
    // 0x35ddc4: 0x922b0002  lbu         $t3, 0x2($s1)
    ctx->pc = 0x35ddc4u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x35ddc8: 0xb40c0  sll         $t0, $t3, 3
    ctx->pc = 0x35ddc8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x35ddcc: 0x10b4023  subu        $t0, $t0, $t3
    ctx->pc = 0x35ddccu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x35ddd0: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x35ddd0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x35ddd4: 0x1485821  addu        $t3, $t2, $t0
    ctx->pc = 0x35ddd4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x35ddd8: 0x9168001a  lbu         $t0, 0x1A($t3)
    ctx->pc = 0x35ddd8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 26)));
    // 0x35dddc: 0x1109000a  beq         $t0, $t1, . + 4 + (0xA << 2)
    ctx->pc = 0x35DDDCu;
    {
        const bool branch_taken_0x35dddc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 9));
        if (branch_taken_0x35dddc) {
            ctx->pc = 0x35DE08u;
            goto label_35de08;
        }
    }
    ctx->pc = 0x35DDE4u;
    // 0x35dde4: 0x9168001b  lbu         $t0, 0x1B($t3)
    ctx->pc = 0x35dde4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 27)));
    // 0x35dde8: 0x29010002  slti        $at, $t0, 0x2
    ctx->pc = 0x35dde8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x35ddec: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x35DDECu;
    {
        const bool branch_taken_0x35ddec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ddec) {
            ctx->pc = 0x35DE08u;
            goto label_35de08;
        }
    }
    ctx->pc = 0x35DDF4u;
    // 0x35ddf4: 0x14670008  bne         $v1, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x35DDF4u;
    {
        const bool branch_taken_0x35ddf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x35ddf4) {
            ctx->pc = 0x35DE18u;
            goto label_35de18;
        }
    }
    ctx->pc = 0x35DDFCu;
    // 0x35ddfc: 0x92232b08  lbu         $v1, 0x2B08($s1)
    ctx->pc = 0x35ddfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11016)));
    // 0x35de00: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x35DE00u;
    {
        const bool branch_taken_0x35de00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35de00) {
            ctx->pc = 0x35DE18u;
            goto label_35de18;
        }
    }
    ctx->pc = 0x35DE08u;
label_35de08:
    // 0x35de08: 0xde030520  ld          $v1, 0x520($s0)
    ctx->pc = 0x35de08u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 1312)));
    // 0x35de0c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x35de0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x35de10: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x35DE10u;
    {
        const bool branch_taken_0x35de10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35DE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DE10u;
        // 0x35de14: 0xfe030520  sd          $v1, 0x520($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 1312), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35de10) {
            ctx->pc = 0x35DF68u;
            goto label_35df68;
        }
    }
    ctx->pc = 0x35DE18u;
label_35de18:
    // 0x35de18: 0x8e022f50  lw          $v0, 0x2F50($s0)
    ctx->pc = 0x35de18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12112)));
    // 0x35de1c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x35DE1Cu;
    {
        const bool branch_taken_0x35de1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35DE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DE1Cu;
        // 0x35de20: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35de1c) {
            ctx->pc = 0x35DEC0u;
            goto label_35dec0;
        }
    }
    ctx->pc = 0x35DE24u;
    // 0x35de24: 0x26030050  addiu       $v1, $s0, 0x50
    ctx->pc = 0x35de24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_35de28:
    // 0x35de28: 0x8c622f50  lw          $v0, 0x2F50($v1)
    ctx->pc = 0x35de28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12112)));
    // 0x35de2c: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x35DE2Cu;
    {
        const bool branch_taken_0x35de2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35de2c) {
            ctx->pc = 0x35DEB0u;
            goto label_35deb0;
        }
    }
    ctx->pc = 0x35DE34u;
    // 0x35de34: 0x19000022  blez        $t0, . + 4 + (0x22 << 2)
    ctx->pc = 0x35DE34u;
    {
        const bool branch_taken_0x35de34 = (GPR_S64(ctx, 8) <= 0);
        ctx->pc = 0x35DE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DE34u;
        // 0x35de38: 0x81080  sll         $v0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35de34) {
            ctx->pc = 0x35DEC0u;
            goto label_35dec0;
        }
    }
    ctx->pc = 0x35DE3Cu;
    // 0x35de3c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x35de3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x35de40: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x35de40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x35de44: 0x2023821  addu        $a3, $s0, $v0
    ctx->pc = 0x35de44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_35de48:
    // 0x35de48: 0x24e62ec0  addiu       $a2, $a3, 0x2EC0
    ctx->pc = 0x35de48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 11968));
    // 0x35de4c: 0x24e52f10  addiu       $a1, $a3, 0x2F10
    ctx->pc = 0x35de4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 12048));
    // 0x35de50: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x35de50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x35de54: 0x0  nop
    ctx->pc = 0x35de54u;
    // NOP
label_35de58:
    // 0x35de58: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x35de58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x35de5c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x35de5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x35de60: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x35de60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x35de64: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x35de64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x35de68: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x35de68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x35de6c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x35de6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x35de70: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x35DE70u;
    {
        const bool branch_taken_0x35de70 = (GPR_S64(ctx, 4) > 0);
        ctx->pc = 0x35DE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DE70u;
        // 0x35de74: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35de70) {
            ctx->pc = 0x35DE58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35de58;
        }
    }
    ctx->pc = 0x35DE78u;
    // 0x35de78: 0x8ce22f00  lw          $v0, 0x2F00($a3)
    ctx->pc = 0x35de78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12032)));
    // 0x35de7c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x35de7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x35de80: 0xace22f50  sw          $v0, 0x2F50($a3)
    ctx->pc = 0x35de80u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12112), GPR_U32(ctx, 2));
    // 0x35de84: 0xc4e02f04  lwc1        $f0, 0x2F04($a3)
    ctx->pc = 0x35de84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35de88: 0xe4e02f54  swc1        $f0, 0x2F54($a3)
    ctx->pc = 0x35de88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12116), bits); }
    // 0x35de8c: 0xc4e02f08  lwc1        $f0, 0x2F08($a3)
    ctx->pc = 0x35de8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35de90: 0xe4e02f58  swc1        $f0, 0x2F58($a3)
    ctx->pc = 0x35de90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12120), bits); }
    // 0x35de94: 0xc4e02f0c  lwc1        $f0, 0x2F0C($a3)
    ctx->pc = 0x35de94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35de98: 0xe4e02f5c  swc1        $f0, 0x2F5C($a3)
    ctx->pc = 0x35de98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12124), bits); }
    // 0x35de9c: 0xace02f00  sw          $zero, 0x2F00($a3)
    ctx->pc = 0x35de9cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12032), GPR_U32(ctx, 0));
    // 0x35dea0: 0x1d00ffe9  bgtz        $t0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x35DEA0u;
    {
        const bool branch_taken_0x35dea0 = (GPR_S64(ctx, 8) > 0);
        ctx->pc = 0x35DEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DEA0u;
        // 0x35dea4: 0x24e7ffb0  addiu       $a3, $a3, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35dea0) {
            ctx->pc = 0x35DE48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35de48;
        }
    }
    ctx->pc = 0x35DEA8u;
    // 0x35dea8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x35DEA8u;
    {
        const bool branch_taken_0x35dea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35dea8) {
            ctx->pc = 0x35DEC0u;
            goto label_35dec0;
        }
    }
    ctx->pc = 0x35DEB0u;
label_35deb0:
    // 0x35deb0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x35deb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x35deb4: 0x29020004  slti        $v0, $t0, 0x4
    ctx->pc = 0x35deb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x35deb8: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x35DEB8u;
    {
        const bool branch_taken_0x35deb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35DEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DEB8u;
        // 0x35debc: 0x24630050  addiu       $v1, $v1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35deb8) {
            ctx->pc = 0x35DE28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35de28;
        }
    }
    ctx->pc = 0x35DEC0u;
label_35dec0:
    // 0x35dec0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x35dec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x35dec4: 0x3c023f06  lui         $v0, 0x3F06
    ctx->pc = 0x35dec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16134 << 16));
    // 0x35dec8: 0x3c03432a  lui         $v1, 0x432A
    ctx->pc = 0x35dec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17194 << 16));
    // 0x35decc: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x35deccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x35ded0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x35ded0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x35ded4: 0xae042f50  sw          $a0, 0x2F50($s0)
    ctx->pc = 0x35ded4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12112), GPR_U32(ctx, 4));
    // 0x35ded8: 0xc0969ac  jal         func_25A6B0
    ctx->pc = 0x35DED8u;
    SET_GPR_U32(ctx, 31, 0x35DEE0u);
    ctx->pc = 0x35DEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DED8u;
    // 0x35dedc: 0xae032f54  sw          $v1, 0x2F54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12116), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A6B0u, 0x35DED8u, 0x35DEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DEE0u;
label_35dee0:
    // 0x35dee0: 0x3c02405e  lui         $v0, 0x405E
    ctx->pc = 0x35dee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16478 << 16));
    // 0x35dee4: 0x34426531  ori         $v0, $v0, 0x6531
    ctx->pc = 0x35dee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25905);
    // 0x35dee8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x35dee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35deec: 0xc09681c  jal         func_25A070
    ctx->pc = 0x35DEECu;
    SET_GPR_U32(ctx, 31, 0x35DEF4u);
    ctx->pc = 0x35DEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DEECu;
    // 0x35def0: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x35DEECu, 0x35DEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DEF4u;
label_35def4:
    // 0x35def4: 0xe6002f5c  swc1        $f0, 0x2F5C($s0)
    ctx->pc = 0x35def4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12124), bits); }
    // 0x35def8: 0x862300c2  lh          $v1, 0xC2($s1)
    ctx->pc = 0x35def8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 194)));
    // 0x35defc: 0x860200c2  lh          $v0, 0xC2($s0)
    ctx->pc = 0x35defcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x35df00: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x35df00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35df04: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x35df04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x35df08: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x35DF08u;
    SET_GPR_U32(ctx, 31, 0x35DF10u);
    ctx->pc = 0x35DF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DF08u;
    // 0x35df0c: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x35DF08u, 0x35DF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DF10u;
label_35df10:
    // 0x35df10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35df10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35df14: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x35df14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x35df18: 0x34660fdb  ori         $a2, $v1, 0xFDB
    ctx->pc = 0x35df18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x35df1c: 0x3c054500  lui         $a1, 0x4500
    ctx->pc = 0x35df1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17664 << 16));
    // 0x35df20: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x35df20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x35df24: 0x2404009e  addiu       $a0, $zero, 0x9E
    ctx->pc = 0x35df24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
    // 0x35df28: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x35df28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35df2c: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x35df2cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35df30: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x35df30u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35df34: 0x0  nop
    ctx->pc = 0x35df34u;
    // NOP
    // 0x35df38: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x35df38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x35df3c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x35df3cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x35df40: 0xe6002f58  swc1        $f0, 0x2F58($s0)
    ctx->pc = 0x35df40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12120), bits); }
    // 0x35df44: 0xa2240780  sb          $a0, 0x780($s1)
    ctx->pc = 0x35df44u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1920), (uint8_t)GPR_U32(ctx, 4));
    // 0x35df48: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x35df48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x35df4c: 0xae2407c8  sw          $a0, 0x7C8($s1)
    ctx->pc = 0x35df4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1992), GPR_U32(ctx, 4));
    // 0x35df50: 0xa2230238  sb          $v1, 0x238($s1)
    ctx->pc = 0x35df50u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 568), (uint8_t)GPR_U32(ctx, 3));
    // 0x35df54: 0x92033050  lbu         $v1, 0x3050($s0)
    ctx->pc = 0x35df54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12368)));
    // 0x35df58: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35df58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35df5c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x35DF5Cu;
    {
        const bool branch_taken_0x35df5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35DF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DF5Cu;
        // 0x35df60: 0xa2033050  sb          $v1, 0x3050($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 12368), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35df5c) {
            ctx->pc = 0x35DF78u;
            goto label_35df78;
        }
    }
    ctx->pc = 0x35DF64u;
    // 0x35df64: 0x0  nop
    ctx->pc = 0x35df64u;
    // NOP
label_35df68:
    // 0x35df68: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x35df68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x35df6c: 0x28a30004  slti        $v1, $a1, 0x4
    ctx->pc = 0x35df6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x35df70: 0x1460ff79  bnez        $v1, . + 4 + (-0x87 << 2)
    ctx->pc = 0x35DF70u;
    {
        const bool branch_taken_0x35df70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35DF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DF70u;
        // 0x35df74: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35df70) {
            ctx->pc = 0x35DD58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35dd58;
        }
    }
    ctx->pc = 0x35DF78u;
label_35df78:
    // 0x35df78: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x35df78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35df7c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x35df7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35df80: 0x27b100a8  addiu       $s1, $sp, 0xA8
    ctx->pc = 0x35df80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x35df84: 0x0  nop
    ctx->pc = 0x35df84u;
    // NOP
label_35df88:
    // 0x35df88: 0x8e452f50  lw          $a1, 0x2F50($s2)
    ctx->pc = 0x35df88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12112)));
    // 0x35df8c: 0x10a0003a  beqz        $a1, . + 4 + (0x3A << 2)
    ctx->pc = 0x35DF8Cu;
    {
        const bool branch_taken_0x35df8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x35DF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DF8Cu;
        // 0x35df90: 0x3c04008d  lui         $a0, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35df8c) {
            ctx->pc = 0x35E078u;
            goto label_35e078;
        }
    }
    ctx->pc = 0x35DF94u;
    // 0x35df94: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x35DF94u;
    SET_GPR_U32(ctx, 31, 0x35DF9Cu);
    ctx->pc = 0x35DF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DF94u;
    // 0x35df98: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x35DF94u, 0x35DF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DF9Cu;
label_35df9c:
    // 0x35df9c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x35df9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35dfa0: 0x12600035  beqz        $s3, . + 4 + (0x35 << 2)
    ctx->pc = 0x35DFA0u;
    {
        const bool branch_taken_0x35dfa0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x35dfa0) {
            ctx->pc = 0x35E078u;
            goto label_35e078;
        }
    }
    ctx->pc = 0x35DFA8u;
    // 0x35dfa8: 0x8e63004c  lw          $v1, 0x4C($s3)
    ctx->pc = 0x35dfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x35dfac: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x35DFACu;
    {
        const bool branch_taken_0x35dfac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35dfac) {
            ctx->pc = 0x35E078u;
            goto label_35e078;
        }
    }
    ctx->pc = 0x35DFB4u;
    // 0x35dfb4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x35dfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x35dfb8: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x35dfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x35dfbc: 0x24428750  addiu       $v0, $v0, -0x78B0
    ctx->pc = 0x35dfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936400));
    // 0x35dfc0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x35dfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x35dfc4: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x35dfc4u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x658750u));
    // 0x35dfc8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x35dfc8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x35dfcc: 0xc6402f54  lwc1        $f0, 0x2F54($s2)
    ctx->pc = 0x35dfccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35dfd0: 0xc04150c  jal         func_105430
    ctx->pc = 0x35DFD0u;
    SET_GPR_U32(ctx, 31, 0x35DFD8u);
    ctx->pc = 0x35DFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DFD0u;
    // 0x35dfd4: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x105430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105430u, 0x35DFD0u, 0x35DFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DFD8u;
label_35dfd8:
    // 0x35dfd8: 0xc64c2f58  lwc1        $f12, 0x2F58($s2)
    ctx->pc = 0x35dfd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x35dfdc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x35dfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x35dfe0: 0xc041588  jal         func_105620
    ctx->pc = 0x35DFE0u;
    SET_GPR_U32(ctx, 31, 0x35DFE8u);
    ctx->pc = 0x35DFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DFE0u;
    // 0x35dfe4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105620u, 0x35DFE0u, 0x35DFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DFE8u;
label_35dfe8:
    // 0x35dfe8: 0xc64c2f5c  lwc1        $f12, 0x2F5C($s2)
    ctx->pc = 0x35dfe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x35dfec: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x35dfecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x35dff0: 0xc041534  jal         func_1054D0
    ctx->pc = 0x35DFF0u;
    SET_GPR_U32(ctx, 31, 0x35DFF8u);
    ctx->pc = 0x35DFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DFF0u;
    // 0x35dff4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054D0u, 0x35DFF0u, 0x35DFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DFF8u;
label_35dff8:
    // 0x35dff8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x35dff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x35dffc: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x35dffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x35e000: 0xc0414e2  jal         func_105388
    ctx->pc = 0x35E000u;
    SET_GPR_U32(ctx, 31, 0x35E008u);
    ctx->pc = 0x35E004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E000u;
    // 0x35e004: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105388u, 0x35E000u, 0x35E008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E008u;
label_35e008:
    // 0x35e008: 0x8e02085c  lw          $v0, 0x85C($s0)
    ctx->pc = 0x35e008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2140)));
    // 0x35e00c: 0x26442f10  addiu       $a0, $s2, 0x2F10
    ctx->pc = 0x35e00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12048));
    // 0x35e010: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x35e010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x35e014: 0x8c450094  lw          $a1, 0x94($v0)
    ctx->pc = 0x35e014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x35e018: 0xc04144e  jal         func_105138
    ctx->pc = 0x35E018u;
    SET_GPR_U32(ctx, 31, 0x35E020u);
    ctx->pc = 0x35E01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E018u;
    // 0x35e01c: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x35E018u, 0x35E020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E020u;
label_35e020:
    // 0x35e020: 0x3c0341e2  lui         $v1, 0x41E2
    ctx->pc = 0x35e020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16866 << 16));
    // 0x35e024: 0x8e66004c  lw          $a2, 0x4C($s3)
    ctx->pc = 0x35e024u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x35e028: 0x3465aaab  ori         $a1, $v1, 0xAAAB
    ctx->pc = 0x35e028u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
    // 0x35e02c: 0x3c04432a  lui         $a0, 0x432A
    ctx->pc = 0x35e02cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17194 << 16));
    // 0x35e030: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x35e030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x35e034: 0x26472f10  addiu       $a3, $s2, 0x2F10
    ctx->pc = 0x35e034u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 12048));
    // 0x35e038: 0x44941000  mtc1        $s4, $f2
    ctx->pc = 0x35e038u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x35e03c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x35e03cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x35e040: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35e040u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35e044: 0x468010e0  cvt.s.w     $f3, $f2
    ctx->pc = 0x35e044u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x35e048: 0x8cc30080  lw          $v1, 0x80($a2)
    ctx->pc = 0x35e048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x35e04c: 0x44852000  mtc1        $a1, $f4
    ctx->pc = 0x35e04cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x35e050: 0xac6700c0  sw          $a3, 0xC0($v1)
    ctx->pc = 0x35e050u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 192), GPR_U32(ctx, 7));
    // 0x35e054: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x35e054u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35e058: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x35e058u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x35e05c: 0xc6422f54  lwc1        $f2, 0x2F54($s2)
    ctx->pc = 0x35e05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35e060: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x35e060u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x35e064: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x35e064u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x35e068: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x35e068u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x35e06c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x35e06cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x35e070: 0xe6402f54  swc1        $f0, 0x2F54($s2)
    ctx->pc = 0x35e070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12116), bits); }
    // 0x35e074: 0x0  nop
    ctx->pc = 0x35e074u;
    // NOP
label_35e078:
    // 0x35e078: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x35e078u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x35e07c: 0x2a830004  slti        $v1, $s4, 0x4
    ctx->pc = 0x35e07cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x35e080: 0x1460ffc1  bnez        $v1, . + 4 + (-0x3F << 2)
    ctx->pc = 0x35E080u;
    {
        const bool branch_taken_0x35e080 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35E084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E080u;
        // 0x35e084: 0x26520050  addiu       $s2, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e080) {
            ctx->pc = 0x35DF88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35df88;
        }
    }
    ctx->pc = 0x35E088u;
    // 0x35e088: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x35e088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35e08c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x35e08cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35e090: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x35e090u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35e094: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35e094u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35e098: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35e098u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35e09c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35e09cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e0a0: 0x3e00008  jr          $ra
    ctx->pc = 0x35E0A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E0A0u;
        // 0x35e0a4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E0A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E0A8u;
}
