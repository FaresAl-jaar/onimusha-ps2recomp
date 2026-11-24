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

// Function: sub_0037DAF0
// Address: 0x37daf0 - 0x37e0c8
void sub_0037DAF0_0x37daf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037DAF0_0x37daf0");
#endif

    switch (ctx->pc) {
        case 0x37db54u: goto label_37db54;
        case 0x37db64u: goto label_37db64;
        case 0x37dbc8u: goto label_37dbc8;
        case 0x37dc38u: goto label_37dc38;
        case 0x37dce8u: goto label_37dce8;
        case 0x37dcfcu: goto label_37dcfc;
        case 0x37dd0cu: goto label_37dd0c;
        case 0x37dd9cu: goto label_37dd9c;
        case 0x37ddb4u: goto label_37ddb4;
        case 0x37dea8u: goto label_37dea8;
        case 0x37dec4u: goto label_37dec4;
        case 0x37deecu: goto label_37deec;
        case 0x37df3cu: goto label_37df3c;
        case 0x37dfa8u: goto label_37dfa8;
        case 0x37dfe0u: goto label_37dfe0;
        case 0x37e028u: goto label_37e028;
        case 0x37e058u: goto label_37e058;
        case 0x37e070u: goto label_37e070;
        default: break;
    }

    ctx->pc = 0x37daf0u;

    // 0x37daf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37daf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37daf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x37daf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x37daf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37daf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37dafc: 0x90830821  lbu         $v1, 0x821($a0)
    ctx->pc = 0x37dafcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x37db00: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x37db00u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x37db04: 0x1020016c  beqz        $at, . + 4 + (0x16C << 2)
    ctx->pc = 0x37DB04u;
    {
        const bool branch_taken_0x37db04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x37DB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DB04u;
        // 0x37db08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37db04) {
            ctx->pc = 0x37E0B8u;
            goto label_37e0b8;
        }
    }
    ctx->pc = 0x37DB0Cu;
    // 0x37db0c: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x37db0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x37db10: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x37db10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x37db14: 0x24a51da0  addiu       $a1, $a1, 0x1DA0
    ctx->pc = 0x37db14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7584));
    // 0x37db18: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x37db18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x37db1c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x37db1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37db20: 0x600008  jr          $v1
    ctx->pc = 0x37DB20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37DB28u: goto label_37db28;
            case 0x37DBF0u: goto label_37dbf0;
            case 0x37DC70u: goto label_37dc70;
            case 0x37DDD8u: goto label_37ddd8;
            case 0x37DE68u: goto label_37de68;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37DB20u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x37DB28u;
label_37db28:
    // 0x37db28: 0x92022b78  lbu         $v0, 0x2B78($s0)
    ctx->pc = 0x37db28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11128)));
    // 0x37db2c: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x37db2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x37db30: 0xa2022b78  sb          $v0, 0x2B78($s0)
    ctx->pc = 0x37db30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11128), (uint8_t)GPR_U32(ctx, 2));
    // 0x37db34: 0x92022b78  lbu         $v0, 0x2B78($s0)
    ctx->pc = 0x37db34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11128)));
    // 0x37db38: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x37db38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x37db3c: 0xa2022b78  sb          $v0, 0x2B78($s0)
    ctx->pc = 0x37db3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11128), (uint8_t)GPR_U32(ctx, 2));
    // 0x37db40: 0xa600082a  sh          $zero, 0x82A($s0)
    ctx->pc = 0x37db40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2090), (uint16_t)GPR_U32(ctx, 0));
    // 0x37db44: 0x96020030  lhu         $v0, 0x30($s0)
    ctx->pc = 0x37db44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x37db48: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x37db48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x37db4c: 0xc0e007c  jal         func_3801F0
    ctx->pc = 0x37DB4Cu;
    SET_GPR_U32(ctx, 31, 0x37DB54u);
    ctx->pc = 0x37DB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DB4Cu;
    // 0x37db50: 0xa6020030  sh          $v0, 0x30($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3801F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3801F0u, 0x37DB4Cu, 0x37DB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DB54u;
label_37db54:
    // 0x37db54: 0x8e0507c0  lw          $a1, 0x7C0($s0)
    ctx->pc = 0x37db54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1984)));
    // 0x37db58: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x37db58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x37db5c: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x37DB5Cu;
    SET_GPR_U32(ctx, 31, 0x37DB64u);
    ctx->pc = 0x37DB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DB5Cu;
    // 0x37db60: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x37DB5Cu, 0x37DB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DB64u;
