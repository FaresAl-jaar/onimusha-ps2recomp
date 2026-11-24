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

// Function: sub_003CB850
// Address: 0x3cb850 - 0x3cbb88
void sub_003CB850_0x3cb850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CB850_0x3cb850");
#endif

    switch (ctx->pc) {
        case 0x3cb8d0u: goto label_3cb8d0;
        case 0x3cb9d0u: goto label_3cb9d0;
        case 0x3cbb5cu: goto label_3cbb5c;
        default: break;
    }

    ctx->pc = 0x3cb850u;

    // 0x3cb850: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3cb850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3cb854: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3cb854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3cb858: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3cb858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3cb85c: 0x2463e440  addiu       $v1, $v1, -0x1BC0
    ctx->pc = 0x3cb85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960192));
    // 0x3cb860: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3cb860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3cb864: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x3cb864u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3cb868: 0x78670000  lq          $a3, 0x0($v1)
    ctx->pc = 0x3cb868u;
    SET_GPR_VEC(ctx, 7, FAST_READ128(0x65E440u));
    // 0x3cb86c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3cb86cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3cb870: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3cb870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3cb874: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3cb874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3cb878: 0x7d070000  sq          $a3, 0x0($t0)
    ctx->pc = 0x3cb878u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 7));
    // 0x3cb87c: 0x2463e450  addiu       $v1, $v1, -0x1BB0
    ctx->pc = 0x3cb87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960208));
    // 0x3cb880: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x3cb880u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x65E450u));
    // 0x3cb884: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x3cb884u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x3cb888: 0x90870821  lbu         $a3, 0x821($a0)
    ctx->pc = 0x3cb888u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2081)));
    // 0x3cb88c: 0x10e600b6  beq         $a3, $a2, . + 4 + (0xB6 << 2)
    ctx->pc = 0x3CB88Cu;
    {
        const bool branch_taken_0x3cb88c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x3CB890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB88Cu;
        // 0x3cb890: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb88c) {
            ctx->pc = 0x3CBB68u;
            goto label_3cbb68;
        }
    }
    ctx->pc = 0x3CB894u;
    // 0x3cb894: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3cb894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3cb898: 0x10e50087  beq         $a3, $a1, . + 4 + (0x87 << 2)
    ctx->pc = 0x3CB898u;
    {
        const bool branch_taken_0x3cb898 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        ctx->pc = 0x3CB89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB898u;
        // 0x3cb89c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb898) {
            ctx->pc = 0x3CBAB8u;
            goto label_3cbab8;
        }
    }
    ctx->pc = 0x3CB8A0u;
    // 0x3cb8a0: 0x10e3007d  beq         $a3, $v1, . + 4 + (0x7D << 2)
    ctx->pc = 0x3CB8A0u;
    {
        const bool branch_taken_0x3cb8a0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x3cb8a0) {
            ctx->pc = 0x3CBA98u;
            goto label_3cba98;
        }
    }
    ctx->pc = 0x3CB8A8u;
    // 0x3cb8a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3cb8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3cb8ac: 0x10e30044  beq         $a3, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x3CB8ACu;
    {
        const bool branch_taken_0x3cb8ac = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x3cb8ac) {
            ctx->pc = 0x3CB9C0u;
            goto label_3cb9c0;
        }
    }
    ctx->pc = 0x3CB8B4u;
    // 0x3cb8b4: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CB8B4u;
    {
        const bool branch_taken_0x3cb8b4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cb8b4) {
            ctx->pc = 0x3CB8C8u;
            goto label_3cb8c8;
        }
    }
    ctx->pc = 0x3CB8BCu;
    // 0x3cb8bc: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x3CB8BCu;
    {
        const bool branch_taken_0x3cb8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cb8bc) {
            ctx->pc = 0x3CBB78u;
            goto label_3cbb78;
        }
    }
    ctx->pc = 0x3CB8C4u;
    // 0x3cb8c4: 0x0  nop
    ctx->pc = 0x3cb8c4u;
    // NOP
label_3cb8c8:
    // 0x3cb8c8: 0xc06039c  jal         func_180E70
    ctx->pc = 0x3CB8C8u;
    SET_GPR_U32(ctx, 31, 0x3CB8D0u);
    ctx->pc = 0x3CB8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB8C8u;
    // 0x3cb8cc: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180E70u, 0x3CB8C8u, 0x3CB8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB8D0u;
