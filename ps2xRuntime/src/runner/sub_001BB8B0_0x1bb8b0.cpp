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

// Function: sub_001BB8B0
// Address: 0x1bb8b0 - 0x1bc830
void sub_001BB8B0_0x1bb8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB8B0_0x1bb8b0");
#endif

    switch (ctx->pc) {
        case 0x1bb8e4u: goto label_1bb8e4;
        case 0x1bb900u: goto label_1bb900;
        case 0x1bb90cu: goto label_1bb90c;
        case 0x1bb918u: goto label_1bb918;
        case 0x1bb988u: goto label_1bb988;
        case 0x1bba70u: goto label_1bba70;
        case 0x1bbb48u: goto label_1bbb48;
        case 0x1bbb5cu: goto label_1bbb5c;
        case 0x1bbb64u: goto label_1bbb64;
        case 0x1bbb7cu: goto label_1bbb7c;
        case 0x1bbb98u: goto label_1bbb98;
        case 0x1bbbb4u: goto label_1bbbb4;
        case 0x1bbbf4u: goto label_1bbbf4;
        case 0x1bbbfcu: goto label_1bbbfc;
        case 0x1bbc28u: goto label_1bbc28;
        case 0x1bbc48u: goto label_1bbc48;
        case 0x1bbc58u: goto label_1bbc58;
        case 0x1bbc68u: goto label_1bbc68;
        case 0x1bbc8cu: goto label_1bbc8c;
        case 0x1bbcb8u: goto label_1bbcb8;
        case 0x1bbcc8u: goto label_1bbcc8;
        case 0x1bbd1cu: goto label_1bbd1c;
        case 0x1bbd38u: goto label_1bbd38;
        case 0x1bbd80u: goto label_1bbd80;
        case 0x1bbd94u: goto label_1bbd94;
        case 0x1bbdb8u: goto label_1bbdb8;
        case 0x1bbdccu: goto label_1bbdcc;
        case 0x1bbde4u: goto label_1bbde4;
        case 0x1bbe18u: goto label_1bbe18;
        case 0x1bbf5cu: goto label_1bbf5c;
        case 0x1bbf70u: goto label_1bbf70;
        case 0x1bbf78u: goto label_1bbf78;
        case 0x1bbf90u: goto label_1bbf90;
        case 0x1bbfacu: goto label_1bbfac;
        case 0x1bbfc8u: goto label_1bbfc8;
        case 0x1bc008u: goto label_1bc008;
        case 0x1bc010u: goto label_1bc010;
        case 0x1bc03cu: goto label_1bc03c;
        case 0x1bc05cu: goto label_1bc05c;
        case 0x1bc06cu: goto label_1bc06c;
        case 0x1bc07cu: goto label_1bc07c;
        case 0x1bc098u: goto label_1bc098;
        case 0x1bc0a8u: goto label_1bc0a8;
        case 0x1bc0fcu: goto label_1bc0fc;
        case 0x1bc118u: goto label_1bc118;
        case 0x1bc160u: goto label_1bc160;
        case 0x1bc174u: goto label_1bc174;
        case 0x1bc198u: goto label_1bc198;
        case 0x1bc1acu: goto label_1bc1ac;
        case 0x1bc1c4u: goto label_1bc1c4;
        case 0x1bc1f0u: goto label_1bc1f0;
        case 0x1bc354u: goto label_1bc354;
        case 0x1bc35cu: goto label_1bc35c;
        case 0x1bc38cu: goto label_1bc38c;
        case 0x1bc394u: goto label_1bc394;
        case 0x1bc3acu: goto label_1bc3ac;
        case 0x1bc3c8u: goto label_1bc3c8;
        case 0x1bc3e4u: goto label_1bc3e4;
        case 0x1bc424u: goto label_1bc424;
        case 0x1bc440u: goto label_1bc440;
        case 0x1bc488u: goto label_1bc488;
        case 0x1bc49cu: goto label_1bc49c;
        case 0x1bc4c0u: goto label_1bc4c0;
        case 0x1bc4d4u: goto label_1bc4d4;
        case 0x1bc4ecu: goto label_1bc4ec;
        case 0x1bc510u: goto label_1bc510;
        case 0x1bc674u: goto label_1bc674;
        case 0x1bc67cu: goto label_1bc67c;
        case 0x1bc6acu: goto label_1bc6ac;
        case 0x1bc6b4u: goto label_1bc6b4;
        case 0x1bc6d0u: goto label_1bc6d0;
        case 0x1bc6ecu: goto label_1bc6ec;
        case 0x1bc72cu: goto label_1bc72c;
        case 0x1bc748u: goto label_1bc748;
        case 0x1bc790u: goto label_1bc790;
        case 0x1bc7a4u: goto label_1bc7a4;
        case 0x1bc7c8u: goto label_1bc7c8;
        case 0x1bc7dcu: goto label_1bc7dc;
        case 0x1bc7f4u: goto label_1bc7f4;
        default: break;
    }

    ctx->pc = 0x1bb8b0u;

    // 0x1bb8b0: 0x27bdfba0  addiu       $sp, $sp, -0x460
    ctx->pc = 0x1bb8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966176));
    // 0x1bb8b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bb8b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb8b8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1bb8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1bb8bc: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x1bb8bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1bb8c0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1bb8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1bb8c4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bb8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1bb8c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bb8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bb8cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bb8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bb8d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1bb8d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb8d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1bb8d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb8d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bb8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bb8dc: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1BB8DCu;
    SET_GPR_U32(ctx, 31, 0x1BB8E4u);
    ctx->pc = 0x1BB8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB8DCu;
    // 0x1bb8e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1BB8DCu, 0x1BB8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB8E4u;
label_1bb8e4:
    // 0x1bb8e4: 0x8e4278b4  lw          $v0, 0x78B4($s2)
    ctx->pc = 0x1bb8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30900)));
    // 0x1bb8e8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1bb8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1bb8ec: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x1bb8ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1bb8f0: 0x1020008d  beqz        $at, . + 4 + (0x8D << 2)
    ctx->pc = 0x1BB8F0u;
    {
        const bool branch_taken_0x1bb8f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB8F0u;
        // 0x1bb8f4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb8f0) {
            ctx->pc = 0x1BBB28u;
            goto label_1bbb28;
        }
    }
    ctx->pc = 0x1BB8F8u;
    // 0x1bb8f8: 0x3c137000  lui         $s3, 0x7000
    ctx->pc = 0x1bb8f8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)28672 << 16));
    // 0x1bb8fc: 0x0  nop
    ctx->pc = 0x1bb8fcu;
    // NOP
label_1bb900:
    // 0x1bb900: 0x320500ff  andi        $a1, $s0, 0xFF
    ctx->pc = 0x1bb900u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1bb904: 0xc07051c  jal         func_1C1470
    ctx->pc = 0x1BB904u;
    SET_GPR_U32(ctx, 31, 0x1BB90Cu);
    ctx->pc = 0x1BB908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB904u;
    // 0x1bb908: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1470u, 0x1BB904u, 0x1BB90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB90Cu;
label_1bb90c:
    // 0x1bb90c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1bb90cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb910: 0xc070550  jal         func_1C1540
    ctx->pc = 0x1BB910u;
    SET_GPR_U32(ctx, 31, 0x1BB918u);
    ctx->pc = 0x1BB914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB910u;
    // 0x1bb914: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1540u, 0x1BB910u, 0x1BB918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB918u;
label_1bb918:
    // 0x1bb918: 0xc6230010  lwc1        $f3, 0x10($s1)
    ctx->pc = 0x1bb918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1bb91c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1bb91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x1bb920: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x1bb920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bb924: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bb924u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bb928: 0x0  nop
    ctx->pc = 0x1bb928u;
    // NOP
    // 0x1bb92c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1bb92cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1bb930: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x1bb930u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x1bb934: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1bb934u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1bb938: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1bb938u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1bb93c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1bb93cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1bb940: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1bb940u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1bb944: 0x0  nop
    ctx->pc = 0x1bb944u;
    // NOP
    // 0x1bb948: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB948u;
    {
        const bool branch_taken_0x1bb948 = (GPR_S64(ctx, 7) >= 0);
        if (branch_taken_0x1bb948) {
            ctx->pc = 0x1BB958u;
            goto label_1bb958;
        }
    }
    ctx->pc = 0x1BB950u;
    // 0x1bb950: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bb950u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb954: 0x0  nop
    ctx->pc = 0x1bb954u;
    // NOP
label_1bb958:
    // 0x1bb958: 0x28e10100  slti        $at, $a3, 0x100
    ctx->pc = 0x1bb958u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x1bb95c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BB95Cu;
    {
        const bool branch_taken_0x1bb95c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb95c) {
            ctx->pc = 0x1BB968u;
            goto label_1bb968;
        }
    }
    ctx->pc = 0x1BB964u;
    // 0x1bb964: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x1bb964u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1bb968:
    // 0x1bb968: 0x8e280068  lw          $t0, 0x68($s1)
    ctx->pc = 0x1bb968u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x1bb96c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1bb96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1bb970: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1bb970u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb974: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1bb974u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb978: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1bb978u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb97c: 0x8082b  sltu        $at, $zero, $t0
    ctx->pc = 0x1bb97cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1bb980: 0x10200037  beqz        $at, . + 4 + (0x37 << 2)
    ctx->pc = 0x1BB980u;
    {
        const bool branch_taken_0x1bb980 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB980u;
        // 0x1bb984: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb980) {
            ctx->pc = 0x1BBA60u;
            goto label_1bba60;
        }
    }
    ctx->pc = 0x1BB988u;
label_1bb988:
    // 0x1bb988: 0x2292021  addu        $a0, $s1, $t1
    ctx->pc = 0x1bb988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
    // 0x1bb98c: 0x90840058  lbu         $a0, 0x58($a0)
    ctx->pc = 0x1bb98cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x1bb990: 0x87082a  slt         $at, $a0, $a3
    ctx->pc = 0x1bb990u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1bb994: 0x1420002e  bnez        $at, . + 4 + (0x2E << 2)
    ctx->pc = 0x1BB994u;
    {
        const bool branch_taken_0x1bb994 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb994) {
            ctx->pc = 0x1BBA50u;
            goto label_1bba50;
        }
    }
    ctx->pc = 0x1BB99Cu;
    // 0x1bb99c: 0x11200002  beqz        $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BB99Cu;
    {
        const bool branch_taken_0x1bb99c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB99Cu;
        // 0x1bb9a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb99c) {
            ctx->pc = 0x1BB9A8u;
            goto label_1bb9a8;
        }
    }
    ctx->pc = 0x1BB9A4u;
    // 0x1bb9a4: 0x2526ffff  addiu       $a2, $t1, -0x1
    ctx->pc = 0x1bb9a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_1bb9a8:
    // 0x1bb9a8: 0x2261021  addu        $v0, $s1, $a2
    ctx->pc = 0x1bb9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x1bb9ac: 0x90430058  lbu         $v1, 0x58($v0)
    ctx->pc = 0x1bb9acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1bb9b0: 0x14e30003  bne         $a3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB9B0u;
    {
        const bool branch_taken_0x1bb9b0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BB9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB9B0u;
        // 0x1bb9b4: 0x831023  subu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb9b0) {
            ctx->pc = 0x1BB9C0u;
            goto label_1bb9c0;
        }
    }
    ctx->pc = 0x1BB9B8u;
    // 0x1bb9b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BB9B8u;
    {
        const bool branch_taken_0x1bb9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB9B8u;
        // 0x1bb9bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb9b8) {
            ctx->pc = 0x1BB9D8u;
            goto label_1bb9d8;
        }
    }
    ctx->pc = 0x1BB9C0u;