label_37db64:
    // 0x37db64: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37DB64u;
    {
        const bool branch_taken_0x37db64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37db64) {
            ctx->pc = 0x37DB80u;
            goto label_37db80;
        }
    }
    ctx->pc = 0x37DB6Cu;
    // 0x37db6c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x37db6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x37db70: 0x26032b50  addiu       $v1, $s0, 0x2B50
    ctx->pc = 0x37db70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 11088));
    // 0x37db74: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x37db74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37db78: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x37DB78u;
    {
        const bool branch_taken_0x37db78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37DB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DB78u;
        // 0x37db7c: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37db78) {
            ctx->pc = 0x37DB98u;
            goto label_37db98;
        }
    }
    ctx->pc = 0x37DB80u;
label_37db80:
    // 0x37db80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37db80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37db84: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x37db84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x37db88: 0x26032b50  addiu       $v1, $s0, 0x2B50
    ctx->pc = 0x37db88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 11088));
    // 0x37db8c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x37db8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37db90: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x37db90u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x37db94: 0x0  nop
    ctx->pc = 0x37db94u;
    // NOP
label_37db98:
    // 0x37db98: 0x3c0245cb  lui         $v0, 0x45CB
    ctx->pc = 0x37db98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17867 << 16));
    // 0x37db9c: 0xc6012b54  lwc1        $f1, 0x2B54($s0)
    ctx->pc = 0x37db9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37dba0: 0x34442000  ori         $a0, $v0, 0x2000
    ctx->pc = 0x37dba0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x37dba4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x37dba4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37dba8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x37dba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x37dbac: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x37dbacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x37dbb0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x37dbb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x37dbb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37dbb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37dbb8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x37dbb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x37dbbc: 0xe6002b54  swc1        $f0, 0x2B54($s0)
    ctx->pc = 0x37dbbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11092), bits); }
    // 0x37dbc0: 0xc0dfcb8  jal         func_37F2E0
    ctx->pc = 0x37DBC0u;
    SET_GPR_U32(ctx, 31, 0x37DBC8u);
    ctx->pc = 0x37DBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DBC0u;
    // 0x37dbc4: 0xae032b70  sw          $v1, 0x2B70($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 11120), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F2E0u, 0x37DBC0u, 0x37DBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DBC8u;
label_37dbc8:
    // 0x37dbc8: 0x92022b7a  lbu         $v0, 0x2B7A($s0)
    ctx->pc = 0x37dbc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11130)));
    // 0x37dbcc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37DBCCu;
    {
        const bool branch_taken_0x37dbcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37dbcc) {
            ctx->pc = 0x37DBE0u;
            goto label_37dbe0;
        }
    }
    ctx->pc = 0x37DBD4u;
    // 0x37dbd4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37dbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37dbd8: 0xa2022b7a  sb          $v0, 0x2B7A($s0)
    ctx->pc = 0x37dbd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11130), (uint8_t)GPR_U32(ctx, 2));
    // 0x37dbdc: 0x0  nop
    ctx->pc = 0x37dbdcu;
    // NOP
label_37dbe0:
    // 0x37dbe0: 0x92020821  lbu         $v0, 0x821($s0)
    ctx->pc = 0x37dbe0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x37dbe4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x37dbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x37dbe8: 0xa2020821  sb          $v0, 0x821($s0)
    ctx->pc = 0x37dbe8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 2));
    // 0x37dbec: 0x0  nop
    ctx->pc = 0x37dbecu;
    // NOP
label_37dbf0:
    // 0x37dbf0: 0x3c02453b  lui         $v0, 0x453B
    ctx->pc = 0x37dbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17723 << 16));
    // 0x37dbf4: 0xc6012b54  lwc1        $f1, 0x2B54($s0)
    ctx->pc = 0x37dbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37dbf8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x37dbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x37dbfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37dbfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37dc00: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x37dc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37dc04: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x37dc04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x37dc08: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x37dc08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37dc0c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x37DC0Cu;
    {
        const bool branch_taken_0x37dc0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37dc0c) {
            ctx->pc = 0x37DC30u;
            goto label_37dc30;
        }
    }
    ctx->pc = 0x37DC14u;
    // 0x37dc14: 0x96020030  lhu         $v0, 0x30($s0)
    ctx->pc = 0x37dc14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x37dc18: 0x3042ffbf  andi        $v0, $v0, 0xFFBF
    ctx->pc = 0x37dc18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65471);
    // 0x37dc1c: 0xa6020030  sh          $v0, 0x30($s0)
    ctx->pc = 0x37dc1cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x37dc20: 0x92022b78  lbu         $v0, 0x2B78($s0)
    ctx->pc = 0x37dc20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11128)));
    // 0x37dc24: 0x304200fd  andi        $v0, $v0, 0xFD
    ctx->pc = 0x37dc24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
    // 0x37dc28: 0xa2022b78  sb          $v0, 0x2B78($s0)
    ctx->pc = 0x37dc28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11128), (uint8_t)GPR_U32(ctx, 2));
    // 0x37dc2c: 0x0  nop
    ctx->pc = 0x37dc2cu;
    // NOP