label_3cb8d0:
    // 0x3cb8d0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3cb8d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3cb8d4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x3cb8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3cb8d8: 0x10650009  beq         $v1, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3CB8D8u;
    {
        const bool branch_taken_0x3cb8d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x3cb8d8) {
            ctx->pc = 0x3CB900u;
            goto label_3cb900;
        }
    }
    ctx->pc = 0x3CB8E0u;
    // 0x3cb8e0: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3cb8e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3cb8e4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3cb8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3cb8e8: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3cb8e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3cb8ec: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3cb8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3cb8f0: 0xa60507f2  sh          $a1, 0x7F2($s0)
    ctx->pc = 0x3cb8f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 5));
    // 0x3cb8f4: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x3cb8f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3cb8f8: 0xa20407f5  sb          $a0, 0x7F5($s0)
    ctx->pc = 0x3cb8f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 4));
    // 0x3cb8fc: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x3cb8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
label_3cb900:
    // 0x3cb900: 0x92032b31  lbu         $v1, 0x2B31($s0)
    ctx->pc = 0x3cb900u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11057)));
    // 0x3cb904: 0x1060009c  beqz        $v1, . + 4 + (0x9C << 2)
    ctx->pc = 0x3CB904u;
    {
        const bool branch_taken_0x3cb904 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB904u;
        // 0x3cb908: 0x3c01008d  lui         $at, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb904) {
            ctx->pc = 0x3CBB78u;
            goto label_3cbb78;
        }
    }
    ctx->pc = 0x3CB90Cu;
    // 0x3cb90c: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x3cb90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x3cb910: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x3cb910u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 27676)));
    // 0x3cb914: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3cb914u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3cb918: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3cb918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3cb91c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3cb91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3cb920: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3CB920u;
    {
        const bool branch_taken_0x3cb920 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cb920) {
            ctx->pc = 0x3CB968u;
            goto label_3cb968;
        }
    }
    ctx->pc = 0x3CB928u;
    // 0x3cb928: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x3cb928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3cb92c: 0x3c034600  lui         $v1, 0x4600
    ctx->pc = 0x3cb92cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17920 << 16));
    // 0x3cb930: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x3cb930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x3cb934: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cb934u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3cb938: 0x0  nop
    ctx->pc = 0x3cb938u;
    // NOP
    // 0x3cb93c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3cb93cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3cb940: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x3CB940u;
    {
        const bool branch_taken_0x3cb940 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3cb940) {
            ctx->pc = 0x3CB968u;
            goto label_3cb968;
        }
    }
    ctx->pc = 0x3CB948u;
    // 0x3cb948: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3cb948u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3cb94c: 0x7e030870  sq          $v1, 0x870($s0)
    ctx->pc = 0x3cb94cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 2160), GPR_VEC(ctx, 3));
    // 0x3cb950: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x3cb950u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3cb954: 0x7e030880  sq          $v1, 0x880($s0)
    ctx->pc = 0x3cb954u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 2176), GPR_VEC(ctx, 3));
    // 0x3cb958: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x3cb958u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3cb95c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3CB95Cu;
    {
        const bool branch_taken_0x3cb95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB95Cu;
        // 0x3cb960: 0x7e030890  sq          $v1, 0x890($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 2192), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb95c) {
            ctx->pc = 0x3CB980u;
            goto label_3cb980;
        }
    }
    ctx->pc = 0x3CB964u;
    // 0x3cb964: 0x0  nop
    ctx->pc = 0x3cb964u;
    // NOP
label_3cb968:
    // 0x3cb968: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x3cb968u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3cb96c: 0x7e030870  sq          $v1, 0x870($s0)
    ctx->pc = 0x3cb96cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 2160), GPR_VEC(ctx, 3));
    // 0x3cb970: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3cb970u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3cb974: 0x7e030880  sq          $v1, 0x880($s0)
    ctx->pc = 0x3cb974u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 2176), GPR_VEC(ctx, 3));
    // 0x3cb978: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3cb978u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3cb97c: 0x7e030890  sq          $v1, 0x890($s0)
    ctx->pc = 0x3cb97cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 2192), GPR_VEC(ctx, 3));
