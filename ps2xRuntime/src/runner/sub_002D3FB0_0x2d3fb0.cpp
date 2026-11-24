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

// Function: sub_002D3FB0
// Address: 0x2d3fb0 - 0x2d4148
void sub_002D3FB0_0x2d3fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3FB0_0x2d3fb0");
#endif

    ctx->pc = 0x2d3fb0u;

    // 0x2d3fb0: 0xc7808078  lwc1        $f0, -0x7F88($gp)
    ctx->pc = 0x2d3fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3fb4: 0x3c0343a0  lui         $v1, 0x43A0
    ctx->pc = 0x2d3fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
    // 0x2d3fb8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2d3fb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d3fbc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2d3fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2d3fc0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2d3fc0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2d3fc4: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x2d3fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x2d3fc8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2d3fc8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2d3fcc: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x2d3fccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2d3fd0: 0x1060005b  beqz        $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x2D3FD0u;
    {
        const bool branch_taken_0x2d3fd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3fd0) {
            ctx->pc = 0x2D4140u;
            goto label_2d4140;
        }
    }
    ctx->pc = 0x2D3FD8u;
    // 0x2d3fd8: 0x9085006f  lbu         $a1, 0x6F($a0)
    ctx->pc = 0x2d3fd8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 111)));
    // 0x2d3fdc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2d3fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d3fe0: 0x10a3003f  beq         $a1, $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x2D3FE0u;
    {
        const bool branch_taken_0x2d3fe0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D3FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3FE0u;
        // 0x2d3fe4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3fe0) {
            ctx->pc = 0x2D40E0u;
            goto label_2d40e0;
        }
    }
    ctx->pc = 0x2D3FE8u;
    // 0x2d3fe8: 0x10a3002d  beq         $a1, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x2D3FE8u;
    {
        const bool branch_taken_0x2d3fe8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d3fe8) {
            ctx->pc = 0x2D40A0u;
            goto label_2d40a0;
        }
    }
    ctx->pc = 0x2D3FF0u;
    // 0x2d3ff0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d3ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3ff4: 0x10a3000e  beq         $a1, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2D3FF4u;
    {
        const bool branch_taken_0x2d3ff4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d3ff4) {
            ctx->pc = 0x2D4030u;
            goto label_2d4030;
        }
    }
    ctx->pc = 0x2D3FFCu;
    // 0x2d3ffc: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D3FFCu;
    {
        const bool branch_taken_0x2d3ffc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3ffc) {
            ctx->pc = 0x2D4010u;
            goto label_2d4010;
        }
    }
    ctx->pc = 0x2D4004u;
    // 0x2d4004: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x2D4004u;
    {
        const bool branch_taken_0x2d4004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4004) {
            ctx->pc = 0x2D4140u;
            goto label_2d4140;
        }
    }
    ctx->pc = 0x2D400Cu;
    // 0x2d400c: 0x0  nop
    ctx->pc = 0x2d400cu;
    // NOP
label_2d4010:
    // 0x2d4010: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2d4010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2d4014: 0xa0830071  sb          $v1, 0x71($a0)
    ctx->pc = 0x2d4014u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 113), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d4018: 0xa4800072  sh          $zero, 0x72($a0)
    ctx->pc = 0x2d4018u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 114), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d401c: 0xa0800070  sb          $zero, 0x70($a0)
    ctx->pc = 0x2d401cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 112), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d4020: 0x9083006f  lbu         $v1, 0x6F($a0)
    ctx->pc = 0x2d4020u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 111)));
    // 0x2d4024: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d4024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d4028: 0xa083006f  sb          $v1, 0x6F($a0)
    ctx->pc = 0x2d4028u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 111), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d402c: 0x0  nop
    ctx->pc = 0x2d402cu;
    // NOP
label_2d4030:
    // 0x2d4030: 0x90860070  lbu         $a2, 0x70($a0)
    ctx->pc = 0x2d4030u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2d4034: 0x28c1000a  slti        $at, $a2, 0xA
    ctx->pc = 0x2d4034u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2d4038: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D4038u;
    {
        const bool branch_taken_0x2d4038 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D403Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4038u;
        // 0x2d403c: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4038) {
            ctx->pc = 0x2D4088u;
            goto label_2d4088;
        }
    }
    ctx->pc = 0x2D4040u;
    // 0x2d4040: 0x2405ff51  addiu       $a1, $zero, -0xAF
    ctx->pc = 0x2d4040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967121));
    // 0x2d4044: 0x663023  subu        $a2, $v1, $a2
    ctx->pc = 0x2d4044u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2d4048: 0xc52818  mult        $a1, $a2, $a1
    ctx->pc = 0x2d4048u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2d404c: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x2d404cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
    // 0x2d4050: 0x34636667  ori         $v1, $v1, 0x6667
    ctx->pc = 0x2d4050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
    // 0x2d4054: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x2d4054u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2d4058: 0x0  nop
    ctx->pc = 0x2d4058u;
    // NOP
    // 0x2d405c: 0x0  nop
    ctx->pc = 0x2d405cu;
    // NOP
    // 0x2d4060: 0x1810  mfhi        $v1
    ctx->pc = 0x2d4060u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2d4064: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x2d4064u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x2d4068: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x2d4068u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2d406c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2d406cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2d4070: 0xa4830072  sh          $v1, 0x72($a0)
    ctx->pc = 0x2d4070u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 114), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d4074: 0x90830070  lbu         $v1, 0x70($a0)
    ctx->pc = 0x2d4074u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2d4078: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d4078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d407c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2D407Cu;
    {
        const bool branch_taken_0x2d407c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D407Cu;
        // 0x2d4080: 0xa0830070  sb          $v1, 0x70($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 112), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d407c) {
            ctx->pc = 0x2D4140u;
            goto label_2d4140;
        }
    }
    ctx->pc = 0x2D4084u;
    // 0x2d4084: 0x0  nop
    ctx->pc = 0x2d4084u;
    // NOP