label_37dc30:
    // 0x37dc30: 0xc0dfe30  jal         func_37F8C0
    ctx->pc = 0x37DC30u;
    SET_GPR_U32(ctx, 31, 0x37DC38u);
    ctx->pc = 0x37DC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DC30u;
    // 0x37dc34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F8C0u, 0x37DC30u, 0x37DC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DC38u;
label_37dc38:
    // 0x37dc38: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x37DC38u;
    {
        const bool branch_taken_0x37dc38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37dc38) {
            ctx->pc = 0x37DC60u;
            goto label_37dc60;
        }
    }
    ctx->pc = 0x37DC40u;
    // 0x37dc40: 0xc6022b54  lwc1        $f2, 0x2B54($s0)
    ctx->pc = 0x37dc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37dc44: 0xc6012b70  lwc1        $f1, 0x2B70($s0)
    ctx->pc = 0x37dc44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37dc48: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x37dc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37dc4c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x37dc4cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x37dc50: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x37dc50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37dc54: 0x45010118  bc1t        . + 4 + (0x118 << 2)
    ctx->pc = 0x37DC54u;
    {
        const bool branch_taken_0x37dc54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37dc54) {
            ctx->pc = 0x37E0B8u;
            goto label_37e0b8;
        }
    }
    ctx->pc = 0x37DC5Cu;
    // 0x37dc5c: 0x0  nop
    ctx->pc = 0x37dc5cu;
    // NOP
label_37dc60:
    // 0x37dc60: 0xa6000826  sh          $zero, 0x826($s0)
    ctx->pc = 0x37dc60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2086), (uint16_t)GPR_U32(ctx, 0));
    // 0x37dc64: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x37dc64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x37dc68: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37dc68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x37dc6c: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x37dc6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
label_37dc70:
    // 0x37dc70: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x37dc70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
    // 0x37dc74: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x37dc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37dc78: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x37dc78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x37dc7c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x37dc7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x37dc80: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x37dc80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x37dc84: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x37dc84u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37dc88: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x37dc88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x37dc8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37dc8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37dc90: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x37dc90u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x37dc94: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x37dc94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x37dc98: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x37dc98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37dc9c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x37DC9Cu;
    {
        const bool branch_taken_0x37dc9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37dc9c) {
            ctx->pc = 0x37DCB4u;
            goto label_37dcb4;
        }
    }
    ctx->pc = 0x37DCA4u;
    // 0x37dca4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37dca4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x37dca8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x37dca8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x37dcac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37DCACu;
    {
        const bool branch_taken_0x37dcac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37DCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DCACu;
        // 0x37dcb0: 0x96040826  lhu         $a0, 0x826($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2086)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37dcac) {
            ctx->pc = 0x37DCD0u;
            goto label_37dcd0;
        }
    }
    ctx->pc = 0x37DCB4u;
label_37dcb4:
    // 0x37dcb4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x37dcb4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x37dcb8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x37dcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x37dcbc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37dcbcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x37dcc0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x37dcc0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x37dcc4: 0x0  nop
    ctx->pc = 0x37dcc4u;
    // NOP
    // 0x37dcc8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x37dcc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x37dccc: 0x96040826  lhu         $a0, 0x826($s0)
    ctx->pc = 0x37dcccu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2086)));
label_37dcd0:
    // 0x37dcd0: 0x85182b  sltu        $v1, $a0, $a1
    ctx->pc = 0x37dcd0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x37dcd4: 0x1460003c  bnez        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x37DCD4u;
    {
        const bool branch_taken_0x37dcd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x37dcd4) {
            ctx->pc = 0x37DDC8u;
            goto label_37ddc8;
        }
    }
    ctx->pc = 0x37DCDCu;
    // 0x37dcdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37dcdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37dce0: 0xc0df834  jal         func_37E0D0
    ctx->pc = 0x37DCE0u;
    SET_GPR_U32(ctx, 31, 0x37DCE8u);
    ctx->pc = 0x37DCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DCE0u;
    // 0x37dce4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37E0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37E0D0u, 0x37DCE0u, 0x37DCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DCE8u;
label_37dce8:
    // 0x37dce8: 0x96020030  lhu         $v0, 0x30($s0)
    ctx->pc = 0x37dce8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x37dcec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37dcecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37dcf0: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x37dcf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x37dcf4: 0xc0e007c  jal         func_3801F0
    ctx->pc = 0x37DCF4u;
    SET_GPR_U32(ctx, 31, 0x37DCFCu);
    ctx->pc = 0x37DCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DCF4u;
    // 0x37dcf8: 0xa6020030  sh          $v0, 0x30($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3801F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3801F0u, 0x37DCF4u, 0x37DCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DCFCu;
label_37dcfc:
    // 0x37dcfc: 0x8e0507c0  lw          $a1, 0x7C0($s0)
    ctx->pc = 0x37dcfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1984)));
    // 0x37dd00: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x37dd00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x37dd04: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x37DD04u;
    SET_GPR_U32(ctx, 31, 0x37DD0Cu);
    ctx->pc = 0x37DD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DD04u;
    // 0x37dd08: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x37DD04u, 0x37DD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DD0Cu;