label_3cb980:
    // 0x3cb980: 0xa6002b32  sh          $zero, 0x2B32($s0)
    ctx->pc = 0x3cb980u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 11058), (uint16_t)GPR_U32(ctx, 0));
    // 0x3cb984: 0x92060002  lbu         $a2, 0x2($s0)
    ctx->pc = 0x3cb984u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3cb988: 0x3c044100  lui         $a0, 0x4100
    ctx->pc = 0x3cb988u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16640 << 16));
    // 0x3cb98c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3cb98cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3cb990: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x3cb990u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x3cb994: 0x24a50b8c  addiu       $a1, $a1, 0xB8C
    ctx->pc = 0x3cb994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2956));
    // 0x3cb998: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3cb998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3cb99c: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x3cb99cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x3cb9a0: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x3cb9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x3cb9a4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3cb9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3cb9a8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x3cb9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3cb9ac: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x3cb9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3cb9b0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3cb9b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3cb9b4: 0xe6002b28  swc1        $f0, 0x2B28($s0)
    ctx->pc = 0x3cb9b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11048), bits); }
    // 0x3cb9b8: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x3CB9B8u;
    {
        const bool branch_taken_0x3cb9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB9B8u;
        // 0x3cb9bc: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb9b8) {
            ctx->pc = 0x3CBB78u;
            goto label_3cbb78;
        }
    }
    ctx->pc = 0x3CB9C0u;
label_3cb9c0:
    // 0x3cb9c0: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x3cb9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x3cb9c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3cb9c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3cb9c8: 0xc0f2a20  jal         func_3CA880
    ctx->pc = 0x3CB9C8u;
    SET_GPR_U32(ctx, 31, 0x3CB9D0u);
    ctx->pc = 0x3CA880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA880u, 0x3CB9C8u, 0x3CB9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB9D0u;
label_3cb9d0:
    // 0x3cb9d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3cb9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3cb9d4: 0x1043001a  beq         $v0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3CB9D4u;
    {
        const bool branch_taken_0x3cb9d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3cb9d4) {
            ctx->pc = 0x3CBA40u;
            goto label_3cba40;
        }
    }
    ctx->pc = 0x3CB9DCu;
    // 0x3cb9dc: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3cb9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3cb9e0: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x3cb9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x3cb9e4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3cb9e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3cb9e8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3cb9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x3cb9ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3cb9ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3cb9f0: 0x0  nop
    ctx->pc = 0x3cb9f0u;
    // NOP
    // 0x3cb9f4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3cb9f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3cb9f8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3cb9f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3cb9fc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3CB9FCu;
    {
        const bool branch_taken_0x3cb9fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3cb9fc) {
            ctx->pc = 0x3CBA14u;
            goto label_3cba14;
        }
    }
    ctx->pc = 0x3CBA04u;
    // 0x3cba04: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cba04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3cba08: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3cba08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3cba0c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3CBA0Cu;
    {
        const bool branch_taken_0x3cba0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBA0Cu;
        // 0x3cba10: 0x96042b32  lhu         $a0, 0x2B32($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 11058)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cba0c) {
            ctx->pc = 0x3CBA30u;
            goto label_3cba30;
        }
    }
    ctx->pc = 0x3CBA14u;
label_3cba14:
    // 0x3cba14: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3cba14u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3cba18: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3cba18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3cba1c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cba1cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3cba20: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3cba20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3cba24: 0x0  nop
    ctx->pc = 0x3cba24u;
    // NOP
    // 0x3cba28: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x3cba28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x3cba2c: 0x96042b32  lhu         $a0, 0x2B32($s0)
    ctx->pc = 0x3cba2cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 11058)));
label_3cba30:
    // 0x3cba30: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x3cba30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3cba34: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x3cba34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3cba38: 0x1020004f  beqz        $at, . + 4 + (0x4F << 2)
    ctx->pc = 0x3CBA38u;
    {
        const bool branch_taken_0x3cba38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBA38u;
        // 0x3cba3c: 0xa6032b32  sh          $v1, 0x2B32($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 11058), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cba38) {
            ctx->pc = 0x3CBB78u;
            goto label_3cbb78;
        }
    }
    ctx->pc = 0x3CBA40u;