label_1bb9c0:
    // 0x1bb9c0: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x1bb9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1bb9c4: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x1bb9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x1bb9c8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1bb9c8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1bb9cc: 0x0  nop
    ctx->pc = 0x1bb9ccu;
    // NOP
    // 0x1bb9d0: 0x0  nop
    ctx->pc = 0x1bb9d0u;
    // NOP
    // 0x1bb9d4: 0x2012  mflo        $a0
    ctx->pc = 0x1bb9d4u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_1bb9d8:
    // 0x1bb9d8: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1bb9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1bb9dc: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x1bb9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1bb9e0: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1bb9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1bb9e4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1bb9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1bb9e8: 0x8c660018  lw          $a2, 0x18($v1)
    ctx->pc = 0x1bb9e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1bb9ec: 0x8c490018  lw          $t1, 0x18($v0)
    ctx->pc = 0x1bb9ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1bb9f0: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x1bb9f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1bb9f4: 0x61202  srl         $v0, $a2, 8
    ctx->pc = 0x1bb9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x1bb9f8: 0x304b00ff  andi        $t3, $v0, 0xFF
    ctx->pc = 0x1bb9f8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1bb9fc: 0x61402  srl         $v0, $a2, 16
    ctx->pc = 0x1bb9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x1bba00: 0x312600ff  andi        $a2, $t1, 0xFF
    ctx->pc = 0x1bba00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x1bba04: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1bba04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1bba08: 0xc34023  subu        $t0, $a2, $v1
    ctx->pc = 0x1bba08u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1bba0c: 0x885018  mult        $t2, $a0, $t0
    ctx->pc = 0x1bba0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x1bba10: 0x93202  srl         $a2, $t1, 8
    ctx->pc = 0x1bba10u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 8));
    // 0x1bba14: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1bba14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1bba18: 0xcb4023  subu        $t0, $a2, $t3
    ctx->pc = 0x1bba18u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x1bba1c: 0x93402  srl         $a2, $t1, 16
    ctx->pc = 0x1bba1cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x1bba20: 0x70884018  mult1       $t0, $a0, $t0
    ctx->pc = 0x1bba20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1bba24: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1bba24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1bba28: 0x849c2  srl         $t1, $t0, 7
    ctx->pc = 0x1bba28u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 8), 7));
    // 0x1bba2c: 0xc24023  subu        $t0, $a2, $v0
    ctx->pc = 0x1bba2cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1bba30: 0x882018  mult        $a0, $a0, $t0
    ctx->pc = 0x1bba30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1bba34: 0x1693021  addu        $a2, $t3, $t1
    ctx->pc = 0x1bba34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x1bba38: 0xa49c2  srl         $t1, $t2, 7
    ctx->pc = 0x1bba38u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 10), 7));
    // 0x1bba3c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1bba3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1bba40: 0x421c2  srl         $a0, $a0, 7
    ctx->pc = 0x1bba40u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 7));
    // 0x1bba44: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1BBA44u;
    {
        const bool branch_taken_0x1bba44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBA44u;
        // 0x1bba48: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bba44) {
            ctx->pc = 0x1BBA60u;
            goto label_1bba60;
        }
    }
    ctx->pc = 0x1BBA4Cu;
    // 0x1bba4c: 0x0  nop
    ctx->pc = 0x1bba4cu;
    // NOP
label_1bba50:
    // 0x1bba50: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1bba50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1bba54: 0x128202b  sltu        $a0, $t1, $t0
    ctx->pc = 0x1bba54u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1bba58: 0x1480ffcb  bnez        $a0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x1BBA58u;
    {
        const bool branch_taken_0x1bba58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bba58) {
            ctx->pc = 0x1BB988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bb988;
        }
    }
    ctx->pc = 0x1BBA60u;
label_1bba60:
    // 0x1bba60: 0x8e28008c  lw          $t0, 0x8C($s1)
    ctx->pc = 0x1bba60u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x1bba64: 0x8082b  sltu        $at, $zero, $t0
    ctx->pc = 0x1bba64u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1bba68: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
    ctx->pc = 0x1BBA68u;
    {
        const bool branch_taken_0x1bba68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBA68u;
        // 0x1bba6c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bba68) {
            ctx->pc = 0x1BBAF0u;
            goto label_1bbaf0;
        }
    }
    ctx->pc = 0x1BBA70u;
label_1bba70:
    // 0x1bba70: 0x22b5021  addu        $t2, $s1, $t3
    ctx->pc = 0x1bba70u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 11)));
    // 0x1bba74: 0x9149007c  lbu         $t1, 0x7C($t2)
    ctx->pc = 0x1bba74u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 124)));
    // 0x1bba78: 0x127082a  slt         $at, $t1, $a3
    ctx->pc = 0x1bba78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1bba7c: 0x14200018  bnez        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x1BBA7Cu;
    {
        const bool branch_taken_0x1bba7c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bba7c) {
            ctx->pc = 0x1BBAE0u;
            goto label_1bbae0;
        }
    }
    ctx->pc = 0x1BBA84u;
    // 0x1bba84: 0x11600002  beqz        $t3, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BBA84u;
    {
        const bool branch_taken_0x1bba84 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBA84u;
        // 0x1bba88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bba84) {
            ctx->pc = 0x1BBA90u;
            goto label_1bba90;
        }
    }
    ctx->pc = 0x1BBA8Cu;
    // 0x1bba8c: 0x2564ffff  addiu       $a0, $t3, -0x1
    ctx->pc = 0x1bba8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
label_1bba90:
    // 0x1bba90: 0x2244021  addu        $t0, $s1, $a0
    ctx->pc = 0x1bba90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1bba94: 0x9104007c  lbu         $a0, 0x7C($t0)
    ctx->pc = 0x1bba94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 124)));
    // 0x1bba98: 0x14e40003  bne         $a3, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BBA98u;
    {
        const bool branch_taken_0x1bba98 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 4));
        ctx->pc = 0x1BBA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBA98u;
        // 0x1bba9c: 0xe42823  subu        $a1, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bba98) {
            ctx->pc = 0x1BBAA8u;
            goto label_1bbaa8;
        }
    }
    ctx->pc = 0x1BBAA0u;
    // 0x1bbaa0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BBAA0u;
    {
        const bool branch_taken_0x1bbaa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBAA0u;
        // 0x1bbaa4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbaa0) {
            ctx->pc = 0x1BBAC0u;
            goto label_1bbac0;
        }
    }
    ctx->pc = 0x1BBAA8u;
label_1bbaa8:
    // 0x1bbaa8: 0x1242023  subu        $a0, $t1, $a0
    ctx->pc = 0x1bbaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x1bbaac: 0x529c0  sll         $a1, $a1, 7
    ctx->pc = 0x1bbaacu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x1bbab0: 0xa4001a  div         $zero, $a1, $a0
    ctx->pc = 0x1bbab0u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1bbab4: 0x0  nop
    ctx->pc = 0x1bbab4u;
    // NOP
    // 0x1bbab8: 0x0  nop
    ctx->pc = 0x1bbab8u;
    // NOP
    // 0x1bbabc: 0x3812  mflo        $a3
    ctx->pc = 0x1bbabcu;
    SET_GPR_U64(ctx, 7, ctx->lo);
label_1bbac0:
    // 0x1bbac0: 0x9105006c  lbu         $a1, 0x6C($t0)
    ctx->pc = 0x1bbac0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 108)));
    // 0x1bbac4: 0x9144006c  lbu         $a0, 0x6C($t2)
    ctx->pc = 0x1bbac4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 108)));
    // 0x1bbac8: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x1bbac8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1bbacc: 0xe42018  mult        $a0, $a3, $a0
    ctx->pc = 0x1bbaccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1bbad0: 0x421c3  sra         $a0, $a0, 7
    ctx->pc = 0x1bbad0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 7));
    // 0x1bbad4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1BBAD4u;
    {
        const bool branch_taken_0x1bbad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBAD4u;
        // 0x1bbad8: 0xa42821  addu        $a1, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbad4) {
            ctx->pc = 0x1BBAF0u;
            goto label_1bbaf0;
        }
    }
    ctx->pc = 0x1BBADCu;
    // 0x1bbadc: 0x0  nop
    ctx->pc = 0x1bbadcu;
    // NOP
label_1bbae0:
    // 0x1bbae0: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1bbae0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1bbae4: 0x168202b  sltu        $a0, $t3, $t0
    ctx->pc = 0x1bbae4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1bbae8: 0x1480ffe1  bnez        $a0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1BBAE8u;
    {
        const bool branch_taken_0x1bbae8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bbae8) {
            ctx->pc = 0x1BBA70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bba70;
        }
    }
    ctx->pc = 0x1BBAF0u;
label_1bbaf0:
    // 0x1bbaf0: 0x62200  sll         $a0, $a2, 8
    ctx->pc = 0x1bbaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x1bbaf4: 0x23c00  sll         $a3, $v0, 16
    ctx->pc = 0x1bbaf4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1bbaf8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bbaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bbafc: 0x51600  sll         $v0, $a1, 24
    ctx->pc = 0x1bbafcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1bbb00: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x1bbb00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1bbb04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bbb04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bbb08: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1bbb08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1bbb0c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1bbb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1bbb10: 0x8e4278b4  lw          $v0, 0x78B4($s2)
    ctx->pc = 0x1bbb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30900)));
    // 0x1bbb14: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1bbb14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1bbb18: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1bbb18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1bbb1c: 0x1440ff78  bnez        $v0, . + 4 + (-0x88 << 2)
    ctx->pc = 0x1BBB1Cu;
    {
        const bool branch_taken_0x1bbb1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BBB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBB1Cu;
        // 0x1bbb20: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbb1c) {
            ctx->pc = 0x1BB900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bb900;
        }
    }
    ctx->pc = 0x1BBB24u;
    // 0x1bbb24: 0x0  nop
    ctx->pc = 0x1bbb24u;
    // NOP
