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

// Function: sub_001A2390
// Address: 0x1a2390 - 0x1a2590
void sub_001A2390_0x1a2390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2390_0x1a2390");
#endif

    switch (ctx->pc) {
        case 0x1a23b0u: goto label_1a23b0;
        case 0x1a23c0u: goto label_1a23c0;
        case 0x1a2428u: goto label_1a2428;
        case 0x1a2448u: goto label_1a2448;
        case 0x1a24f8u: goto label_1a24f8;
        case 0x1a2538u: goto label_1a2538;
        default: break;
    }

    ctx->pc = 0x1a2390u;

    // 0x1a2390: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a2390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a2394: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1a2394u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2398: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a2398u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a239c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x1a239cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a23a0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1a23a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a23a4: 0x27a60000  addiu       $a2, $sp, 0x0
    ctx->pc = 0x1a23a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x1a23a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1a23a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1a23ac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a23acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a23b0:
    // 0x1a23b0: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x1a23b0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
    // 0x1a23b4: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x1a23b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1a23b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a23b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a23bc: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x1a23bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1a23c0:
    // 0x1a23c0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1a23c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a23c4: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x1a23c4u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x1a23c8: 0x46050968  max.s       $f5, $f1, $f5
    ctx->pc = 0x1a23c8u;
    ctx->f[5] = std::max(ctx->f[1], ctx->f[5]);
    // 0x1a23cc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1a23ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1a23d0: 0x29020003  slti        $v0, $t0, 0x3
    ctx->pc = 0x1a23d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a23d4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A23D4u;
    {
        const bool branch_taken_0x1a23d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A23D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A23D4u;
        // 0x1a23d8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a23d4) {
            ctx->pc = 0x1A23C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a23c0;
        }
    }
    ctx->pc = 0x1A23DCu;
    // 0x1a23dc: 0x46050032  c.eq.s      $f0, $f5
    ctx->pc = 0x1a23dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a23e0: 0x45010069  bc1t        . + 4 + (0x69 << 2)
    ctx->pc = 0x1A23E0u;
    {
        const bool branch_taken_0x1a23e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a23e0) {
            ctx->pc = 0x1A2588u;
            goto label_1a2588;
        }
    }
    ctx->pc = 0x1A23E8u;
    // 0x1a23e8: 0x0  nop
    ctx->pc = 0x1a23e8u;
    // NOP
    // 0x1a23ec: 0x0  nop
    ctx->pc = 0x1a23ecu;
    // NOP
    // 0x1a23f0: 0x46051043  div.s       $f1, $f2, $f5
    ctx->pc = 0x1a23f0u;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[5]); }
    // 0x1a23f4: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1a23f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1a23f8: 0x29420003  slti        $v0, $t2, 0x3
    ctx->pc = 0x1a23f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a23fc: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x1a23fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x1a2400: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x1a2400u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x1a2404: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x1a2404u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x1a2408: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1A2408u;
    {
        const bool branch_taken_0x1a2408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A240Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2408u;
        // 0x1a240c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2408) {
            ctx->pc = 0x1A23B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a23b0;
        }
    }
    ctx->pc = 0x1A2410u;
    // 0x1a2410: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x1a2410u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
    // 0x1a2414: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a2414u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2418: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a2418u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a241c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1a241cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2420: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1a2420u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a2424: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1a2424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1a2428:
    // 0x1a2428: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x1a2428u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a242c: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x1a242cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1a2430: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x1A2430u;
    {
        const bool branch_taken_0x1a2430 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2430u;
        // 0x1a2434: 0x60702d  daddu       $t6, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2430) {
            ctx->pc = 0x1A2498u;
            goto label_1a2498;
        }
    }
    ctx->pc = 0x1A2438u;
    // 0x1a2438: 0x34880  sll         $t1, $v1, 2
    ctx->pc = 0x1a2438u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a243c: 0x875821  addu        $t3, $a0, $a3
    ctx->pc = 0x1a243cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1a2440: 0xa96021  addu        $t4, $a1, $t1
    ctx->pc = 0x1a2440u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1a2444: 0x0  nop
    ctx->pc = 0x1a2444u;
    // NOP