label_3cba40:
    // 0x3cba40: 0x92090002  lbu         $t1, 0x2($s0)
    ctx->pc = 0x3cba40u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3cba44: 0x3c070067  lui         $a3, 0x67
    ctx->pc = 0x3cba44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)103 << 16));
    // 0x3cba48: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3cba48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3cba4c: 0x34640040  ori         $a0, $v1, 0x40
    ctx->pc = 0x3cba4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x3cba50: 0x24e70b8c  addiu       $a3, $a3, 0xB8C
    ctx->pc = 0x3cba50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2956));
    // 0x3cba54: 0x24060055  addiu       $a2, $zero, 0x55
    ctx->pc = 0x3cba54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x3cba58: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x3cba58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3cba5c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3cba5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3cba60: 0x940c0  sll         $t0, $t1, 3
    ctx->pc = 0x3cba60u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x3cba64: 0x1094023  subu        $t0, $t0, $t1
    ctx->pc = 0x3cba64u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x3cba68: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x3cba68u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x3cba6c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x3cba6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x3cba70: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x3cba70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3cba74: 0xe6002b28  swc1        $f0, 0x2B28($s0)
    ctx->pc = 0x3cba74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 11048), bits); }
    // 0x3cba78: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3cba78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3cba7c: 0xa20007f4  sb          $zero, 0x7F4($s0)
    ctx->pc = 0x3cba7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 0));
    // 0x3cba80: 0xa60607f2  sh          $a2, 0x7F2($s0)
    ctx->pc = 0x3cba80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 6));
    // 0x3cba84: 0xa20507f5  sb          $a1, 0x7F5($s0)
    ctx->pc = 0x3cba84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 5));
    // 0x3cba88: 0xae0407ec  sw          $a0, 0x7EC($s0)
    ctx->pc = 0x3cba88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 4));
    // 0x3cba8c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x3CBA8Cu;
    {
        const bool branch_taken_0x3cba8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBA8Cu;
        // 0x3cba90: 0xa2030821  sb          $v1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cba8c) {
            ctx->pc = 0x3CBB78u;
            goto label_3cbb78;
        }
    }
    ctx->pc = 0x3CBA94u;
    // 0x3cba94: 0x0  nop
    ctx->pc = 0x3cba94u;
    // NOP
label_3cba98:
    // 0x3cba98: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x3cba98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3cba9c: 0x946300c4  lhu         $v1, 0xC4($v1)
    ctx->pc = 0x3cba9cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x3cbaa0: 0x28610065  slti        $at, $v1, 0x65
    ctx->pc = 0x3cbaa0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x3cbaa4: 0x14200034  bnez        $at, . + 4 + (0x34 << 2)
    ctx->pc = 0x3CBAA4u;
    {
        const bool branch_taken_0x3cbaa4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CBAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBAA4u;
        // 0x3cbaa8: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbaa4) {
            ctx->pc = 0x3CBB78u;
            goto label_3cbb78;
        }
    }
    ctx->pc = 0x3CBAACu;
    // 0x3cbaac: 0xa6030826  sh          $v1, 0x826($s0)
    ctx->pc = 0x3cbaacu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2086), (uint16_t)GPR_U32(ctx, 3));
    // 0x3cbab0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x3CBAB0u;
    {
        const bool branch_taken_0x3cbab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBAB0u;
        // 0x3cbab4: 0xa2050821  sb          $a1, 0x821($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbab0) {
            ctx->pc = 0x3CBB78u;
            goto label_3cbb78;
        }
    }
    ctx->pc = 0x3CBAB8u;
label_3cbab8:
    // 0x3cbab8: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x3cbab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3cbabc: 0x946300c4  lhu         $v1, 0xC4($v1)
    ctx->pc = 0x3cbabcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x3cbac0: 0x28610079  slti        $at, $v1, 0x79
    ctx->pc = 0x3cbac0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)121) ? 1 : 0);
    // 0x3cbac4: 0x14200012  bnez        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x3CBAC4u;
    {
        const bool branch_taken_0x3cbac4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cbac4) {
            ctx->pc = 0x3CBB10u;
            goto label_3cbb10;
        }
    }
    ctx->pc = 0x3CBACCu;
    // 0x3cbacc: 0xa20007f6  sb          $zero, 0x7F6($s0)
    ctx->pc = 0x3cbaccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2038), (uint8_t)GPR_U32(ctx, 0));
    // 0x3cbad0: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x3cbad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x3cbad4: 0xa20307f4  sb          $v1, 0x7F4($s0)
    ctx->pc = 0x3cbad4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2036), (uint8_t)GPR_U32(ctx, 3));
    // 0x3cbad8: 0x24030055  addiu       $v1, $zero, 0x55
    ctx->pc = 0x3cbad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x3cbadc: 0xa60307f2  sh          $v1, 0x7F2($s0)
    ctx->pc = 0x3cbadcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2034), (uint16_t)GPR_U32(ctx, 3));
    // 0x3cbae0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3cbae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3cbae4: 0xa20607f5  sb          $a2, 0x7F5($s0)
    ctx->pc = 0x3cbae4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2037), (uint8_t)GPR_U32(ctx, 6));
    // 0x3cbae8: 0xae0307ec  sw          $v1, 0x7EC($s0)
    ctx->pc = 0x3cbae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2028), GPR_U32(ctx, 3));
    // 0x3cbaec: 0x96030826  lhu         $v1, 0x826($s0)
    ctx->pc = 0x3cbaecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2086)));
    // 0x3cbaf0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3CBAF0u;
    {
        const bool branch_taken_0x3cbaf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cbaf0) {
            ctx->pc = 0x3CBB08u;
            goto label_3cbb08;
        }
    }
    ctx->pc = 0x3CBAF8u;
    // 0x3cbaf8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3cbaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3cbafc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3CBAFCu;
    {
        const bool branch_taken_0x3cbafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBAFCu;
        // 0x3cbb00: 0xa6030826  sh          $v1, 0x826($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2086), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbafc) {
            ctx->pc = 0x3CBB10u;
            goto label_3cbb10;
        }
    }
    ctx->pc = 0x3CBB04u;
    // 0x3cbb04: 0x0  nop
    ctx->pc = 0x3cbb04u;
    // NOP