label_1bbb28:
    // 0x1bbb28: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x1bbb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x1bbb2c: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x1bbb2cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1bbb30: 0x102000b5  beqz        $at, . + 4 + (0xB5 << 2)
    ctx->pc = 0x1BBB30u;
    {
        const bool branch_taken_0x1bbb30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbb30) {
            ctx->pc = 0x1BBE08u;
            goto label_1bbe08;
        }
    }
    ctx->pc = 0x1BBB38u;
    // 0x1bbb38: 0x8e4578d0  lw          $a1, 0x78D0($s2)
    ctx->pc = 0x1bbb38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30928)));
    // 0x1bbb3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bbb3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbb40: 0xc070468  jal         func_1C11A0
    ctx->pc = 0x1BBB40u;
    SET_GPR_U32(ctx, 31, 0x1BBB48u);
    ctx->pc = 0x1BBB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBB40u;
    // 0x1bbb44: 0x3c067000  lui         $a2, 0x7000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C11A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C11A0u, 0x1BBB40u, 0x1BBB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBB48u;
label_1bbb48:
    // 0x1bbb48: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1bbb48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1bbb4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bbb4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbb50: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x1bbb50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1bbb54: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BBB54u;
    SET_GPR_U32(ctx, 31, 0x1BBB5Cu);
    ctx->pc = 0x1BBB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBB54u;
    // 0x1bbb58: 0x2303c  dsll32      $a2, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BBB54u, 0x1BBB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBB5Cu;
label_1bbb5c:
    // 0x1bbb5c: 0xc0705f4  jal         func_1C17D0
    ctx->pc = 0x1BBB5Cu;
    SET_GPR_U32(ctx, 31, 0x1BBB64u);
    ctx->pc = 0x1BBB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBB5Cu;
    // 0x1bbb60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C17D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C17D0u, 0x1BBB5Cu, 0x1BBB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBB64u;
label_1bbb64:
    // 0x1bbb64: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1bbb64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bbb68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bbb68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbb6c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bbb6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bbb70: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1bbb70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1bbb74: 0xc070600  jal         func_1C1800
    ctx->pc = 0x1BBB74u;
    SET_GPR_U32(ctx, 31, 0x1BBB7Cu);
    ctx->pc = 0x1BBB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBB74u;
    // 0x1bbb78: 0x628025  or          $s0, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1800u, 0x1BBB74u, 0x1BBB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBB7Cu;
label_1bbb7c:
    // 0x1bbb7c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bbb7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bbb80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bbb80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbb84: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bbb84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bbb88: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x1bbb88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1bbb8c: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x1bbb8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x1bbb90: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BBB90u;
    SET_GPR_U32(ctx, 31, 0x1BBB98u);
    ctx->pc = 0x1BBB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBB90u;
    // 0x1bbb94: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BBB90u, 0x1BBB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBB98u;
label_1bbb98:
    // 0x1bbb98: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bbb98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bbb9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bbb9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbba0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bbba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bbba4: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x1bbba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1bbba8: 0x216b8  dsll        $v0, $v0, 26
    ctx->pc = 0x1bbba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 26);
    // 0x1bbbac: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BBBACu;
    SET_GPR_U32(ctx, 31, 0x1BBBB4u);
    ctx->pc = 0x1BBBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBBACu;
    // 0x1bbbb0: 0x508025  or          $s0, $v0, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BBBACu, 0x1BBBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBBB4u;
label_1bbbb4:
    // 0x1bbbb4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1bbbb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bbbb8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1bbbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bbbbc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bbbbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bbbc0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1bbbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1bbbc4: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1bbbc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1bbbc8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bbbc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bbbcc: 0x702025  or          $a0, $v1, $s0
    ctx->pc = 0x1bbbccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x1bbbd0: 0x9e4378d0  lwu         $v1, 0x78D0($s2)
    ctx->pc = 0x1bbbd0u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 30928)));
    // 0x1bbbd4: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1bbbd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1bbbd8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1bbbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1bbbdc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bbbdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbbe0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bbbe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bbbe4: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1bbbe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1bbbe8: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1bbbe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1bbbec: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BBBECu;
    SET_GPR_U32(ctx, 31, 0x1BBBF4u);
    ctx->pc = 0x1BBBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBBECu;
    // 0x1bbbf0: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BBBECu, 0x1BBBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBBF4u;
label_1bbbf4:
    // 0x1bbbf4: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1BBBF4u;
    SET_GPR_U32(ctx, 31, 0x1BBBFCu);
    ctx->pc = 0x1BBBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBBF4u;
    // 0x1bbbf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1BBBF4u, 0x1BBBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBBFCu;
label_1bbbfc:
    // 0x1bbbfc: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1bbbfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bbc00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bbc00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbc04: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1bbc04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x1bbc08: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1bbc08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1bbc0c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1bbc0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bbc10: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1bbc10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1bbc14: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1bbc14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1bbc18: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1bbc18u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1bbc1c: 0xa23025  or          $a2, $a1, $v0
    ctx->pc = 0x1bbc1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1bbc20: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BBC20u;
    SET_GPR_U32(ctx, 31, 0x1BBC28u);
    ctx->pc = 0x1BBC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBC20u;
    // 0x1bbc24: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BBC20u, 0x1BBC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBC28u;
label_1bbc28:
    // 0x1bbc28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bbc28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bbc2c: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x1bbc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x1bbc30: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bbc30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bbc34: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x1bbc34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x1bbc38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bbc38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbc3c: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x1bbc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1bbc40: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BBC40u;
    SET_GPR_U32(ctx, 31, 0x1BBC48u);
    ctx->pc = 0x1BBC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBC40u;
    // 0x1bbc44: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BBC40u, 0x1BBC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBC48u;
label_1bbc48:
    // 0x1bbc48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bbc48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbc4c: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1bbc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1bbc50: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BBC50u;
    SET_GPR_U32(ctx, 31, 0x1BBC58u);
    ctx->pc = 0x1BBC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBC50u;
    // 0x1bbc54: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BBC50u, 0x1BBC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBC58u;
label_1bbc58:
    // 0x1bbc58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bbc58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbc5c: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1bbc5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1bbc60: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BBC60u;
    SET_GPR_U32(ctx, 31, 0x1BBC68u);
    ctx->pc = 0x1BBC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBC60u;
    // 0x1bbc64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BBC60u, 0x1BBC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBC68u;
label_1bbc68:
    // 0x1bbc68: 0x8e220090  lw          $v0, 0x90($s1)
    ctx->pc = 0x1bbc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x1bbc6c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BBC6Cu;
    {
        const bool branch_taken_0x1bbc6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BBC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBC6Cu;
        // 0x1bbc70: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbc6c) {
            ctx->pc = 0x1BBC90u;
            goto label_1bbc90;
        }
    }
    ctx->pc = 0x1BBC74u;
    // 0x1bbc74: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x1bbc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1bbc78: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bbc78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bbc7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bbc7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbc80: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1bbc80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1bbc84: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BBC84u;
    SET_GPR_U32(ctx, 31, 0x1BBC8Cu);
    ctx->pc = 0x1BBC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBC84u;
    // 0x1bbc88: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BBC84u, 0x1BBC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBC8Cu;
label_1bbc8c:
    // 0x1bbc8c: 0x0  nop
    ctx->pc = 0x1bbc8cu;
    // NOP
label_1bbc90:
    // 0x1bbc90: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x1bbc90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x1bbc94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bbc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bbc98: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BBC98u;
    {
        const bool branch_taken_0x1bbc98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BBC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBC98u;
        // 0x1bbc9c: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbc98) {
            ctx->pc = 0x1BBCB8u;
            goto label_1bbcb8;
        }
    }
    ctx->pc = 0x1BBCA0u;
    // 0x1bbca0: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x1bbca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1bbca4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bbca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bbca8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bbca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbcac: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1bbcacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1bbcb0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BBCB0u;
    SET_GPR_U32(ctx, 31, 0x1BBCB8u);
    ctx->pc = 0x1BBCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBCB0u;
    // 0x1bbcb4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BBCB0u, 0x1BBCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBCB8u;
label_1bbcb8:
    // 0x1bbcb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bbcb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbcbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bbcbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbcc0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BBCC0u;
    SET_GPR_U32(ctx, 31, 0x1BBCC8u);
    ctx->pc = 0x1BBCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBCC0u;
    // 0x1bbcc4: 0x24060356  addiu       $a2, $zero, 0x356 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BBCC0u, 0x1BBCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBCC8u;
label_1bbcc8:
    // 0x1bbcc8: 0x8e4678c8  lw          $a2, 0x78C8($s2)
    ctx->pc = 0x1bbcc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30920)));
    // 0x1bbccc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bbcccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbcd0: 0x9e4778cc  lwu         $a3, 0x78CC($s2)
    ctx->pc = 0x1bbcd0u;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 30924)));
    // 0x1bbcd4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1bbcd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1bbcd8: 0x8e4278c4  lw          $v0, 0x78C4($s2)
    ctx->pc = 0x1bbcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30916)));
    // 0x1bbcdc: 0x9e4378c0  lwu         $v1, 0x78C0($s2)
    ctx->pc = 0x1bbcdcu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 30912)));
    // 0x1bbce0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1bbce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1bbce4: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1bbce4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1bbce8: 0x73938  dsll        $a3, $a3, 4
    ctx->pc = 0x1bbce8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 4);
    // 0x1bbcec: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1bbcecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1bbcf0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bbcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bbcf4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bbcf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bbcf8: 0x34e7000a  ori         $a3, $a3, 0xA
    ctx->pc = 0x1bbcf8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)10);
    // 0x1bbcfc: 0x633b8  dsll        $a2, $a2, 14
    ctx->pc = 0x1bbcfcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x1bbd00: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bbd00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bbd04: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1bbd04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1bbd08: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x1bbd08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x1bbd0c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1bbd0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1bbd10: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1bbd10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x1bbd14: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BBD14u;
    SET_GPR_U32(ctx, 31, 0x1BBD1Cu);
    ctx->pc = 0x1BBD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBD14u;
    // 0x1bbd18: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BBD14u, 0x1BBD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBD1Cu;
label_1bbd1c:
    // 0x1bbd1c: 0x8e4378c8  lw          $v1, 0x78C8($s2)
    ctx->pc = 0x1bbd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30920)));
    // 0x1bbd20: 0x31982  srl         $v1, $v1, 6
    ctx->pc = 0x1bbd20u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
    // 0x1bbd24: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x1bbd24u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1bbd28: 0x102002b9  beqz        $at, . + 4 + (0x2B9 << 2)
    ctx->pc = 0x1BBD28u;
    {
        const bool branch_taken_0x1bbd28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBD28u;
        // 0x1bbd2c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbd28) {
            ctx->pc = 0x1BC810u;
            goto label_1bc810;
        }
    }
    ctx->pc = 0x1BBD30u;
    // 0x1bbd30: 0x2411003f  addiu       $s1, $zero, 0x3F
    ctx->pc = 0x1bbd30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1bbd34: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bbd34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bbd38:
    // 0x1bbd38: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x1bbd38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1bbd3c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bbd3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bbd40: 0x9e4678c0  lwu         $a2, 0x78C0($s2)
    ctx->pc = 0x1bbd40u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 30912)));
    // 0x1bbd44: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1bbd44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1bbd48: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x1bbd48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1bbd4c: 0x8e4278c4  lw          $v0, 0x78C4($s2)
    ctx->pc = 0x1bbd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30916)));
    // 0x1bbd50: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1bbd50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1bbd54: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1bbd54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1bbd58: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1bbd58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1bbd5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bbd5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbd60: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1bbd60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1bbd64: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1bbd64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1bbd68: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bbd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bbd6c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bbd6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bbd70: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bbd70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bbd74: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1bbd74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1bbd78: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BBD78u;
    SET_GPR_U32(ctx, 31, 0x1BBD80u);
    ctx->pc = 0x1BBD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBD78u;
    // 0x1bbd7c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BBD78u, 0x1BBD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBD80u;