label_2d4088:
    // 0x2d4088: 0xa4800072  sh          $zero, 0x72($a0)
    ctx->pc = 0x2d4088u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 114), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d408c: 0xa0800070  sb          $zero, 0x70($a0)
    ctx->pc = 0x2d408cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 112), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d4090: 0x9083006f  lbu         $v1, 0x6F($a0)
    ctx->pc = 0x2d4090u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 111)));
    // 0x2d4094: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d4094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d4098: 0xa083006f  sb          $v1, 0x6F($a0)
    ctx->pc = 0x2d4098u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 111), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d409c: 0x0  nop
    ctx->pc = 0x2d409cu;
    // NOP
label_2d40a0:
    // 0x2d40a0: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x2d40a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x2d40a4: 0x67001a  div         $zero, $v1, $a3
    ctx->pc = 0x2d40a4u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2d40a8: 0x90850070  lbu         $a1, 0x70($a0)
    ctx->pc = 0x2d40a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2d40ac: 0x0  nop
    ctx->pc = 0x2d40acu;
    // NOP
    // 0x2d40b0: 0x1812  mflo        $v1
    ctx->pc = 0x2d40b0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x2d40b4: 0x2463fff6  addiu       $v1, $v1, -0xA
    ctx->pc = 0x2d40b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
    // 0x2d40b8: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x2d40b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2d40bc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D40BCu;
    {
        const bool branch_taken_0x2d40bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D40C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D40BCu;
        // 0x2d40c0: 0x24a30001  addiu       $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d40bc) {
            ctx->pc = 0x2D40D0u;
            goto label_2d40d0;
        }
    }
    ctx->pc = 0x2D40C4u;
    // 0x2d40c4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2D40C4u;
    {
        const bool branch_taken_0x2d40c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D40C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D40C4u;
        // 0x2d40c8: 0xa0830070  sb          $v1, 0x70($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 112), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d40c4) {
            ctx->pc = 0x2D4140u;
            goto label_2d4140;
        }
    }
    ctx->pc = 0x2D40CCu;
    // 0x2d40cc: 0x0  nop
    ctx->pc = 0x2d40ccu;
    // NOP
label_2d40d0:
    // 0x2d40d0: 0xa0800070  sb          $zero, 0x70($a0)
    ctx->pc = 0x2d40d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 112), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d40d4: 0x9083006f  lbu         $v1, 0x6F($a0)
    ctx->pc = 0x2d40d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 111)));
    // 0x2d40d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d40d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d40dc: 0xa083006f  sb          $v1, 0x6F($a0)
    ctx->pc = 0x2d40dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 111), (uint8_t)GPR_U32(ctx, 3));
label_2d40e0:
    // 0x2d40e0: 0x90860070  lbu         $a2, 0x70($a0)
    ctx->pc = 0x2d40e0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2d40e4: 0x28c10014  slti        $at, $a2, 0x14
    ctx->pc = 0x2d40e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x2d40e8: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x2D40E8u;
    {
        const bool branch_taken_0x2d40e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D40ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D40E8u;
        // 0x2d40ec: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d40e8) {
            ctx->pc = 0x2D4128u;
            goto label_2d4128;
        }
    }
    ctx->pc = 0x2D40F0u;
    // 0x2d40f0: 0x3c03cccc  lui         $v1, 0xCCCC
    ctx->pc = 0x2d40f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52428 << 16));
    // 0x2d40f4: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x2d40f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2d40f8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2d40f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2d40fc: 0x529c0  sll         $a1, $a1, 7
    ctx->pc = 0x2d40fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x2d4100: 0x650019  multu       $v1, $a1
    ctx->pc = 0x2d4100u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2d4104: 0x0  nop
    ctx->pc = 0x2d4104u;
    // NOP
    // 0x2d4108: 0x0  nop
    ctx->pc = 0x2d4108u;
    // NOP
    // 0x2d410c: 0x1810  mfhi        $v1
    ctx->pc = 0x2d410cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2d4110: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x2d4110u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2d4114: 0xa0830071  sb          $v1, 0x71($a0)
    ctx->pc = 0x2d4114u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 113), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d4118: 0x90830070  lbu         $v1, 0x70($a0)
    ctx->pc = 0x2d4118u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2d411c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d411cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d4120: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D4120u;
    {
        const bool branch_taken_0x2d4120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4120u;
        // 0x2d4124: 0xa0830070  sb          $v1, 0x70($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 112), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4120) {
            ctx->pc = 0x2D4140u;
            goto label_2d4140;
        }
    }
    ctx->pc = 0x2D4128u;
label_2d4128:
    // 0x2d4128: 0xa080006f  sb          $zero, 0x6F($a0)
    ctx->pc = 0x2d4128u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 111), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d412c: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x2d412cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2d4130: 0x2403bfff  addiu       $v1, $zero, -0x4001
    ctx->pc = 0x2d4130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x2d4134: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2d4134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2d4138: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2d4138u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2d413c: 0x0  nop
    ctx->pc = 0x2d413cu;
    // NOP
label_2d4140:
    // 0x2d4140: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4148u;
}