label_37dd0c:
    // 0x37dd0c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x37DD0Cu;
    {
        const bool branch_taken_0x37dd0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37dd0c) {
            ctx->pc = 0x37DD40u;
            goto label_37dd40;
        }
    }
    ctx->pc = 0x37DD14u;
    // 0x37dd14: 0x24430020  addiu       $v1, $v0, 0x20
    ctx->pc = 0x37dd14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x37dd18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37dd18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37dd1c: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x37dd1cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37dd20: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x37dd20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x37dd24: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x37dd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x37dd28: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x37dd28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37dd2c: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x37dd2cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x37dd30: 0x26032b50  addiu       $v1, $s0, 0x2B50
    ctx->pc = 0x37dd30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 11088));
    // 0x37dd34: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x37dd34u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37dd38: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x37DD38u;
    {
        const bool branch_taken_0x37dd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37DD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DD38u;
        // 0x37dd3c: 0x7c640000  sq          $a0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37dd38) {
            ctx->pc = 0x37DD58u;
            goto label_37dd58;
        }
    }
    ctx->pc = 0x37DD40u;
label_37dd40:
    // 0x37dd40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37dd40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37dd44: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x37dd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x37dd48: 0x26032b50  addiu       $v1, $s0, 0x2B50
    ctx->pc = 0x37dd48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 11088));
    // 0x37dd4c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x37dd4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37dd50: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x37dd50u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x37dd54: 0x0  nop
    ctx->pc = 0x37dd54u;
    // NOP
label_37dd58:
    // 0x37dd58: 0x3c03457a  lui         $v1, 0x457A
    ctx->pc = 0x37dd58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17786 << 16));
    // 0x37dd5c: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x37dd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37dd60: 0x3c02c58c  lui         $v0, 0xC58C
    ctx->pc = 0x37dd60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50572 << 16));
    // 0x37dd64: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x37dd64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37dd68: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x37dd68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x37dd6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37dd6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37dd70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37dd70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37dd74: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x37dd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x37dd78: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x37dd78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x37dd7c: 0xe6010024  swc1        $f1, 0x24($s0)
    ctx->pc = 0x37dd7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x37dd80: 0xc6012b54  lwc1        $f1, 0x2B54($s0)
    ctx->pc = 0x37dd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37dd84: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x37dd84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x37dd88: 0xe6002b54  swc1        $f0, 0x2B54($s0)
    ctx->pc = 0x37dd88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11092), bits); }
    // 0x37dd8c: 0xa60200c0  sh          $v0, 0xC0($s0)
    ctx->pc = 0x37dd8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 192), (uint16_t)GPR_U32(ctx, 2));
    // 0x37dd90: 0xa60000c2  sh          $zero, 0xC2($s0)
    ctx->pc = 0x37dd90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 194), (uint16_t)GPR_U32(ctx, 0));
    // 0x37dd94: 0xc0e049c  jal         func_381270
    ctx->pc = 0x37DD94u;
    SET_GPR_U32(ctx, 31, 0x37DD9Cu);
    ctx->pc = 0x37DD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DD94u;
    // 0x37dd98: 0xa60000c4  sh          $zero, 0xC4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 196), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x381270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381270u, 0x37DD94u, 0x37DD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DD9Cu;
label_37dd9c:
    // 0x37dd9c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x37dd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x37dda0: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x37dda0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x37dda4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x37dda4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x37dda8: 0xae032b70  sw          $v1, 0x2B70($s0)
    ctx->pc = 0x37dda8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11120), GPR_U32(ctx, 3));
    // 0x37ddac: 0xc0dfcb8  jal         func_37F2E0
    ctx->pc = 0x37DDACu;
    SET_GPR_U32(ctx, 31, 0x37DDB4u);
    ctx->pc = 0x37DDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DDACu;
    // 0x37ddb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F2E0u, 0x37DDACu, 0x37DDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DDB4u;
label_37ddb4:
    // 0x37ddb4: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x37ddb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x37ddb8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37ddb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x37ddbc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x37DDBCu;
    {
        const bool branch_taken_0x37ddbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37DDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DDBCu;
        // 0x37ddc0: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ddbc) {
            ctx->pc = 0x37DDD8u;
            goto label_37ddd8;
        }
    }
    ctx->pc = 0x37DDC4u;
    // 0x37ddc4: 0x0  nop
    ctx->pc = 0x37ddc4u;
    // NOP
label_37ddc8:
    // 0x37ddc8: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x37ddc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x37ddcc: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x37DDCCu;
    {
        const bool branch_taken_0x37ddcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37DDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DDCCu;
        // 0x37ddd0: 0xa6030826  sh          $v1, 0x826($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2086), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ddcc) {
            ctx->pc = 0x37E0B8u;
            goto label_37e0b8;
        }
    }
    ctx->pc = 0x37DDD4u;
    // 0x37ddd4: 0x0  nop
    ctx->pc = 0x37ddd4u;
    // NOP