label_1bbd80:
    // 0x1bbd80: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1bbd80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1bbd84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bbd84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbd88: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bbd88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bbd8c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BBD8Cu;
    SET_GPR_U32(ctx, 31, 0x1BBD94u);
    ctx->pc = 0x1BBD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBD8Cu;
    // 0x1bbd90: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BBD8Cu, 0x1BBD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBD94u;
label_1bbd94:
    // 0x1bbd94: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1bbd94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bbd98: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1bbd98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1bbd9c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bbd9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bbda0: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1bbda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1bbda4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1bbda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1bbda8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bbda8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbdac: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1bbdacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1bbdb0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BBDB0u;
    SET_GPR_U32(ctx, 31, 0x1BBDB8u);
    ctx->pc = 0x1BBDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBDB0u;
    // 0x1bbdb4: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BBDB0u, 0x1BBDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBDB8u;
label_1bbdb8:
    // 0x1bbdb8: 0x3c020e09  lui         $v0, 0xE09
    ctx->pc = 0x1bbdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3593 << 16));
    // 0x1bbdbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bbdbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbdc0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bbdc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bbdc4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BBDC4u;
    SET_GPR_U32(ctx, 31, 0x1BBDCCu);
    ctx->pc = 0x1BBDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBDC4u;
    // 0x1bbdc8: 0x34462009  ori         $a2, $v0, 0x2009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8201);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BBDC4u, 0x1BBDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBDCCu;
label_1bbdcc:
    // 0x1bbdcc: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x1bbdccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
    // 0x1bbdd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bbdd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbdd4: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1bbdd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1bbdd8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1bbdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bbddc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BBDDCu;
    SET_GPR_U32(ctx, 31, 0x1BBDE4u);
    ctx->pc = 0x1BBDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBDDCu;
    // 0x1bbde0: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BBDDCu, 0x1BBDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBDE4u;
label_1bbde4:
    // 0x1bbde4: 0x8e4378c8  lw          $v1, 0x78C8($s2)
    ctx->pc = 0x1bbde4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30920)));
    // 0x1bbde8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1bbde8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1bbdec: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x1bbdecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1bbdf0: 0x31982  srl         $v1, $v1, 6
    ctx->pc = 0x1bbdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
    // 0x1bbdf4: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x1bbdf4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1bbdf8: 0x1460ffcf  bnez        $v1, . + 4 + (-0x31 << 2)
    ctx->pc = 0x1BBDF8u;
    {
        const bool branch_taken_0x1bbdf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BBDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBDF8u;
        // 0x1bbdfc: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbdf8) {
            ctx->pc = 0x1BBD38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bbd38;
        }
    }
    ctx->pc = 0x1BBE00u;
    // 0x1bbe00: 0x10000283  b           . + 4 + (0x283 << 2)
    ctx->pc = 0x1BBE00u;
    {
        const bool branch_taken_0x1bbe00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbe00) {
            ctx->pc = 0x1BC810u;
            goto label_1bc810;
        }
    }
    ctx->pc = 0x1BBE08u;
label_1bbe08:
    // 0x1bbe08: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x1bbe08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1bbe0c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1bbe0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbe10: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x1bbe10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x1bbe14: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bbe14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bbe18:
    // 0x1bbe18: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1bbe18u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x70000000
    // 0x1bbe1c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1bbe1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1bbe20: 0x2c850100  sltiu       $a1, $a0, 0x100
    ctx->pc = 0x1bbe20u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1bbe24: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x1bbe24u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1bbe28: 0x63602  srl         $a2, $a2, 24
    ctx->pc = 0x1bbe28u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x1bbe2c: 0x24e7ff80  addiu       $a3, $a3, -0x80
    ctx->pc = 0x1bbe2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967168));
    // 0x1bbe30: 0xe63018  mult        $a2, $a3, $a2
    ctx->pc = 0x1bbe30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1bbe34: 0x631c2  srl         $a2, $a2, 7
    ctx->pc = 0x1bbe34u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 7));
    // 0x1bbe38: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x1bbe38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x1bbe3c: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x1bbe3cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x1bbe40: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x1bbe40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x1bbe44: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x1bbe44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1bbe48: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x1bbe48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1bbe4c: 0x63602  srl         $a2, $a2, 24
    ctx->pc = 0x1bbe4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x1bbe50: 0x24e7ff80  addiu       $a3, $a3, -0x80
    ctx->pc = 0x1bbe50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967168));
    // 0x1bbe54: 0x70e63018  mult1       $a2, $a3, $a2
    ctx->pc = 0x1bbe54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1bbe58: 0x631c2  srl         $a2, $a2, 7
    ctx->pc = 0x1bbe58u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 7));
    // 0x1bbe5c: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x1bbe5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x1bbe60: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x1bbe60u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x1bbe64: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x1bbe64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x1bbe68: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x1bbe68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bbe6c: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x1bbe6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1bbe70: 0x63602  srl         $a2, $a2, 24
    ctx->pc = 0x1bbe70u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x1bbe74: 0x24e7ff80  addiu       $a3, $a3, -0x80
    ctx->pc = 0x1bbe74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967168));
    // 0x1bbe78: 0xe63018  mult        $a2, $a3, $a2
    ctx->pc = 0x1bbe78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1bbe7c: 0x631c2  srl         $a2, $a2, 7
    ctx->pc = 0x1bbe7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 7));
    // 0x1bbe80: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x1bbe80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x1bbe84: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x1bbe84u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x1bbe88: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x1bbe88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x1bbe8c: 0x8c66000c  lw          $a2, 0xC($v1)
    ctx->pc = 0x1bbe8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1bbe90: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x1bbe90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1bbe94: 0x63602  srl         $a2, $a2, 24
    ctx->pc = 0x1bbe94u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x1bbe98: 0x24e7ff80  addiu       $a3, $a3, -0x80
    ctx->pc = 0x1bbe98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967168));
    // 0x1bbe9c: 0x70e63018  mult1       $a2, $a3, $a2
    ctx->pc = 0x1bbe9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1bbea0: 0x631c2  srl         $a2, $a2, 7
    ctx->pc = 0x1bbea0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 7));
    // 0x1bbea4: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x1bbea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x1bbea8: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x1bbea8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x1bbeac: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x1bbeacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x1bbeb0: 0x8c660010  lw          $a2, 0x10($v1)
    ctx->pc = 0x1bbeb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1bbeb4: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x1bbeb4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1bbeb8: 0x63602  srl         $a2, $a2, 24
    ctx->pc = 0x1bbeb8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x1bbebc: 0x24e7ff80  addiu       $a3, $a3, -0x80
    ctx->pc = 0x1bbebcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967168));
    // 0x1bbec0: 0xe63018  mult        $a2, $a3, $a2
    ctx->pc = 0x1bbec0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1bbec4: 0x631c2  srl         $a2, $a2, 7
    ctx->pc = 0x1bbec4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 7));
    // 0x1bbec8: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x1bbec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x1bbecc: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x1bbeccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x1bbed0: 0xac460010  sw          $a2, 0x10($v0)
    ctx->pc = 0x1bbed0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 6));
    // 0x1bbed4: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x1bbed4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1bbed8: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x1bbed8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1bbedc: 0x63602  srl         $a2, $a2, 24
    ctx->pc = 0x1bbedcu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x1bbee0: 0x24e7ff80  addiu       $a3, $a3, -0x80
    ctx->pc = 0x1bbee0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967168));
    // 0x1bbee4: 0x70e63018  mult1       $a2, $a3, $a2
    ctx->pc = 0x1bbee4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1bbee8: 0x631c2  srl         $a2, $a2, 7
    ctx->pc = 0x1bbee8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 7));
    // 0x1bbeec: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x1bbeecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x1bbef0: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x1bbef0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x1bbef4: 0xac460014  sw          $a2, 0x14($v0)
    ctx->pc = 0x1bbef4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 6));
    // 0x1bbef8: 0x8c660018  lw          $a2, 0x18($v1)
    ctx->pc = 0x1bbef8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1bbefc: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x1bbefcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1bbf00: 0x63602  srl         $a2, $a2, 24
    ctx->pc = 0x1bbf00u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x1bbf04: 0x24e7ff80  addiu       $a3, $a3, -0x80
    ctx->pc = 0x1bbf04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967168));
    // 0x1bbf08: 0xe63018  mult        $a2, $a3, $a2
    ctx->pc = 0x1bbf08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1bbf0c: 0x631c2  srl         $a2, $a2, 7
    ctx->pc = 0x1bbf0cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 7));
    // 0x1bbf10: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x1bbf10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x1bbf14: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x1bbf14u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x1bbf18: 0xac460018  sw          $a2, 0x18($v0)
    ctx->pc = 0x1bbf18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
    // 0x1bbf1c: 0x8c66001c  lw          $a2, 0x1C($v1)
    ctx->pc = 0x1bbf1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1bbf20: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x1bbf20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1bbf24: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1bbf24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1bbf28: 0x63602  srl         $a2, $a2, 24
    ctx->pc = 0x1bbf28u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x1bbf2c: 0x24e7ff80  addiu       $a3, $a3, -0x80
    ctx->pc = 0x1bbf2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967168));
    // 0x1bbf30: 0x70e63018  mult1       $a2, $a3, $a2
    ctx->pc = 0x1bbf30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1bbf34: 0x631c2  srl         $a2, $a2, 7
    ctx->pc = 0x1bbf34u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 7));
    // 0x1bbf38: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x1bbf38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x1bbf3c: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x1bbf3cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x1bbf40: 0xac46001c  sw          $a2, 0x1C($v0)
    ctx->pc = 0x1bbf40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 6));
    // 0x1bbf44: 0x14a0ffb4  bnez        $a1, . + 4 + (-0x4C << 2)
    ctx->pc = 0x1BBF44u;
    {
        const bool branch_taken_0x1bbf44 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BBF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBF44u;
        // 0x1bbf48: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbf44) {
            ctx->pc = 0x1BBE18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bbe18;
        }
    }
    ctx->pc = 0x1BBF4Cu;
    // 0x1bbf4c: 0x8e4578d0  lw          $a1, 0x78D0($s2)
    ctx->pc = 0x1bbf4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30928)));
    // 0x1bbf50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bbf50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbf54: 0xc070468  jal         func_1C11A0
    ctx->pc = 0x1BBF54u;
    SET_GPR_U32(ctx, 31, 0x1BBF5Cu);
    ctx->pc = 0x1BBF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBF54u;
    // 0x1bbf58: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C11A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C11A0u, 0x1BBF54u, 0x1BBF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBF5Cu;