label_1a2448:
    // 0x1a2448: 0x8d8d0000  lw          $t5, 0x0($t4)
    ctx->pc = 0x1a2448u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1a244c: 0xd4880  sll         $t1, $t5, 2
    ctx->pc = 0x1a244cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x1a2450: 0xd5040  sll         $t2, $t5, 1
    ctx->pc = 0x1a2450u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x1a2454: 0x13d4821  addu        $t1, $t1, $sp
    ctx->pc = 0x1a2454u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 29)));
    // 0x1a2458: 0x14d5021  addu        $t2, $t2, $t5
    ctx->pc = 0x1a2458u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 13)));
    // 0x1a245c: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x1a245cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2460: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x1a2460u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x1a2464: 0x16a4821  addu        $t1, $t3, $t2
    ctx->pc = 0x1a2464u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1a2468: 0xc5220000  lwc1        $f2, 0x0($t1)
    ctx->pc = 0x1a2468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a246c: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x1a246cu;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x1a2470: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1a2470u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1a2474: 0x46050836  c.le.s      $f1, $f5
    ctx->pc = 0x1a2474u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a2478: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1A2478u;
    {
        const bool branch_taken_0x1a2478 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a2478) {
            ctx->pc = 0x1A2488u;
            goto label_1a2488;
        }
    }
    ctx->pc = 0x1A2480u;
    // 0x1a2480: 0x46000946  mov.s       $f5, $f1
    ctx->pc = 0x1a2480u;
    ctx->f[5] = FPU_MOV_S(ctx->f[1]);
    // 0x1a2484: 0x1c0402d  daddu       $t0, $t6, $zero
    ctx->pc = 0x1a2484u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_1a2488:
    // 0x1a2488: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x1a2488u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x1a248c: 0x29c90003  slti        $t1, $t6, 0x3
    ctx->pc = 0x1a248cu;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a2490: 0x1520ffed  bnez        $t1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1A2490u;
    {
        const bool branch_taken_0x1a2490 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2490u;
        // 0x1a2494: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2490) {
            ctx->pc = 0x1A2448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a2448;
        }
    }
    ctx->pc = 0x1A2498u;
label_1a2498:
    // 0x1a2498: 0x84880  sll         $t1, $t0, 2
    ctx->pc = 0x1a2498u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1a249c: 0xa95021  addu        $t2, $a1, $t1
    ctx->pc = 0x1a249cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1a24a0: 0x11030005  beq         $t0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A24A0u;
    {
        const bool branch_taken_0x1a24a0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A24A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A24A0u;
        // 0x1a24a4: 0x8d4b0000  lw          $t3, 0x0($t2) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a24a0) {
            ctx->pc = 0x1A24B8u;
            goto label_1a24b8;
        }
    }
    ctx->pc = 0x1A24A8u;
    // 0x1a24a8: 0x8cc90000  lw          $t1, 0x0($a2)
    ctx->pc = 0x1a24a8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1a24ac: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1a24acu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1a24b0: 0xad490000  sw          $t1, 0x0($t2)
    ctx->pc = 0x1a24b0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 9));
    // 0x1a24b4: 0xaccb0000  sw          $t3, 0x0($a2)
    ctx->pc = 0x1a24b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 11));