label_37ddd8:
    // 0x37ddd8: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x37ddd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x37dddc: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x37dddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37dde0: 0x3c043c88  lui         $a0, 0x3C88
    ctx->pc = 0x37dde0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15496 << 16));
    // 0x37dde4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x37dde4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x37dde8: 0x34848889  ori         $a0, $a0, 0x8889
    ctx->pc = 0x37dde8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x37ddec: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x37ddecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37ddf0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x37ddf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x37ddf4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37ddf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37ddf8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x37ddf8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x37ddfc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x37ddfcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x37de00: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x37de00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37de04: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x37DE04u;
    {
        const bool branch_taken_0x37de04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37de04) {
            ctx->pc = 0x37DE1Cu;
            goto label_37de1c;
        }
    }
    ctx->pc = 0x37DE0Cu;
    // 0x37de0c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37de0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x37de10: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x37de10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x37de14: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37DE14u;
    {
        const bool branch_taken_0x37de14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37DE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DE14u;
        // 0x37de18: 0x96040826  lhu         $a0, 0x826($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2086)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37de14) {
            ctx->pc = 0x37DE38u;
            goto label_37de38;
        }
    }
    ctx->pc = 0x37DE1Cu;
label_37de1c:
    // 0x37de1c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x37de1cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x37de20: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x37de20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x37de24: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37de24u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x37de28: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x37de28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x37de2c: 0x0  nop
    ctx->pc = 0x37de2cu;
    // NOP
    // 0x37de30: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x37de30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x37de34: 0x96040826  lhu         $a0, 0x826($s0)
    ctx->pc = 0x37de34u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2086)));
label_37de38:
    // 0x37de38: 0x85182b  sltu        $v1, $a0, $a1
    ctx->pc = 0x37de38u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x37de3c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x37DE3Cu;
    {
        const bool branch_taken_0x37de3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x37de3c) {
            ctx->pc = 0x37DE58u;
            goto label_37de58;
        }
    }
    ctx->pc = 0x37DE44u;
    // 0x37de44: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x37de44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x37de48: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37de48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x37de4c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x37DE4Cu;
    {
        const bool branch_taken_0x37de4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37DE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DE4Cu;
        // 0x37de50: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37de4c) {
            ctx->pc = 0x37DE68u;
            goto label_37de68;
        }
    }
    ctx->pc = 0x37DE54u;
    // 0x37de54: 0x0  nop
    ctx->pc = 0x37de54u;
    // NOP
label_37de58:
    // 0x37de58: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x37de58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x37de5c: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x37DE5Cu;
    {
        const bool branch_taken_0x37de5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37DE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DE5Cu;
        // 0x37de60: 0xa6030826  sh          $v1, 0x826($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2086), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37de5c) {
            ctx->pc = 0x37E0B8u;
            goto label_37e0b8;
        }
    }
    ctx->pc = 0x37DE64u;
    // 0x37de64: 0x0  nop
    ctx->pc = 0x37de64u;
    // NOP
label_37de68:
    // 0x37de68: 0x92040821  lbu         $a0, 0x821($s0)
    ctx->pc = 0x37de68u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x37de6c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x37de6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x37de70: 0x10830025  beq         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x37DE70u;
    {
        const bool branch_taken_0x37de70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x37de70) {
            ctx->pc = 0x37DF08u;
            goto label_37df08;
        }
    }
    ctx->pc = 0x37DE78u;
    // 0x37de78: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x37de78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x37de7c: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x37DE7Cu;
    {
        const bool branch_taken_0x37de7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x37de7c) {
            ctx->pc = 0x37DED8u;
            goto label_37ded8;
        }
    }
    ctx->pc = 0x37DE84u;
    // 0x37de84: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x37de84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37de88: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x37DE88u;
    {
        const bool branch_taken_0x37de88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x37de88) {
            ctx->pc = 0x37DE98u;
            goto label_37de98;
        }
    }
    ctx->pc = 0x37DE90u;
    // 0x37de90: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x37DE90u;
    {
        const bool branch_taken_0x37de90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37de90) {
            ctx->pc = 0x37DF08u;
            goto label_37df08;
        }
    }
    ctx->pc = 0x37DE98u;
label_37de98:
    // 0x37de98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37de98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37de9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37de9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37dea0: 0xc0e01cc  jal         func_380730
    ctx->pc = 0x37DEA0u;
    SET_GPR_U32(ctx, 31, 0x37DEA8u);
    ctx->pc = 0x37DEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DEA0u;
    // 0x37dea4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380730u, 0x37DEA0u, 0x37DEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DEA8u;