label_3cbb08:
    // 0x3cbb08: 0xa2060821  sb          $a2, 0x821($s0)
    ctx->pc = 0x3cbb08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2081), (uint8_t)GPR_U32(ctx, 6));
    // 0x3cbb0c: 0x0  nop
    ctx->pc = 0x3cbb0cu;
    // NOP
label_3cbb10:
    // 0x3cbb10: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3cbb10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3cbb14: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x3cbb14u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x3cbb18: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x3cbb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x3cbb1c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3cbb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3cbb20: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3cbb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3cbb24: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3cbb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3cbb28: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x3CBB28u;
    {
        const bool branch_taken_0x3cbb28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cbb28) {
            ctx->pc = 0x3CBB78u;
            goto label_3cbb78;
        }
    }
    ctx->pc = 0x3CBB30u;
    // 0x3cbb30: 0x92060002  lbu         $a2, 0x2($s0)
    ctx->pc = 0x3cbb30u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3cbb34: 0x24650020  addiu       $a1, $v1, 0x20
    ctx->pc = 0x3cbb34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x3cbb38: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x3cbb38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x3cbb3c: 0x24420b98  addiu       $v0, $v0, 0xB98
    ctx->pc = 0x3cbb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2968));
    // 0x3cbb40: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x3cbb40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x3cbb44: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x3cbb44u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3cbb48: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3cbb48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3cbb4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3cbb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3cbb50: 0x84460000  lh          $a2, 0x0($v0)
    ctx->pc = 0x3cbb50u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3cbb54: 0xc0a23e4  jal         func_288F90
    ctx->pc = 0x3CBB54u;
    SET_GPR_U32(ctx, 31, 0x3CBB5Cu);
    ctx->pc = 0x3CBB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CBB54u;
    // 0x3cbb58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288F90u, 0x3CBB54u, 0x3CBB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CBB5Cu;
label_3cbb5c:
    // 0x3cbb5c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3CBB5Cu;
    {
        const bool branch_taken_0x3cbb5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cbb5c) {
            ctx->pc = 0x3CBB78u;
            goto label_3cbb78;
        }
    }
    ctx->pc = 0x3CBB64u;
    // 0x3cbb64: 0x0  nop
    ctx->pc = 0x3cbb64u;
    // NOP
label_3cbb68:
    // 0x3cbb68: 0x920307f6  lbu         $v1, 0x7F6($s0)
    ctx->pc = 0x3cbb68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2038)));
    // 0x3cbb6c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3CBB6Cu;
    {
        const bool branch_taken_0x3cbb6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBB6Cu;
        // 0x3cbb70: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbb6c) {
            ctx->pc = 0x3CBB78u;
            goto label_3cbb78;
        }
    }
    ctx->pc = 0x3CBB74u;
    // 0x3cbb74: 0xa2030780  sb          $v1, 0x780($s0)
    ctx->pc = 0x3cbb74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1920), (uint8_t)GPR_U32(ctx, 3));
label_3cbb78:
    // 0x3cbb78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3cbb78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3cbb7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3cbb7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3cbb80: 0x3e00008  jr          $ra
    ctx->pc = 0x3CBB80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CBB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBB80u;
        // 0x3cbb84: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CBB80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CBB88u;
}