label_1a24b8:
    // 0x1a24b8: 0xb4840  sll         $t1, $t3, 1
    ctx->pc = 0x1a24b8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x1a24bc: 0x12b4821  addu        $t1, $t1, $t3
    ctx->pc = 0x1a24bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x1a24c0: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x1a24c0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1a24c4: 0x896821  addu        $t5, $a0, $t1
    ctx->pc = 0x1a24c4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1a24c8: 0x1a74821  addu        $t1, $t5, $a3
    ctx->pc = 0x1a24c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
    // 0x1a24cc: 0xc5250000  lwc1        $f5, 0x0($t1)
    ctx->pc = 0x1a24ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1a24d0: 0x46051832  c.eq.s      $f3, $f5
    ctx->pc = 0x1a24d0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a24d4: 0x4501002c  bc1t        . + 4 + (0x2C << 2)
    ctx->pc = 0x1A24D4u;
    {
        const bool branch_taken_0x1a24d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A24D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A24D4u;
        // 0x1a24d8: 0x46050002  mul.s       $f0, $f0, $f5 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a24d4) {
            ctx->pc = 0x1A2588u;
            goto label_1a2588;
        }
    }
    ctx->pc = 0x1A24DCu;
    // 0x1a24dc: 0x246b0001  addiu       $t3, $v1, 0x1
    ctx->pc = 0x1a24dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a24e0: 0x29610003  slti        $at, $t3, 0x3
    ctx->pc = 0x1a24e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a24e4: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
    ctx->pc = 0x1A24E4u;
    {
        const bool branch_taken_0x1a24e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a24e4) {
            ctx->pc = 0x1A2570u;
            goto label_1a2570;
        }
    }
    ctx->pc = 0x1A24ECu;
    // 0x1a24ec: 0xb4080  sll         $t0, $t3, 2
    ctx->pc = 0x1a24ecu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x1a24f0: 0x877021  addu        $t6, $a0, $a3
    ctx->pc = 0x1a24f0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1a24f4: 0xa87821  addu        $t7, $a1, $t0
    ctx->pc = 0x1a24f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_1a24f8:
    // 0x1a24f8: 0x8dea0000  lw          $t2, 0x0($t7)
    ctx->pc = 0x1a24f8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1a24fc: 0x24680001  addiu       $t0, $v1, 0x1
    ctx->pc = 0x1a24fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a2500: 0xa4840  sll         $t1, $t2, 1
    ctx->pc = 0x1a2500u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x1a2504: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x1a2504u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x1a2508: 0x95080  sll         $t2, $t1, 2
    ctx->pc = 0x1a2508u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1a250c: 0x1ca4821  addu        $t1, $t6, $t2
    ctx->pc = 0x1a250cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
    // 0x1a2510: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x1a2510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2514: 0x46050903  div.s       $f4, $f1, $f5
    ctx->pc = 0x1a2514u;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[1], ctx->f[5]); }
    // 0x1a2518: 0x0  nop
    ctx->pc = 0x1a2518u;
    // NOP
    // 0x1a251c: 0x29010003  slti        $at, $t0, 0x3
    ctx->pc = 0x1a251cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a2520: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x1A2520u;
    {
        const bool branch_taken_0x1a2520 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2520u;
        // 0x1a2524: 0xe5240000  swc1        $f4, 0x0($t1) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2520) {
            ctx->pc = 0x1A2560u;
            goto label_1a2560;
        }
    }
    ctx->pc = 0x1A2528u;
    // 0x1a2528: 0x8a4821  addu        $t1, $a0, $t2
    ctx->pc = 0x1a2528u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x1a252c: 0x85080  sll         $t2, $t0, 2
    ctx->pc = 0x1a252cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1a2530: 0x12a6021  addu        $t4, $t1, $t2
    ctx->pc = 0x1a2530u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x1a2534: 0x1aa5021  addu        $t2, $t5, $t2
    ctx->pc = 0x1a2534u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 10)));
label_1a2538:
    // 0x1a2538: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1a2538u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1a253c: 0xc5420000  lwc1        $f2, 0x0($t2)
    ctx->pc = 0x1a253cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a2540: 0x29090003  slti        $t1, $t0, 0x3
    ctx->pc = 0x1a2540u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a2544: 0xc5810000  lwc1        $f1, 0x0($t4)
    ctx->pc = 0x1a2544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a2548: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x1a2548u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x1a254c: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x1a254cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x1a2550: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1a2550u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1a2554: 0xe5810000  swc1        $f1, 0x0($t4)
    ctx->pc = 0x1a2554u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
    // 0x1a2558: 0x1520fff7  bnez        $t1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1A2558u;
    {
        const bool branch_taken_0x1a2558 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A255Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2558u;
        // 0x1a255c: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2558) {
            ctx->pc = 0x1A2538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a2538;
        }
    }
    ctx->pc = 0x1A2560u;
label_1a2560:
    // 0x1a2560: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1a2560u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1a2564: 0x29690003  slti        $t1, $t3, 0x3
    ctx->pc = 0x1a2564u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a2568: 0x1520ffe3  bnez        $t1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1A2568u;
    {
        const bool branch_taken_0x1a2568 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A256Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2568u;
        // 0x1a256c: 0x25ef0004  addiu       $t7, $t7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2568) {
            ctx->pc = 0x1A24F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a24f8;
        }
    }
    ctx->pc = 0x1A2570u;
label_1a2570:
    // 0x1a2570: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a2570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a2574: 0x28690003  slti        $t1, $v1, 0x3
    ctx->pc = 0x1a2574u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a2578: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1a2578u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1a257c: 0x1520ffaa  bnez        $t1, . + 4 + (-0x56 << 2)
    ctx->pc = 0x1A257Cu;
    {
        const bool branch_taken_0x1a257c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A257Cu;
        // 0x1a2580: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a257c) {
            ctx->pc = 0x1A2428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a2428;
        }
    }
    ctx->pc = 0x1A2584u;
    // 0x1a2584: 0x0  nop
    ctx->pc = 0x1a2584u;
    // NOP
label_1a2588:
    // 0x1a2588: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A258Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2588u;
        // 0x1a258c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2590u;
}