label_1bbf5c:
    // 0x1bbf5c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1bbf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1bbf60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bbf60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbf64: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x1bbf64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1bbf68: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BBF68u;
    SET_GPR_U32(ctx, 31, 0x1BBF70u);
    ctx->pc = 0x1BBF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBF68u;
    // 0x1bbf6c: 0x2303c  dsll32      $a2, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BBF68u, 0x1BBF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBF70u;
label_1bbf70:
    // 0x1bbf70: 0xc0705f4  jal         func_1C17D0
    ctx->pc = 0x1BBF70u;
    SET_GPR_U32(ctx, 31, 0x1BBF78u);
    ctx->pc = 0x1BBF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBF70u;
    // 0x1bbf74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C17D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C17D0u, 0x1BBF70u, 0x1BBF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBF78u;
label_1bbf78:
    // 0x1bbf78: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1bbf78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bbf7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bbf7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbf80: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bbf80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bbf84: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1bbf84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1bbf88: 0xc070600  jal         func_1C1800
    ctx->pc = 0x1BBF88u;
    SET_GPR_U32(ctx, 31, 0x1BBF90u);
    ctx->pc = 0x1BBF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBF88u;
    // 0x1bbf8c: 0x628825  or          $s1, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1800u, 0x1BBF88u, 0x1BBF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBF90u;
label_1bbf90:
    // 0x1bbf90: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bbf90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bbf94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bbf94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbf98: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bbf98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bbf9c: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x1bbf9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1bbfa0: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x1bbfa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x1bbfa4: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BBFA4u;
    SET_GPR_U32(ctx, 31, 0x1BBFACu);
    ctx->pc = 0x1BBFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBFA4u;
    // 0x1bbfa8: 0x2228825  or          $s1, $s1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BBFA4u, 0x1BBFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBFACu;
label_1bbfac:
    // 0x1bbfac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bbfacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bbfb0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bbfb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbfb4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bbfb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bbfb8: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x1bbfb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1bbfbc: 0x216b8  dsll        $v0, $v0, 26
    ctx->pc = 0x1bbfbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 26);
    // 0x1bbfc0: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BBFC0u;
    SET_GPR_U32(ctx, 31, 0x1BBFC8u);
    ctx->pc = 0x1BBFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBFC0u;
    // 0x1bbfc4: 0x518825  or          $s1, $v0, $s1 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BBFC0u, 0x1BBFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBFC8u;
label_1bbfc8:
    // 0x1bbfc8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1bbfc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bbfcc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1bbfccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bbfd0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bbfd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bbfd4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1bbfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1bbfd8: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1bbfd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1bbfdc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bbfdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bbfe0: 0x712025  or          $a0, $v1, $s1
    ctx->pc = 0x1bbfe0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x1bbfe4: 0x9e4378d0  lwu         $v1, 0x78D0($s2)
    ctx->pc = 0x1bbfe4u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 30928)));
    // 0x1bbfe8: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1bbfe8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1bbfec: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1bbfecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1bbff0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bbff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbff4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bbff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bbff8: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1bbff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1bbffc: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1bbffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1bc000: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BC000u;
    SET_GPR_U32(ctx, 31, 0x1BC008u);
    ctx->pc = 0x1BC004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC000u;
    // 0x1bc004: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BC000u, 0x1BC008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC008u;
label_1bc008:
    // 0x1bc008: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1BC008u;
    SET_GPR_U32(ctx, 31, 0x1BC010u);
    ctx->pc = 0x1BC00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC008u;
    // 0x1bc00c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1BC008u, 0x1BC010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC010u;
label_1bc010:
    // 0x1bc010: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1bc010u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bc014: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc018: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x1bc018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1bc01c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1bc01cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1bc020: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1bc020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bc024: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1bc024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1bc028: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1bc028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1bc02c: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1bc02cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1bc030: 0xa23025  or          $a2, $a1, $v0
    ctx->pc = 0x1bc030u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1bc034: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BC034u;
    SET_GPR_U32(ctx, 31, 0x1BC03Cu);
    ctx->pc = 0x1BC038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC034u;
    // 0x1bc038: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BC034u, 0x1BC03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC03Cu;
label_1bc03c:
    // 0x1bc03c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bc03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bc040: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x1bc040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x1bc044: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bc044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bc048: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x1bc048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x1bc04c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc04cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc050: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x1bc050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1bc054: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BC054u;
    SET_GPR_U32(ctx, 31, 0x1BC05Cu);
    ctx->pc = 0x1BC058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC054u;
    // 0x1bc058: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BC054u, 0x1BC05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC05Cu;
label_1bc05c:
    // 0x1bc05c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc05cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc060: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1bc060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1bc064: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BC064u;
    SET_GPR_U32(ctx, 31, 0x1BC06Cu);
    ctx->pc = 0x1BC068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC064u;
    // 0x1bc068: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BC064u, 0x1BC06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC06Cu;
label_1bc06c:
    // 0x1bc06c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc070: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1bc070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1bc074: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BC074u;
    SET_GPR_U32(ctx, 31, 0x1BC07Cu);
    ctx->pc = 0x1BC078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC074u;
    // 0x1bc078: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BC074u, 0x1BC07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC07Cu;
label_1bc07c:
    // 0x1bc07c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1bc07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1bc080: 0x24020089  addiu       $v0, $zero, 0x89
    ctx->pc = 0x1bc080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    // 0x1bc084: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bc084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bc088: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc08c: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1bc08cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1bc090: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BC090u;
    SET_GPR_U32(ctx, 31, 0x1BC098u);
    ctx->pc = 0x1BC094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC090u;
    // 0x1bc094: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BC090u, 0x1BC098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC098u;
label_1bc098:
    // 0x1bc098: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc09c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bc09cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc0a0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BC0A0u;
    SET_GPR_U32(ctx, 31, 0x1BC0A8u);
    ctx->pc = 0x1BC0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC0A0u;
    // 0x1bc0a4: 0x24060356  addiu       $a2, $zero, 0x356 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BC0A0u, 0x1BC0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC0A8u;
label_1bc0a8:
    // 0x1bc0a8: 0x8e4678c8  lw          $a2, 0x78C8($s2)
    ctx->pc = 0x1bc0a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30920)));
    // 0x1bc0ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc0acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc0b0: 0x9e4778cc  lwu         $a3, 0x78CC($s2)
    ctx->pc = 0x1bc0b0u;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 18), 30924)));
    // 0x1bc0b4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1bc0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1bc0b8: 0x8e4278c4  lw          $v0, 0x78C4($s2)
    ctx->pc = 0x1bc0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30916)));
    // 0x1bc0bc: 0x9e4378c0  lwu         $v1, 0x78C0($s2)
    ctx->pc = 0x1bc0bcu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 30912)));
    // 0x1bc0c0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1bc0c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1bc0c4: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1bc0c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1bc0c8: 0x73938  dsll        $a3, $a3, 4
    ctx->pc = 0x1bc0c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 4);
    // 0x1bc0cc: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1bc0ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1bc0d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bc0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bc0d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bc0d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bc0d8: 0x34e7000a  ori         $a3, $a3, 0xA
    ctx->pc = 0x1bc0d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)10);
    // 0x1bc0dc: 0x633b8  dsll        $a2, $a2, 14
    ctx->pc = 0x1bc0dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x1bc0e0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bc0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bc0e4: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x1bc0e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x1bc0e8: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x1bc0e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x1bc0ec: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1bc0ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1bc0f0: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1bc0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x1bc0f4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BC0F4u;
    SET_GPR_U32(ctx, 31, 0x1BC0FCu);
    ctx->pc = 0x1BC0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC0F4u;
    // 0x1bc0f8: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BC0F4u, 0x1BC0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC0FCu;
label_1bc0fc:
    // 0x1bc0fc: 0x8e4278c8  lw          $v0, 0x78C8($s2)
    ctx->pc = 0x1bc0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30920)));
    // 0x1bc100: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x1bc100u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x1bc104: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x1bc104u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1bc108: 0x10200035  beqz        $at, . + 4 + (0x35 << 2)
    ctx->pc = 0x1BC108u;
    {
        const bool branch_taken_0x1bc108 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC108u;
        // 0x1bc10c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc108) {
            ctx->pc = 0x1BC1E0u;
            goto label_1bc1e0;
        }
    }
    ctx->pc = 0x1BC110u;
    // 0x1bc110: 0x2413003f  addiu       $s3, $zero, 0x3F
    ctx->pc = 0x1bc110u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1bc114: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1bc114u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bc118:
    // 0x1bc118: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x1bc118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1bc11c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bc11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bc120: 0x9e4678c0  lwu         $a2, 0x78C0($s2)
    ctx->pc = 0x1bc120u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 30912)));
    // 0x1bc124: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1bc124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1bc128: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x1bc128u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1bc12c: 0x8e4278c4  lw          $v0, 0x78C4($s2)
    ctx->pc = 0x1bc12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30916)));
    // 0x1bc130: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1bc130u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1bc134: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1bc134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1bc138: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1bc138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1bc13c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc140: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1bc140u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1bc144: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1bc144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1bc148: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bc148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bc14c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bc14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bc150: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bc150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bc154: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1bc154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1bc158: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BC158u;
    SET_GPR_U32(ctx, 31, 0x1BC160u);
    ctx->pc = 0x1BC15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC158u;
    // 0x1bc15c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BC158u, 0x1BC160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC160u;
label_1bc160:
    // 0x1bc160: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1bc160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1bc164: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc168: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bc168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bc16c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BC16Cu;
    SET_GPR_U32(ctx, 31, 0x1BC174u);
    ctx->pc = 0x1BC170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC16Cu;
    // 0x1bc170: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BC16Cu, 0x1BC174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC174u;
label_1bc174:
    // 0x1bc174: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1bc174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bc178: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1bc178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1bc17c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bc17cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bc180: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1bc180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1bc184: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1bc184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1bc188: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc18c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1bc18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1bc190: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BC190u;
    SET_GPR_U32(ctx, 31, 0x1BC198u);
    ctx->pc = 0x1BC194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC190u;
    // 0x1bc194: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BC190u, 0x1BC198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC198u;
label_1bc198:
    // 0x1bc198: 0x3c020e09  lui         $v0, 0xE09
    ctx->pc = 0x1bc198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3593 << 16));
    // 0x1bc19c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc1a0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bc1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bc1a4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BC1A4u;
    SET_GPR_U32(ctx, 31, 0x1BC1ACu);
    ctx->pc = 0x1BC1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC1A4u;
    // 0x1bc1a8: 0x34462009  ori         $a2, $v0, 0x2009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8201);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BC1A4u, 0x1BC1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC1ACu;