label_37dea8:
    // 0x37dea8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x37DEA8u;
    {
        const bool branch_taken_0x37dea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37dea8) {
            ctx->pc = 0x37DF08u;
            goto label_37df08;
        }
    }
    ctx->pc = 0x37DEB0u;
    // 0x37deb0: 0x92022b78  lbu         $v0, 0x2B78($s0)
    ctx->pc = 0x37deb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11128)));
    // 0x37deb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37deb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37deb8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x37deb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x37debc: 0xc0e0250  jal         func_380940
    ctx->pc = 0x37DEBCu;
    SET_GPR_U32(ctx, 31, 0x37DEC4u);
    ctx->pc = 0x37DEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DEBCu;
    // 0x37dec0: 0xa2022b78  sb          $v0, 0x2B78($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 11128), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380940u, 0x37DEBCu, 0x37DEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DEC4u;
label_37dec4:
    // 0x37dec4: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x37dec4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x37dec8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37dec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x37decc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x37DECCu;
    {
        const bool branch_taken_0x37decc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37DED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DECCu;
        // 0x37ded0: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37decc) {
            ctx->pc = 0x37DF08u;
            goto label_37df08;
        }
    }
    ctx->pc = 0x37DED4u;
    // 0x37ded4: 0x0  nop
    ctx->pc = 0x37ded4u;
    // NOP
label_37ded8:
    // 0x37ded8: 0x96032b9c  lhu         $v1, 0x2B9C($s0)
    ctx->pc = 0x37ded8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 11164)));
    // 0x37dedc: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x37DEDCu;
    {
        const bool branch_taken_0x37dedc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x37dedc) {
            ctx->pc = 0x37DF08u;
            goto label_37df08;
        }
    }
    ctx->pc = 0x37DEE4u;
    // 0x37dee4: 0xc0e02a0  jal         func_380A80
    ctx->pc = 0x37DEE4u;
    SET_GPR_U32(ctx, 31, 0x37DEECu);
    ctx->pc = 0x37DEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DEE4u;
    // 0x37dee8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380A80u, 0x37DEE4u, 0x37DEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DEECu;
label_37deec:
    // 0x37deec: 0x92032b78  lbu         $v1, 0x2B78($s0)
    ctx->pc = 0x37deecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11128)));
    // 0x37def0: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x37def0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x37def4: 0xa2032b78  sb          $v1, 0x2B78($s0)
    ctx->pc = 0x37def4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11128), (uint8_t)GPR_U32(ctx, 3));
    // 0x37def8: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x37def8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x37defc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37defcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x37df00: 0xa2030821  sb          $v1, 0x821($s0)
    ctx->pc = 0x37df00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
    // 0x37df04: 0x0  nop
    ctx->pc = 0x37df04u;
    // NOP
label_37df08:
    // 0x37df08: 0x9603082a  lhu         $v1, 0x82A($s0)
    ctx->pc = 0x37df08u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2090)));
    // 0x37df0c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x37df0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x37df10: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x37DF10u;
    {
        const bool branch_taken_0x37df10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x37df10) {
            ctx->pc = 0x37DF48u;
            goto label_37df48;
        }
    }
    ctx->pc = 0x37DF18u;
    // 0x37df18: 0x8e032b80  lw          $v1, 0x2B80($s0)
    ctx->pc = 0x37df18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11136)));
    // 0x37df1c: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x37df1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37df20: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x37df20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37df24: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x37df24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37df28: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x37DF28u;
    {
        const bool branch_taken_0x37df28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x37df28) {
            ctx->pc = 0x37DF48u;
            goto label_37df48;
        }
    }
    ctx->pc = 0x37DF30u;
    // 0x37df30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37df30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37df34: 0xc0e02a8  jal         func_380AA0
    ctx->pc = 0x37DF34u;
    SET_GPR_U32(ctx, 31, 0x37DF3Cu);
    ctx->pc = 0x37DF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DF34u;
    // 0x37df38: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380AA0u, 0x37DF34u, 0x37DF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DF3Cu;
label_37df3c:
    // 0x37df3c: 0x9603082a  lhu         $v1, 0x82A($s0)
    ctx->pc = 0x37df3cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2090)));
    // 0x37df40: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x37df40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x37df44: 0xa603082a  sh          $v1, 0x82A($s0)
    ctx->pc = 0x37df44u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2090), (uint16_t)GPR_U32(ctx, 3));