label_1bc1ac:
    // 0x1bc1ac: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x1bc1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
    // 0x1bc1b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc1b4: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1bc1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1bc1b8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1bc1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bc1bc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BC1BCu;
    SET_GPR_U32(ctx, 31, 0x1BC1C4u);
    ctx->pc = 0x1BC1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC1BCu;
    // 0x1bc1c0: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BC1BCu, 0x1BC1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC1C4u;
label_1bc1c4:
    // 0x1bc1c4: 0x8e4278c8  lw          $v0, 0x78C8($s2)
    ctx->pc = 0x1bc1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30920)));
    // 0x1bc1c8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1bc1c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1bc1cc: 0x26730040  addiu       $s3, $s3, 0x40
    ctx->pc = 0x1bc1ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x1bc1d0: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x1bc1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x1bc1d4: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x1bc1d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1bc1d8: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x1BC1D8u;
    {
        const bool branch_taken_0x1bc1d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC1D8u;
        // 0x1bc1dc: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc1d8) {
            ctx->pc = 0x1BC118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bc118;
        }
    }
    ctx->pc = 0x1BC1E0u;
label_1bc1e0:
    // 0x1bc1e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1bc1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc1e4: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x1bc1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x1bc1e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bc1e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc1ec: 0x0  nop
    ctx->pc = 0x1bc1ecu;
    // NOP
label_1bc1f0:
    // 0x1bc1f0: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1bc1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x70000000
    // 0x1bc1f4: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1bc1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1bc1f8: 0x2c850100  sltiu       $a1, $a0, 0x100
    ctx->pc = 0x1bc1f8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1bc1fc: 0x63a02  srl         $a3, $a2, 8
    ctx->pc = 0x1bc1fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x1bc200: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x1bc200u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1bc204: 0x63602  srl         $a2, $a2, 24
    ctx->pc = 0x1bc204u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x1bc208: 0x24e7ff80  addiu       $a3, $a3, -0x80
    ctx->pc = 0x1bc208u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967168));
    // 0x1bc20c: 0xe63018  mult        $a2, $a3, $a2
    ctx->pc = 0x1bc20cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1bc210: 0x631c2  srl         $a2, $a2, 7
    ctx->pc = 0x1bc210u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 7));
    // 0x1bc214: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x1bc214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x1bc218: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x1bc218u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x1bc21c: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x1bc21cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x1bc220: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x1bc220u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1bc224: 0x63a02  srl         $a3, $a2, 8
    ctx->pc = 0x1bc224u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x1bc228: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x1bc228u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1bc22c: 0x63602  srl         $a2, $a2, 24
    ctx->pc = 0x1bc22cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x1bc230: 0x24e7ff80  addiu       $a3, $a3, -0x80
    ctx->pc = 0x1bc230u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967168));
    // 0x1bc234: 0x70e63018  mult1       $a2, $a3, $a2
    ctx->pc = 0x1bc234u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1bc238: 0x631c2  srl         $a2, $a2, 7
    ctx->pc = 0x1bc238u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 7));
    // 0x1bc23c: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x1bc23cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x1bc240: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x1bc240u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x1bc244: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x1bc244u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x1bc248: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x1bc248u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bc24c: 0x63a02  srl         $a3, $a2, 8
    ctx->pc = 0x1bc24cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x1bc250: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x1bc250u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1bc254: 0x63602  srl         $a2, $a2, 24
    ctx->pc = 0x1bc254u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x1bc258: 0x24e7ff80  addiu       $a3, $a3, -0x80
    ctx->pc = 0x1bc258u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967168));
    // 0x1bc25c: 0xe63018  mult        $a2, $a3, $a2
    ctx->pc = 0x1bc25cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1bc260: 0x631c2  srl         $a2, $a2, 7
    ctx->pc = 0x1bc260u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 7));
    // 0x1bc264: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x1bc264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x1bc268: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x1bc268u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x1bc26c: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x1bc26cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x1bc270: 0x8c66000c  lw          $a2, 0xC($v1)
    ctx->pc = 0x1bc270u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1bc274: 0x63a02  srl         $a3, $a2, 8
    ctx->pc = 0x1bc274u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x1bc278: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x1bc278u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1bc27c: 0x63602  srl         $a2, $a2, 24
    ctx->pc = 0x1bc27cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x1bc280: 0x24e7ff80  addiu       $a3, $a3, -0x80
    ctx->pc = 0x1bc280u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967168));
    // 0x1bc284: 0x70e63018  mult1       $a2, $a3, $a2
    ctx->pc = 0x1bc284u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1bc288: 0x631c2  srl         $a2, $a2, 7
    ctx->pc = 0x1bc288u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 7));
    // 0x1bc28c: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x1bc28cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x1bc290: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x1bc290u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x1bc294: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x1bc294u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x1bc298: 0x8c660010  lw          $a2, 0x10($v1)
    ctx->pc = 0x1bc298u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1bc29c: 0x63a02  srl         $a3, $a2, 8
    ctx->pc = 0x1bc29cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x1bc2a0: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x1bc2a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1bc2a4: 0x63602  srl         $a2, $a2, 24
    ctx->pc = 0x1bc2a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x1bc2a8: 0x24e7ff80  addiu       $a3, $a3, -0x80
    ctx->pc = 0x1bc2a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967168));
    // 0x1bc2ac: 0xe63018  mult        $a2, $a3, $a2
    ctx->pc = 0x1bc2acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1bc2b0: 0x631c2  srl         $a2, $a2, 7
    ctx->pc = 0x1bc2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 7));
    // 0x1bc2b4: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x1bc2b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x1bc2b8: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x1bc2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x1bc2bc: 0xac460010  sw          $a2, 0x10($v0)
    ctx->pc = 0x1bc2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 6));
    // 0x1bc2c0: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x1bc2c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1bc2c4: 0x63a02  srl         $a3, $a2, 8
    ctx->pc = 0x1bc2c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x1bc2c8: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x1bc2c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1bc2cc: 0x63602  srl         $a2, $a2, 24
    ctx->pc = 0x1bc2ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x1bc2d0: 0x24e7ff80  addiu       $a3, $a3, -0x80
    ctx->pc = 0x1bc2d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967168));
    // 0x1bc2d4: 0x70e63018  mult1       $a2, $a3, $a2
    ctx->pc = 0x1bc2d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1bc2d8: 0x631c2  srl         $a2, $a2, 7
    ctx->pc = 0x1bc2d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 7));
    // 0x1bc2dc: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x1bc2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x1bc2e0: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x1bc2e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x1bc2e4: 0xac460014  sw          $a2, 0x14($v0)
    ctx->pc = 0x1bc2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 6));
    // 0x1bc2e8: 0x8c660018  lw          $a2, 0x18($v1)
    ctx->pc = 0x1bc2e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1bc2ec: 0x63a02  srl         $a3, $a2, 8
    ctx->pc = 0x1bc2ecu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x1bc2f0: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x1bc2f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1bc2f4: 0x63602  srl         $a2, $a2, 24
    ctx->pc = 0x1bc2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x1bc2f8: 0x24e7ff80  addiu       $a3, $a3, -0x80
    ctx->pc = 0x1bc2f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967168));
    // 0x1bc2fc: 0xe63018  mult        $a2, $a3, $a2
    ctx->pc = 0x1bc2fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1bc300: 0x631c2  srl         $a2, $a2, 7
    ctx->pc = 0x1bc300u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 7));
    // 0x1bc304: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x1bc304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x1bc308: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x1bc308u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x1bc30c: 0xac460018  sw          $a2, 0x18($v0)
    ctx->pc = 0x1bc30cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
    // 0x1bc310: 0x8c66001c  lw          $a2, 0x1C($v1)
    ctx->pc = 0x1bc310u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1bc314: 0x63a02  srl         $a3, $a2, 8
    ctx->pc = 0x1bc314u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x1bc318: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1bc318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1bc31c: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x1bc31cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1bc320: 0x63602  srl         $a2, $a2, 24
    ctx->pc = 0x1bc320u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x1bc324: 0x24e7ff80  addiu       $a3, $a3, -0x80
    ctx->pc = 0x1bc324u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967168));
    // 0x1bc328: 0x70e63018  mult1       $a2, $a3, $a2
    ctx->pc = 0x1bc328u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1bc32c: 0x631c2  srl         $a2, $a2, 7
    ctx->pc = 0x1bc32cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 7));
    // 0x1bc330: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x1bc330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x1bc334: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x1bc334u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x1bc338: 0xac46001c  sw          $a2, 0x1C($v0)
    ctx->pc = 0x1bc338u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 6));
    // 0x1bc33c: 0x14a0ffac  bnez        $a1, . + 4 + (-0x54 << 2)
    ctx->pc = 0x1BC33Cu;
    {
        const bool branch_taken_0x1bc33c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC33Cu;
        // 0x1bc340: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc33c) {
            ctx->pc = 0x1BC1F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bc1f0;
        }
    }
    ctx->pc = 0x1BC344u;
    // 0x1bc344: 0x8e4578d0  lw          $a1, 0x78D0($s2)
    ctx->pc = 0x1bc344u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30928)));
    // 0x1bc348: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc34c: 0xc070468  jal         func_1C11A0
    ctx->pc = 0x1BC34Cu;
    SET_GPR_U32(ctx, 31, 0x1BC354u);
    ctx->pc = 0x1BC350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC34Cu;
    // 0x1bc350: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C11A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C11A0u, 0x1BC34Cu, 0x1BC354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC354u;
label_1bc354:
    // 0x1bc354: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1BC354u;
    SET_GPR_U32(ctx, 31, 0x1BC35Cu);
    ctx->pc = 0x1BC358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC354u;
    // 0x1bc358: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1BC354u, 0x1BC35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC35Cu;
label_1bc35c:
    // 0x1bc35c: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x1bc35cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bc360: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc364: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1bc364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1bc368: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1bc368u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1bc36c: 0x344300ff  ori         $v1, $v0, 0xFF
    ctx->pc = 0x1bc36cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x1bc370: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1bc370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1bc374: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1bc374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1bc378: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bc378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bc37c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1bc37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1bc380: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1bc380u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1bc384: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BC384u;
    SET_GPR_U32(ctx, 31, 0x1BC38Cu);
    ctx->pc = 0x1BC388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC384u;
    // 0x1bc388: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BC384u, 0x1BC38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC38Cu;
label_1bc38c:
    // 0x1bc38c: 0xc0705f4  jal         func_1C17D0
    ctx->pc = 0x1BC38Cu;
    SET_GPR_U32(ctx, 31, 0x1BC394u);
    ctx->pc = 0x1BC390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC38Cu;
    // 0x1bc390: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C17D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C17D0u, 0x1BC38Cu, 0x1BC394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC394u;
label_1bc394:
    // 0x1bc394: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1bc394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bc398: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc39c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bc39cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bc3a0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1bc3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1bc3a4: 0xc070600  jal         func_1C1800
    ctx->pc = 0x1BC3A4u;
    SET_GPR_U32(ctx, 31, 0x1BC3ACu);
    ctx->pc = 0x1BC3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC3A4u;
    // 0x1bc3a8: 0x628825  or          $s1, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1800u, 0x1BC3A4u, 0x1BC3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC3ACu;