label_37df48:
    // 0x37df48: 0x9603082a  lhu         $v1, 0x82A($s0)
    ctx->pc = 0x37df48u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2090)));
    // 0x37df4c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x37df4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x37df50: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x37DF50u;
    {
        const bool branch_taken_0x37df50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x37df50) {
            ctx->pc = 0x37DFB8u;
            goto label_37dfb8;
        }
    }
    ctx->pc = 0x37DF58u;
    // 0x37df58: 0x8e042b80  lw          $a0, 0x2B80($s0)
    ctx->pc = 0x37df58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11136)));
    // 0x37df5c: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x37df5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x37df60: 0xc6012ba4  lwc1        $f1, 0x2BA4($s0)
    ctx->pc = 0x37df60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37df64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37df64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37df68: 0xc4820024  lwc1        $f2, 0x24($a0)
    ctx->pc = 0x37df68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37df6c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x37df6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x37df70: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x37df70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37df74: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x37DF74u;
    {
        const bool branch_taken_0x37df74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37df74) {
            ctx->pc = 0x37DF90u;
            goto label_37df90;
        }
    }
    ctx->pc = 0x37DF7Cu;
    // 0x37df7c: 0x92030821  lbu         $v1, 0x821($s0)
    ctx->pc = 0x37df7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x37df80: 0x28630005  slti        $v1, $v1, 0x5
    ctx->pc = 0x37df80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x37df84: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x37DF84u;
    {
        const bool branch_taken_0x37df84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x37df84) {
            ctx->pc = 0x37DFB8u;
            goto label_37dfb8;
        }
    }
    ctx->pc = 0x37DF8Cu;
    // 0x37df8c: 0x0  nop
    ctx->pc = 0x37df8cu;
    // NOP
label_37df90:
    // 0x37df90: 0x92032b78  lbu         $v1, 0x2B78($s0)
    ctx->pc = 0x37df90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11128)));
    // 0x37df94: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x37df94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x37df98: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x37DF98u;
    {
        const bool branch_taken_0x37df98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37df98) {
            ctx->pc = 0x37DFA8u;
            goto label_37dfa8;
        }
    }
    ctx->pc = 0x37DFA0u;
    // 0x37dfa0: 0xc0e02b4  jal         func_380AD0
    ctx->pc = 0x37DFA0u;
    SET_GPR_U32(ctx, 31, 0x37DFA8u);
    ctx->pc = 0x37DFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DFA0u;
    // 0x37dfa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380AD0u, 0x37DFA0u, 0x37DFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DFA8u;
label_37dfa8:
    // 0x37dfa8: 0x9603082a  lhu         $v1, 0x82A($s0)
    ctx->pc = 0x37dfa8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2090)));
    // 0x37dfac: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x37dfacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x37dfb0: 0xa603082a  sh          $v1, 0x82A($s0)
    ctx->pc = 0x37dfb0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2090), (uint16_t)GPR_U32(ctx, 3));
    // 0x37dfb4: 0x0  nop
    ctx->pc = 0x37dfb4u;
    // NOP
label_37dfb8:
    // 0x37dfb8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x37dfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37dfbc: 0xa2032bbd  sb          $v1, 0x2BBD($s0)
    ctx->pc = 0x37dfbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11197), (uint8_t)GPR_U32(ctx, 3));
    // 0x37dfc0: 0x92040821  lbu         $a0, 0x821($s0)
    ctx->pc = 0x37dfc0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2081)));
    // 0x37dfc4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x37dfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x37dfc8: 0x1083003b  beq         $a0, $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x37DFC8u;
    {
        const bool branch_taken_0x37dfc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x37dfc8) {
            ctx->pc = 0x37E0B8u;
            goto label_37e0b8;
        }
    }
    ctx->pc = 0x37DFD0u;
    // 0x37dfd0: 0x8e0507c0  lw          $a1, 0x7C0($s0)
    ctx->pc = 0x37dfd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1984)));
    // 0x37dfd4: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x37dfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x37dfd8: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x37DFD8u;
    SET_GPR_U32(ctx, 31, 0x37DFE0u);
    ctx->pc = 0x37DFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DFD8u;
    // 0x37dfdc: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x37DFD8u, 0x37DFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DFE0u;
label_37dfe0:
    // 0x37dfe0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x37DFE0u;
    {
        const bool branch_taken_0x37dfe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37dfe0) {
            ctx->pc = 0x37E018u;
            goto label_37e018;
        }
    }
    ctx->pc = 0x37DFE8u;
    // 0x37dfe8: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x37dfe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37dfec: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x37dfecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37dff0: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x37dff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x37dff4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37dff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37dff8: 0x0  nop
    ctx->pc = 0x37dff8u;
    // NOP
    // 0x37dffc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x37dffcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x37e000: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x37e000u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37e004: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x37E004u;
    {
        const bool branch_taken_0x37e004 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x37e004) {
            ctx->pc = 0x37E018u;
            goto label_37e018;
        }
    }
    ctx->pc = 0x37E00Cu;
    // 0x37e00c: 0x96020030  lhu         $v0, 0x30($s0)
    ctx->pc = 0x37e00cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x37e010: 0x3042ffbf  andi        $v0, $v0, 0xFFBF
    ctx->pc = 0x37e010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65471);
    // 0x37e014: 0xa6020030  sh          $v0, 0x30($s0)
    ctx->pc = 0x37e014u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 2));
label_37e018:
    // 0x37e018: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37e018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e01c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37e01cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e020: 0xc0dfde8  jal         func_37F7A0
    ctx->pc = 0x37E020u;
    SET_GPR_U32(ctx, 31, 0x37E028u);
    ctx->pc = 0x37E024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E020u;
    // 0x37e024: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F7A0u, 0x37E020u, 0x37E028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E028u;
label_37e028:
    // 0x37e028: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x37E028u;
    {
        const bool branch_taken_0x37e028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37e028) {
            ctx->pc = 0x37E078u;
            goto label_37e078;
        }
    }
    ctx->pc = 0x37E030u;
    // 0x37e030: 0xc6022b54  lwc1        $f2, 0x2B54($s0)
    ctx->pc = 0x37e030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x37e034: 0xc6012b70  lwc1        $f1, 0x2B70($s0)
    ctx->pc = 0x37e034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37e038: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x37e038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37e03c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x37e03cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x37e040: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x37e040u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37e044: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x37E044u;
    {
        const bool branch_taken_0x37e044 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x37e044) {
            ctx->pc = 0x37E078u;
            goto label_37e078;
        }
    }
    ctx->pc = 0x37E04Cu;
    // 0x37e04c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37e04cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e050: 0xc0dfebc  jal         func_37FAF0
    ctx->pc = 0x37E050u;
    SET_GPR_U32(ctx, 31, 0x37E058u);
    ctx->pc = 0x37E054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E050u;
    // 0x37e054: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FAF0u, 0x37E050u, 0x37E058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E058u;
label_37e058:
    // 0x37e058: 0x260401c0  addiu       $a0, $s0, 0x1C0
    ctx->pc = 0x37e058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    // 0x37e05c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x37e05cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e060: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37e060u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37e064: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x37e064u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37e068: 0xc09f9a4  jal         func_27E690
    ctx->pc = 0x37E068u;
    SET_GPR_U32(ctx, 31, 0x37E070u);
    ctx->pc = 0x37E06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E068u;
    // 0x37e06c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E690u, 0x37E068u, 0x37E070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E070u;
label_37e070:
    // 0x37e070: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x37E070u;
    {
        const bool branch_taken_0x37e070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37e070) {
            ctx->pc = 0x37E0B8u;
            goto label_37e0b8;
        }
    }
    ctx->pc = 0x37E078u;
label_37e078:
    // 0x37e078: 0x92032b7a  lbu         $v1, 0x2B7A($s0)
    ctx->pc = 0x37e078u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11130)));
    // 0x37e07c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x37E07Cu;
    {
        const bool branch_taken_0x37e07c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37e07c) {
            ctx->pc = 0x37E0A0u;
            goto label_37e0a0;
        }
    }
    ctx->pc = 0x37E084u;
    // 0x37e084: 0x92042b78  lbu         $a0, 0x2B78($s0)
    ctx->pc = 0x37e084u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11128)));
    // 0x37e088: 0x240300f6  addiu       $v1, $zero, 0xF6
    ctx->pc = 0x37e088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
    // 0x37e08c: 0x308400df  andi        $a0, $a0, 0xDF
    ctx->pc = 0x37e08cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)223);
    // 0x37e090: 0xa2042b78  sb          $a0, 0x2B78($s0)
    ctx->pc = 0x37e090u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11128), (uint8_t)GPR_U32(ctx, 4));
    // 0x37e094: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37E094u;
    {
        const bool branch_taken_0x37e094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E094u;
        // 0x37e098: 0xa2030780  sb          $v1, 0x780($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e094) {
            ctx->pc = 0x37E0B8u;
            goto label_37e0b8;
        }
    }
    ctx->pc = 0x37E09Cu;
    // 0x37e09c: 0x0  nop
    ctx->pc = 0x37e09cu;
    // NOP
label_37e0a0:
    // 0x37e0a0: 0x92042b78  lbu         $a0, 0x2B78($s0)
    ctx->pc = 0x37e0a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11128)));
    // 0x37e0a4: 0x240300f5  addiu       $v1, $zero, 0xF5
    ctx->pc = 0x37e0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
    // 0x37e0a8: 0x308400df  andi        $a0, $a0, 0xDF
    ctx->pc = 0x37e0a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)223);
    // 0x37e0ac: 0xa2042b78  sb          $a0, 0x2B78($s0)
    ctx->pc = 0x37e0acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11128), (uint8_t)GPR_U32(ctx, 4));
    // 0x37e0b0: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x37e0b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
    // 0x37e0b4: 0x0  nop
    ctx->pc = 0x37e0b4u;
    // NOP
label_37e0b8:
    // 0x37e0b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37e0b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37e0bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37e0bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37e0c0: 0x3e00008  jr          $ra
    ctx->pc = 0x37E0C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37E0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E0C0u;
        // 0x37e0c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37E0C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37E0C8u;
}