label_1bc3ac:
    // 0x1bc3ac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bc3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bc3b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc3b4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bc3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bc3b8: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x1bc3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1bc3bc: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x1bc3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x1bc3c0: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BC3C0u;
    SET_GPR_U32(ctx, 31, 0x1BC3C8u);
    ctx->pc = 0x1BC3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC3C0u;
    // 0x1bc3c4: 0x2228825  or          $s1, $s1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BC3C0u, 0x1BC3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC3C8u;
label_1bc3c8:
    // 0x1bc3c8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bc3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bc3cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc3d0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bc3d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bc3d4: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x1bc3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1bc3d8: 0x216b8  dsll        $v0, $v0, 26
    ctx->pc = 0x1bc3d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 26);
    // 0x1bc3dc: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BC3DCu;
    SET_GPR_U32(ctx, 31, 0x1BC3E4u);
    ctx->pc = 0x1BC3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC3DCu;
    // 0x1bc3e0: 0x518825  or          $s1, $v0, $s1 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BC3DCu, 0x1BC3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC3E4u;
label_1bc3e4:
    // 0x1bc3e4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1bc3e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bc3e8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1bc3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bc3ec: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bc3ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bc3f0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1bc3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1bc3f4: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1bc3f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1bc3f8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bc3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bc3fc: 0x712025  or          $a0, $v1, $s1
    ctx->pc = 0x1bc3fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x1bc400: 0x9e4378d0  lwu         $v1, 0x78D0($s2)
    ctx->pc = 0x1bc400u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 30928)));
    // 0x1bc404: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1bc404u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1bc408: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1bc408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1bc40c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc40cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc410: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bc410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bc414: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1bc414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1bc418: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1bc418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1bc41c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BC41Cu;
    SET_GPR_U32(ctx, 31, 0x1BC424u);
    ctx->pc = 0x1BC420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC41Cu;
    // 0x1bc420: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BC41Cu, 0x1BC424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC424u;
label_1bc424:
    // 0x1bc424: 0x8e4278c8  lw          $v0, 0x78C8($s2)
    ctx->pc = 0x1bc424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30920)));
    // 0x1bc428: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x1bc428u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x1bc42c: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x1bc42cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1bc430: 0x10200035  beqz        $at, . + 4 + (0x35 << 2)
    ctx->pc = 0x1BC430u;
    {
        const bool branch_taken_0x1bc430 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC430u;
        // 0x1bc434: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc430) {
            ctx->pc = 0x1BC508u;
            goto label_1bc508;
        }
    }
    ctx->pc = 0x1BC438u;
    // 0x1bc438: 0x2413003f  addiu       $s3, $zero, 0x3F
    ctx->pc = 0x1bc438u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1bc43c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1bc43cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bc440:
    // 0x1bc440: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x1bc440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1bc444: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bc444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bc448: 0x9e4678c0  lwu         $a2, 0x78C0($s2)
    ctx->pc = 0x1bc448u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 30912)));
    // 0x1bc44c: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1bc44cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1bc450: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x1bc450u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1bc454: 0x8e4278c4  lw          $v0, 0x78C4($s2)
    ctx->pc = 0x1bc454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30916)));
    // 0x1bc458: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1bc458u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1bc45c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1bc45cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1bc460: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1bc460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1bc464: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc468: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1bc468u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1bc46c: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1bc46cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1bc470: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bc470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bc474: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bc474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bc478: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bc478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bc47c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1bc47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1bc480: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BC480u;
    SET_GPR_U32(ctx, 31, 0x1BC488u);
    ctx->pc = 0x1BC484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC480u;
    // 0x1bc484: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BC480u, 0x1BC488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC488u;
label_1bc488:
    // 0x1bc488: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1bc488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1bc48c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc490: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bc490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bc494: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BC494u;
    SET_GPR_U32(ctx, 31, 0x1BC49Cu);
    ctx->pc = 0x1BC498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC494u;
    // 0x1bc498: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BC494u, 0x1BC49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC49Cu;
label_1bc49c:
    // 0x1bc49c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1bc49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bc4a0: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1bc4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1bc4a4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bc4a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bc4a8: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1bc4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1bc4ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1bc4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1bc4b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc4b4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1bc4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1bc4b8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BC4B8u;
    SET_GPR_U32(ctx, 31, 0x1BC4C0u);
    ctx->pc = 0x1BC4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC4B8u;
    // 0x1bc4bc: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BC4B8u, 0x1BC4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC4C0u;
label_1bc4c0:
    // 0x1bc4c0: 0x3c020e09  lui         $v0, 0xE09
    ctx->pc = 0x1bc4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3593 << 16));
    // 0x1bc4c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc4c8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bc4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bc4cc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BC4CCu;
    SET_GPR_U32(ctx, 31, 0x1BC4D4u);
    ctx->pc = 0x1BC4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC4CCu;
    // 0x1bc4d0: 0x34462009  ori         $a2, $v0, 0x2009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8201);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BC4CCu, 0x1BC4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC4D4u;
label_1bc4d4:
    // 0x1bc4d4: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x1bc4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
    // 0x1bc4d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc4d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc4dc: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1bc4dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1bc4e0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1bc4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bc4e4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BC4E4u;
    SET_GPR_U32(ctx, 31, 0x1BC4ECu);
    ctx->pc = 0x1BC4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC4E4u;
    // 0x1bc4e8: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BC4E4u, 0x1BC4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC4ECu;
label_1bc4ec:
    // 0x1bc4ec: 0x8e4278c8  lw          $v0, 0x78C8($s2)
    ctx->pc = 0x1bc4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30920)));
    // 0x1bc4f0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1bc4f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1bc4f4: 0x26730040  addiu       $s3, $s3, 0x40
    ctx->pc = 0x1bc4f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x1bc4f8: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x1bc4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x1bc4fc: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x1bc4fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1bc500: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x1BC500u;
    {
        const bool branch_taken_0x1bc500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC500u;
        // 0x1bc504: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc500) {
            ctx->pc = 0x1BC440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bc440;
        }
    }
    ctx->pc = 0x1BC508u;
label_1bc508:
    // 0x1bc508: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1bc508u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc50c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1bc50cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_1bc510:
    // 0x1bc510: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1bc510u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x70000000
    // 0x1bc514: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1bc514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1bc518: 0x2c640100  sltiu       $a0, $v1, 0x100
    ctx->pc = 0x1bc518u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1bc51c: 0x53402  srl         $a2, $a1, 16
    ctx->pc = 0x1bc51cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x1bc520: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1bc520u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1bc524: 0x52e02  srl         $a1, $a1, 24
    ctx->pc = 0x1bc524u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x1bc528: 0x24c6ff80  addiu       $a2, $a2, -0x80
    ctx->pc = 0x1bc528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967168));
    // 0x1bc52c: 0xc52818  mult        $a1, $a2, $a1
    ctx->pc = 0x1bc52cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1bc530: 0x529c2  srl         $a1, $a1, 7
    ctx->pc = 0x1bc530u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
    // 0x1bc534: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1bc534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1bc538: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x1bc538u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1bc53c: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x1bc53cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x1bc540: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1bc540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1bc544: 0x53402  srl         $a2, $a1, 16
    ctx->pc = 0x1bc544u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x1bc548: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1bc548u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1bc54c: 0x52e02  srl         $a1, $a1, 24
    ctx->pc = 0x1bc54cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x1bc550: 0x24c6ff80  addiu       $a2, $a2, -0x80
    ctx->pc = 0x1bc550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967168));
    // 0x1bc554: 0x70c52818  mult1       $a1, $a2, $a1
    ctx->pc = 0x1bc554u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1bc558: 0x529c2  srl         $a1, $a1, 7
    ctx->pc = 0x1bc558u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
    // 0x1bc55c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1bc55cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1bc560: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x1bc560u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1bc564: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x1bc564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x1bc568: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1bc568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1bc56c: 0x53402  srl         $a2, $a1, 16
    ctx->pc = 0x1bc56cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x1bc570: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1bc570u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1bc574: 0x52e02  srl         $a1, $a1, 24
    ctx->pc = 0x1bc574u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x1bc578: 0x24c6ff80  addiu       $a2, $a2, -0x80
    ctx->pc = 0x1bc578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967168));
    // 0x1bc57c: 0xc52818  mult        $a1, $a2, $a1
    ctx->pc = 0x1bc57cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1bc580: 0x529c2  srl         $a1, $a1, 7
    ctx->pc = 0x1bc580u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
    // 0x1bc584: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1bc584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1bc588: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x1bc588u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1bc58c: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x1bc58cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x1bc590: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x1bc590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1bc594: 0x53402  srl         $a2, $a1, 16
    ctx->pc = 0x1bc594u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x1bc598: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1bc598u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1bc59c: 0x52e02  srl         $a1, $a1, 24
    ctx->pc = 0x1bc59cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x1bc5a0: 0x24c6ff80  addiu       $a2, $a2, -0x80
    ctx->pc = 0x1bc5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967168));
    // 0x1bc5a4: 0x70c52818  mult1       $a1, $a2, $a1
    ctx->pc = 0x1bc5a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1bc5a8: 0x529c2  srl         $a1, $a1, 7
    ctx->pc = 0x1bc5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
    // 0x1bc5ac: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1bc5acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1bc5b0: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x1bc5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1bc5b4: 0xae05000c  sw          $a1, 0xC($s0)
    ctx->pc = 0x1bc5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 5));
    // 0x1bc5b8: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x1bc5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1bc5bc: 0x53402  srl         $a2, $a1, 16
    ctx->pc = 0x1bc5bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x1bc5c0: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1bc5c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1bc5c4: 0x52e02  srl         $a1, $a1, 24
    ctx->pc = 0x1bc5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x1bc5c8: 0x24c6ff80  addiu       $a2, $a2, -0x80
    ctx->pc = 0x1bc5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967168));
    // 0x1bc5cc: 0xc52818  mult        $a1, $a2, $a1
    ctx->pc = 0x1bc5ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1bc5d0: 0x529c2  srl         $a1, $a1, 7
    ctx->pc = 0x1bc5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
    // 0x1bc5d4: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1bc5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1bc5d8: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x1bc5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1bc5dc: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x1bc5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
    // 0x1bc5e0: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x1bc5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1bc5e4: 0x53402  srl         $a2, $a1, 16
    ctx->pc = 0x1bc5e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x1bc5e8: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1bc5e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1bc5ec: 0x52e02  srl         $a1, $a1, 24
    ctx->pc = 0x1bc5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x1bc5f0: 0x24c6ff80  addiu       $a2, $a2, -0x80
    ctx->pc = 0x1bc5f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967168));
    // 0x1bc5f4: 0x70c52818  mult1       $a1, $a2, $a1
    ctx->pc = 0x1bc5f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1bc5f8: 0x529c2  srl         $a1, $a1, 7
    ctx->pc = 0x1bc5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
    // 0x1bc5fc: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1bc5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1bc600: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x1bc600u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1bc604: 0xae050014  sw          $a1, 0x14($s0)
    ctx->pc = 0x1bc604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 5));
    // 0x1bc608: 0x8c450018  lw          $a1, 0x18($v0)
    ctx->pc = 0x1bc608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1bc60c: 0x53402  srl         $a2, $a1, 16
    ctx->pc = 0x1bc60cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x1bc610: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1bc610u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1bc614: 0x52e02  srl         $a1, $a1, 24
    ctx->pc = 0x1bc614u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x1bc618: 0x24c6ff80  addiu       $a2, $a2, -0x80
    ctx->pc = 0x1bc618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967168));
    // 0x1bc61c: 0xc52818  mult        $a1, $a2, $a1
    ctx->pc = 0x1bc61cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1bc620: 0x529c2  srl         $a1, $a1, 7
    ctx->pc = 0x1bc620u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
    // 0x1bc624: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1bc624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1bc628: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x1bc628u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1bc62c: 0xae050018  sw          $a1, 0x18($s0)
    ctx->pc = 0x1bc62cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 5));
    // 0x1bc630: 0x8c45001c  lw          $a1, 0x1C($v0)
    ctx->pc = 0x1bc630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1bc634: 0x53402  srl         $a2, $a1, 16
    ctx->pc = 0x1bc634u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x1bc638: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1bc638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1bc63c: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1bc63cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1bc640: 0x52e02  srl         $a1, $a1, 24
    ctx->pc = 0x1bc640u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
    // 0x1bc644: 0x24c6ff80  addiu       $a2, $a2, -0x80
    ctx->pc = 0x1bc644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967168));
    // 0x1bc648: 0x70c52818  mult1       $a1, $a2, $a1
    ctx->pc = 0x1bc648u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1bc64c: 0x529c2  srl         $a1, $a1, 7
    ctx->pc = 0x1bc64cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
    // 0x1bc650: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x1bc650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1bc654: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x1bc654u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1bc658: 0xae05001c  sw          $a1, 0x1C($s0)
    ctx->pc = 0x1bc658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
    // 0x1bc65c: 0x1480ffac  bnez        $a0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x1BC65Cu;
    {
        const bool branch_taken_0x1bc65c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC65Cu;
        // 0x1bc660: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc65c) {
            ctx->pc = 0x1BC510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bc510;
        }
    }
    ctx->pc = 0x1BC664u;
    // 0x1bc664: 0x8e4578d0  lw          $a1, 0x78D0($s2)
    ctx->pc = 0x1bc664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30928)));
    // 0x1bc668: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc66c: 0xc070468  jal         func_1C11A0
    ctx->pc = 0x1BC66Cu;
    SET_GPR_U32(ctx, 31, 0x1BC674u);
    ctx->pc = 0x1BC670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC66Cu;
    // 0x1bc670: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C11A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C11A0u, 0x1BC66Cu, 0x1BC674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC674u;
label_1bc674:
    // 0x1bc674: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1BC674u;
    SET_GPR_U32(ctx, 31, 0x1BC67Cu);
    ctx->pc = 0x1BC678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC674u;
    // 0x1bc678: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1BC674u, 0x1BC67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC67Cu;
label_1bc67c:
    // 0x1bc67c: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x1bc67cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bc680: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc684: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1bc684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x1bc688: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1bc688u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1bc68c: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x1bc68cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1bc690: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1bc690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1bc694: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1bc694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1bc698: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bc698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bc69c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1bc69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1bc6a0: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1bc6a0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1bc6a4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BC6A4u;
    SET_GPR_U32(ctx, 31, 0x1BC6ACu);
    ctx->pc = 0x1BC6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC6A4u;
    // 0x1bc6a8: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BC6A4u, 0x1BC6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC6ACu;
label_1bc6ac:
    // 0x1bc6ac: 0xc0705f4  jal         func_1C17D0
    ctx->pc = 0x1BC6ACu;
    SET_GPR_U32(ctx, 31, 0x1BC6B4u);
    ctx->pc = 0x1BC6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC6ACu;
    // 0x1bc6b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C17D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C17D0u, 0x1BC6ACu, 0x1BC6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC6B4u;
label_1bc6b4:
    // 0x1bc6b4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1bc6b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bc6b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc6b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc6bc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bc6bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bc6c0: 0x3c0201b2  lui         $v0, 0x1B2
    ctx->pc = 0x1bc6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)434 << 16));
    // 0x1bc6c4: 0x628025  or          $s0, $v1, $v0
    ctx->pc = 0x1bc6c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1bc6c8: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BC6C8u;
    SET_GPR_U32(ctx, 31, 0x1BC6D0u);
    ctx->pc = 0x1BC6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC6C8u;
    // 0x1bc6cc: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BC6C8u, 0x1BC6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC6D0u;
label_1bc6d0:
    // 0x1bc6d0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bc6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bc6d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc6d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc6d8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bc6d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bc6dc: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x1bc6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1bc6e0: 0x216b8  dsll        $v0, $v0, 26
    ctx->pc = 0x1bc6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 26);
    // 0x1bc6e4: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1BC6E4u;
    SET_GPR_U32(ctx, 31, 0x1BC6ECu);
    ctx->pc = 0x1BC6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC6E4u;
    // 0x1bc6e8: 0x2028025  or          $s0, $s0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1BC6E4u, 0x1BC6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC6ECu;
label_1bc6ec:
    // 0x1bc6ec: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1bc6ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bc6f0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1bc6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bc6f4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bc6f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bc6f8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1bc6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1bc6fc: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1bc6fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1bc700: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bc700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bc704: 0x702025  or          $a0, $v1, $s0
    ctx->pc = 0x1bc704u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x1bc708: 0x9e4378d0  lwu         $v1, 0x78D0($s2)
    ctx->pc = 0x1bc708u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 30928)));
    // 0x1bc70c: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1bc70cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1bc710: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1bc710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1bc714: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc718: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bc718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bc71c: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1bc71cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1bc720: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1bc720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1bc724: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BC724u;
    SET_GPR_U32(ctx, 31, 0x1BC72Cu);
    ctx->pc = 0x1BC728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC724u;
    // 0x1bc728: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BC724u, 0x1BC72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC72Cu;
label_1bc72c:
    // 0x1bc72c: 0x8e4378c8  lw          $v1, 0x78C8($s2)
    ctx->pc = 0x1bc72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30920)));
    // 0x1bc730: 0x31982  srl         $v1, $v1, 6
    ctx->pc = 0x1bc730u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
    // 0x1bc734: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x1bc734u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1bc738: 0x10200035  beqz        $at, . + 4 + (0x35 << 2)
    ctx->pc = 0x1BC738u;
    {
        const bool branch_taken_0x1bc738 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC738u;
        // 0x1bc73c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc738) {
            ctx->pc = 0x1BC810u;
            goto label_1bc810;
        }
    }
    ctx->pc = 0x1BC740u;
    // 0x1bc740: 0x2411003f  addiu       $s1, $zero, 0x3F
    ctx->pc = 0x1bc740u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1bc744: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bc744u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bc748:
    // 0x1bc748: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x1bc748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1bc74c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bc74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bc750: 0x9e4678c0  lwu         $a2, 0x78C0($s2)
    ctx->pc = 0x1bc750u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 30912)));
    // 0x1bc754: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1bc754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1bc758: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x1bc758u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1bc75c: 0x8e4278c4  lw          $v0, 0x78C4($s2)
    ctx->pc = 0x1bc75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30916)));
    // 0x1bc760: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1bc760u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1bc764: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1bc764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1bc768: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1bc768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1bc76c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc770: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1bc770u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1bc774: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1bc774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1bc778: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bc778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bc77c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bc77cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bc780: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bc780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bc784: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1bc784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1bc788: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BC788u;
    SET_GPR_U32(ctx, 31, 0x1BC790u);
    ctx->pc = 0x1BC78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC788u;
    // 0x1bc78c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BC788u, 0x1BC790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC790u;
label_1bc790:
    // 0x1bc790: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1bc790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1bc794: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc798: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bc798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bc79c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BC79Cu;
    SET_GPR_U32(ctx, 31, 0x1BC7A4u);
    ctx->pc = 0x1BC7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC79Cu;
    // 0x1bc7a0: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BC79Cu, 0x1BC7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC7A4u;
label_1bc7a4:
    // 0x1bc7a4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1bc7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bc7a8: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1bc7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1bc7ac: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1bc7acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1bc7b0: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1bc7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1bc7b4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1bc7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1bc7b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc7b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc7bc: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1bc7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1bc7c0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BC7C0u;
    SET_GPR_U32(ctx, 31, 0x1BC7C8u);
    ctx->pc = 0x1BC7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC7C0u;
    // 0x1bc7c4: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BC7C0u, 0x1BC7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC7C8u;
label_1bc7c8:
    // 0x1bc7c8: 0x3c020e09  lui         $v0, 0xE09
    ctx->pc = 0x1bc7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3593 << 16));
    // 0x1bc7cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc7ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc7d0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1bc7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bc7d4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BC7D4u;
    SET_GPR_U32(ctx, 31, 0x1BC7DCu);
    ctx->pc = 0x1BC7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC7D4u;
    // 0x1bc7d8: 0x34462009  ori         $a2, $v0, 0x2009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8201);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BC7D4u, 0x1BC7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC7DCu;
label_1bc7dc:
    // 0x1bc7dc: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x1bc7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
    // 0x1bc7e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bc7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc7e4: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1bc7e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1bc7e8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1bc7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bc7ec: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1BC7ECu;
    SET_GPR_U32(ctx, 31, 0x1BC7F4u);
    ctx->pc = 0x1BC7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC7ECu;
    // 0x1bc7f0: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1BC7ECu, 0x1BC7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC7F4u;
label_1bc7f4:
    // 0x1bc7f4: 0x8e4378c8  lw          $v1, 0x78C8($s2)
    ctx->pc = 0x1bc7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30920)));
    // 0x1bc7f8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1bc7f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1bc7fc: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x1bc7fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1bc800: 0x31982  srl         $v1, $v1, 6
    ctx->pc = 0x1bc800u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
    // 0x1bc804: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x1bc804u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1bc808: 0x1460ffcf  bnez        $v1, . + 4 + (-0x31 << 2)
    ctx->pc = 0x1BC808u;
    {
        const bool branch_taken_0x1bc808 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC808u;
        // 0x1bc80c: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc808) {
            ctx->pc = 0x1BC748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bc748;
        }
    }
    ctx->pc = 0x1BC810u;
label_1bc810:
    // 0x1bc810: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1bc810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bc814: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1bc814u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bc818: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bc818u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bc81c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bc81cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bc820: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bc820u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc824: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bc824u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bc828: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC828u;
        // 0x1bc82c: 0x27bd0460  addiu       $sp, $sp, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BC830u;
}
