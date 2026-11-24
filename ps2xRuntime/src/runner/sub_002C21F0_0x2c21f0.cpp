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

// Function: sub_002C21F0
// Address: 0x2c21f0 - 0x2c2694
void sub_002C21F0_0x2c21f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C21F0_0x2c21f0");
#endif

    switch (ctx->pc) {
        case 0x2c2660u: goto label_2c2660;
        default: break;
    }

    ctx->pc = 0x2c21f0u;

    // 0x2c21f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c21f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c21f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c21f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c21f8: 0x90c20002  lbu         $v0, 0x2($a2)
    ctx->pc = 0x2c21f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2c21fc: 0x90c90001  lbu         $t1, 0x1($a2)
    ctx->pc = 0x2c21fcu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2c2200: 0x84c70004  lh          $a3, 0x4($a2)
    ctx->pc = 0x2c2200u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2c2204: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2c2204u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2c2208: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x2c2208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c220c: 0x8463003e  lh          $v1, 0x3E($v1)
    ctx->pc = 0x2c220cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 62)));
    // 0x2c2210: 0x31220080  andi        $v0, $t1, 0x80
    ctx->pc = 0x2c2210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)128);
    // 0x2c2214: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C2214u;
    {
        const bool branch_taken_0x2c2214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2214u;
        // 0x2c2218: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2214) {
            ctx->pc = 0x2C2230u;
            goto label_2c2230;
        }
    }
    ctx->pc = 0x2C221Cu;
    // 0x2c221c: 0x7143c  dsll32      $v0, $a3, 16
    ctx->pc = 0x2c221cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2c2220: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c2220u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c2224: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2c2224u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2c2228: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c2228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c222c: 0x8447003e  lh          $a3, 0x3E($v0)
    ctx->pc = 0x2c222cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 62)));
label_2c2230:
    // 0x2c2230: 0x3122007f  andi        $v0, $t1, 0x7F
    ctx->pc = 0x2c2230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)127);
    // 0x2c2234: 0x24090012  addiu       $t1, $zero, 0x12
    ctx->pc = 0x2c2234u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2c2238: 0x104900ed  beq         $v0, $t1, . + 4 + (0xED << 2)
    ctx->pc = 0x2C2238u;
    {
        const bool branch_taken_0x2c2238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        if (branch_taken_0x2c2238) {
            ctx->pc = 0x2C25F0u;
            goto label_2c25f0;
        }
    }
    ctx->pc = 0x2C2240u;
    // 0x2c2240: 0x24090011  addiu       $t1, $zero, 0x11
    ctx->pc = 0x2c2240u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2c2244: 0x104900da  beq         $v0, $t1, . + 4 + (0xDA << 2)
    ctx->pc = 0x2C2244u;
    {
        const bool branch_taken_0x2c2244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        if (branch_taken_0x2c2244) {
            ctx->pc = 0x2C25B0u;
            goto label_2c25b0;
        }
    }
    ctx->pc = 0x2C224Cu;
    // 0x2c224c: 0x2409000f  addiu       $t1, $zero, 0xF
    ctx->pc = 0x2c224cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c2250: 0x104900cd  beq         $v0, $t1, . + 4 + (0xCD << 2)
    ctx->pc = 0x2C2250u;
    {
        const bool branch_taken_0x2c2250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        if (branch_taken_0x2c2250) {
            ctx->pc = 0x2C2588u;
            goto label_2c2588;
        }
    }
    ctx->pc = 0x2C2258u;
    // 0x2c2258: 0x2409000e  addiu       $t1, $zero, 0xE
    ctx->pc = 0x2c2258u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2c225c: 0x104900c0  beq         $v0, $t1, . + 4 + (0xC0 << 2)
    ctx->pc = 0x2C225Cu;
    {
        const bool branch_taken_0x2c225c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        if (branch_taken_0x2c225c) {
            ctx->pc = 0x2C2560u;
            goto label_2c2560;
        }
    }
    ctx->pc = 0x2C2264u;
    // 0x2c2264: 0x2409000d  addiu       $t1, $zero, 0xD
    ctx->pc = 0x2c2264u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2c2268: 0x104900b5  beq         $v0, $t1, . + 4 + (0xB5 << 2)
    ctx->pc = 0x2C2268u;
    {
        const bool branch_taken_0x2c2268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        if (branch_taken_0x2c2268) {
            ctx->pc = 0x2C2540u;
            goto label_2c2540;
        }
    }
    ctx->pc = 0x2C2270u;
    // 0x2c2270: 0x2409000c  addiu       $t1, $zero, 0xC
    ctx->pc = 0x2c2270u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2c2274: 0x104900ac  beq         $v0, $t1, . + 4 + (0xAC << 2)
    ctx->pc = 0x2C2274u;
    {
        const bool branch_taken_0x2c2274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        if (branch_taken_0x2c2274) {
            ctx->pc = 0x2C2528u;
            goto label_2c2528;
        }
    }
    ctx->pc = 0x2C227Cu;
    // 0x2c227c: 0x2409000b  addiu       $t1, $zero, 0xB
    ctx->pc = 0x2c227cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2c2280: 0x104900a3  beq         $v0, $t1, . + 4 + (0xA3 << 2)
    ctx->pc = 0x2C2280u;
    {
        const bool branch_taken_0x2c2280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        if (branch_taken_0x2c2280) {
            ctx->pc = 0x2C2510u;
            goto label_2c2510;
        }
    }
    ctx->pc = 0x2C2288u;
    // 0x2c2288: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x2c2288u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2c228c: 0x1049009a  beq         $v0, $t1, . + 4 + (0x9A << 2)
    ctx->pc = 0x2C228Cu;
    {
        const bool branch_taken_0x2c228c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        if (branch_taken_0x2c228c) {
            ctx->pc = 0x2C24F8u;
            goto label_2c24f8;
        }
    }
    ctx->pc = 0x2C2294u;
    // 0x2c2294: 0x24090009  addiu       $t1, $zero, 0x9
    ctx->pc = 0x2c2294u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2c2298: 0x10490091  beq         $v0, $t1, . + 4 + (0x91 << 2)
    ctx->pc = 0x2C2298u;
    {
        const bool branch_taken_0x2c2298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        if (branch_taken_0x2c2298) {
            ctx->pc = 0x2C24E0u;
            goto label_2c24e0;
        }
    }
    ctx->pc = 0x2C22A0u;
    // 0x2c22a0: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x2c22a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c22a4: 0x10490088  beq         $v0, $t1, . + 4 + (0x88 << 2)
    ctx->pc = 0x2C22A4u;
    {
        const bool branch_taken_0x2c22a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        if (branch_taken_0x2c22a4) {
            ctx->pc = 0x2C24C8u;
            goto label_2c24c8;
        }
    }
    ctx->pc = 0x2C22ACu;
    // 0x2c22ac: 0x24090007  addiu       $t1, $zero, 0x7
    ctx->pc = 0x2c22acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2c22b0: 0x1049007f  beq         $v0, $t1, . + 4 + (0x7F << 2)
    ctx->pc = 0x2C22B0u;
    {
        const bool branch_taken_0x2c22b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        if (branch_taken_0x2c22b0) {
            ctx->pc = 0x2C24B0u;
            goto label_2c24b0;
        }
    }
    ctx->pc = 0x2C22B8u;
    // 0x2c22b8: 0x24090006  addiu       $t1, $zero, 0x6
    ctx->pc = 0x2c22b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c22bc: 0x10490076  beq         $v0, $t1, . + 4 + (0x76 << 2)
    ctx->pc = 0x2C22BCu;
    {
        const bool branch_taken_0x2c22bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        if (branch_taken_0x2c22bc) {
            ctx->pc = 0x2C2498u;
            goto label_2c2498;
        }
    }
    ctx->pc = 0x2C22C4u;
    // 0x2c22c4: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x2c22c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c22c8: 0x10490069  beq         $v0, $t1, . + 4 + (0x69 << 2)
    ctx->pc = 0x2C22C8u;
    {
        const bool branch_taken_0x2c22c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        if (branch_taken_0x2c22c8) {
            ctx->pc = 0x2C2470u;
            goto label_2c2470;
        }
    }
    ctx->pc = 0x2C22D0u;
    // 0x2c22d0: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x2c22d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c22d4: 0x1049005c  beq         $v0, $t1, . + 4 + (0x5C << 2)
    ctx->pc = 0x2C22D4u;
    {
        const bool branch_taken_0x2c22d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        if (branch_taken_0x2c22d4) {
            ctx->pc = 0x2C2448u;
            goto label_2c2448;
        }
    }
    ctx->pc = 0x2C22DCu;
    // 0x2c22dc: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x2c22dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c22e0: 0x10490053  beq         $v0, $t1, . + 4 + (0x53 << 2)
    ctx->pc = 0x2C22E0u;
    {
        const bool branch_taken_0x2c22e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        if (branch_taken_0x2c22e0) {
            ctx->pc = 0x2C2430u;
            goto label_2c2430;
        }
    }
    ctx->pc = 0x2C22E8u;
    // 0x2c22e8: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x2c22e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c22ec: 0x1049004a  beq         $v0, $t1, . + 4 + (0x4A << 2)
    ctx->pc = 0x2C22ECu;
    {
        const bool branch_taken_0x2c22ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        if (branch_taken_0x2c22ec) {
            ctx->pc = 0x2C2418u;
            goto label_2c2418;
        }
    }
    ctx->pc = 0x2C22F4u;
    // 0x2c22f4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2c22f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c22f8: 0x10490041  beq         $v0, $t1, . + 4 + (0x41 << 2)
    ctx->pc = 0x2C22F8u;
    {
        const bool branch_taken_0x2c22f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        if (branch_taken_0x2c22f8) {
            ctx->pc = 0x2C2400u;
            goto label_2c2400;
        }
    }
    ctx->pc = 0x2C2300u;
    // 0x2c2300: 0x2409002d  addiu       $t1, $zero, 0x2D
    ctx->pc = 0x2c2300u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2c2304: 0x10490036  beq         $v0, $t1, . + 4 + (0x36 << 2)
    ctx->pc = 0x2C2304u;
    {
        const bool branch_taken_0x2c2304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        if (branch_taken_0x2c2304) {
            ctx->pc = 0x2C23E0u;
            goto label_2c23e0;
        }
    }
    ctx->pc = 0x2C230Cu;
    // 0x2c230c: 0x2409002c  addiu       $t1, $zero, 0x2C
    ctx->pc = 0x2c230cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x2c2310: 0x1049002d  beq         $v0, $t1, . + 4 + (0x2D << 2)
    ctx->pc = 0x2C2310u;
    {
        const bool branch_taken_0x2c2310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        if (branch_taken_0x2c2310) {
            ctx->pc = 0x2C23C8u;
            goto label_2c23c8;
        }
    }
    ctx->pc = 0x2C2318u;
    // 0x2c2318: 0x2409002b  addiu       $t1, $zero, 0x2B
    ctx->pc = 0x2c2318u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x2c231c: 0x10490022  beq         $v0, $t1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2C231Cu;
    {
        const bool branch_taken_0x2c231c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        if (branch_taken_0x2c231c) {
            ctx->pc = 0x2C23A8u;
            goto label_2c23a8;
        }
    }
    ctx->pc = 0x2C2324u;
    // 0x2c2324: 0x2409002a  addiu       $t1, $zero, 0x2A
    ctx->pc = 0x2c2324u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x2c2328: 0x10490019  beq         $v0, $t1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2C2328u;
    {
        const bool branch_taken_0x2c2328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        if (branch_taken_0x2c2328) {
            ctx->pc = 0x2C2390u;
            goto label_2c2390;
        }
    }
    ctx->pc = 0x2C2330u;
    // 0x2c2330: 0x24090029  addiu       $t1, $zero, 0x29
    ctx->pc = 0x2c2330u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x2c2334: 0x1049000e  beq         $v0, $t1, . + 4 + (0xE << 2)
    ctx->pc = 0x2C2334u;
    {
        const bool branch_taken_0x2c2334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        if (branch_taken_0x2c2334) {
            ctx->pc = 0x2C2370u;
            goto label_2c2370;
        }
    }
    ctx->pc = 0x2C233Cu;
    // 0x2c233c: 0x24090028  addiu       $t1, $zero, 0x28
    ctx->pc = 0x2c233cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2c2340: 0x10490003  beq         $v0, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C2340u;
    {
        const bool branch_taken_0x2c2340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        if (branch_taken_0x2c2340) {
            ctx->pc = 0x2C2350u;
            goto label_2c2350;
        }
    }
    ctx->pc = 0x2C2348u;
    // 0x2c2348: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x2C2348u;
    {
        const bool branch_taken_0x2c2348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2348) {
            ctx->pc = 0x2C2608u;
            goto label_2c2608;
        }
    }
    ctx->pc = 0x2C2350u;
label_2c2350:
    // 0x2c2350: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2c2350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2c2354: 0x7143c  dsll32      $v0, $a3, 16
    ctx->pc = 0x2c2354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2c2358: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c2358u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c235c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c235cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c2360: 0x624026  xor         $t0, $v1, $v0
    ctx->pc = 0x2c2360u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x2c2364: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x2C2364u;
    {
        const bool branch_taken_0x2c2364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2364u;
        // 0x2c2368: 0x2d080001  sltiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2364) {
            ctx->pc = 0x2C2608u;
            goto label_2c2608;
        }
    }
    ctx->pc = 0x2C236Cu;
    // 0x2c236c: 0x0  nop
    ctx->pc = 0x2c236cu;
    // NOP
label_2c2370:
    // 0x2c2370: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2c2370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2c2374: 0x7143c  dsll32      $v0, $a3, 16
    ctx->pc = 0x2c2374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2c2378: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c2378u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c237c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c237cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c2380: 0x624026  xor         $t0, $v1, $v0
    ctx->pc = 0x2c2380u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x2c2384: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x2C2384u;
    {
        const bool branch_taken_0x2c2384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2384u;
        // 0x2c2388: 0x8402b  sltu        $t0, $zero, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2384) {
            ctx->pc = 0x2C2608u;
            goto label_2c2608;
        }
    }
    ctx->pc = 0x2C238Cu;
    // 0x2c238c: 0x0  nop
    ctx->pc = 0x2c238cu;
    // NOP
label_2c2390:
    // 0x2c2390: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2c2390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2c2394: 0x7143c  dsll32      $v0, $a3, 16
    ctx->pc = 0x2c2394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2c2398: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c2398u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c239c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c239cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c23a0: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x2C23A0u;
    {
        const bool branch_taken_0x2c23a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C23A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C23A0u;
        // 0x2c23a4: 0x62402a  slt         $t0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c23a0) {
            ctx->pc = 0x2C2608u;
            goto label_2c2608;
        }
    }
    ctx->pc = 0x2C23A8u;
label_2c23a8:
    // 0x2c23a8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2c23a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2c23ac: 0x7143c  dsll32      $v0, $a3, 16
    ctx->pc = 0x2c23acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2c23b0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c23b0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c23b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c23b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c23b8: 0x43402a  slt         $t0, $v0, $v1
    ctx->pc = 0x2c23b8u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c23bc: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x2C23BCu;
    {
        const bool branch_taken_0x2c23bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C23C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C23BCu;
        // 0x2c23c0: 0x39080001  xori        $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c23bc) {
            ctx->pc = 0x2C2608u;
            goto label_2c2608;
        }
    }
    ctx->pc = 0x2C23C4u;
    // 0x2c23c4: 0x0  nop
    ctx->pc = 0x2c23c4u;
    // NOP
label_2c23c8:
    // 0x2c23c8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2c23c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2c23cc: 0x7143c  dsll32      $v0, $a3, 16
    ctx->pc = 0x2c23ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2c23d0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c23d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c23d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c23d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c23d8: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x2C23D8u;
    {
        const bool branch_taken_0x2c23d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C23DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C23D8u;
        // 0x2c23dc: 0x43402a  slt         $t0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c23d8) {
            ctx->pc = 0x2C2608u;
            goto label_2c2608;
        }
    }
    ctx->pc = 0x2C23E0u;
label_2c23e0:
    // 0x2c23e0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2c23e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2c23e4: 0x7143c  dsll32      $v0, $a3, 16
    ctx->pc = 0x2c23e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2c23e8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c23e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c23ec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c23ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c23f0: 0x62402a  slt         $t0, $v1, $v0
    ctx->pc = 0x2c23f0u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c23f4: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x2C23F4u;
    {
        const bool branch_taken_0x2c23f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C23F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C23F4u;
        // 0x2c23f8: 0x39080001  xori        $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c23f4) {
            ctx->pc = 0x2C2608u;
            goto label_2c2608;
        }
    }
    ctx->pc = 0x2C23FCu;
    // 0x2c23fc: 0x0  nop
    ctx->pc = 0x2c23fcu;
    // NOP
label_2c2400:
    // 0x2c2400: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2c2400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2c2404: 0x7143c  dsll32      $v0, $a3, 16
    ctx->pc = 0x2c2404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2c2408: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c2408u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c240c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c240cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c2410: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x2C2410u;
    {
        const bool branch_taken_0x2c2410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2410u;
        // 0x2c2414: 0x624021  addu        $t0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2410) {
            ctx->pc = 0x2C2608u;
            goto label_2c2608;
        }
    }
    ctx->pc = 0x2C2418u;
label_2c2418:
    // 0x2c2418: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2c2418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2c241c: 0x7143c  dsll32      $v0, $a3, 16
    ctx->pc = 0x2c241cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2c2420: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c2420u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c2424: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c2424u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c2428: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x2C2428u;
    {
        const bool branch_taken_0x2c2428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C242Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2428u;
        // 0x2c242c: 0x624023  subu        $t0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2428) {
            ctx->pc = 0x2C2608u;
            goto label_2c2608;
        }
    }
    ctx->pc = 0x2C2430u;
label_2c2430:
    // 0x2c2430: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2c2430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2c2434: 0x7143c  dsll32      $v0, $a3, 16
    ctx->pc = 0x2c2434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2c2438: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c2438u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c243c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c243cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c2440: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x2C2440u;
    {
        const bool branch_taken_0x2c2440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2440u;
        // 0x2c2444: 0x624018  mult        $t0, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2440) {
            ctx->pc = 0x2C2608u;
            goto label_2c2608;
        }
    }
    ctx->pc = 0x2C2448u;
label_2c2448:
    // 0x2c2448: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2c2448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2c244c: 0x7143c  dsll32      $v0, $a3, 16
    ctx->pc = 0x2c244cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2c2450: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c2450u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c2454: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c2454u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c2458: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x2c2458u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2c245c: 0x0  nop
    ctx->pc = 0x2c245cu;
    // NOP
    // 0x2c2460: 0x0  nop
    ctx->pc = 0x2c2460u;
    // NOP
    // 0x2c2464: 0x4012  mflo        $t0
    ctx->pc = 0x2c2464u;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x2c2468: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x2C2468u;
    {
        const bool branch_taken_0x2c2468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2468) {
            ctx->pc = 0x2C2608u;
            goto label_2c2608;
        }
    }
    ctx->pc = 0x2C2470u;
label_2c2470:
    // 0x2c2470: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2c2470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2c2474: 0x7143c  dsll32      $v0, $a3, 16
    ctx->pc = 0x2c2474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2c2478: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c2478u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c247c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c247cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c2480: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x2c2480u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2c2484: 0x0  nop
    ctx->pc = 0x2c2484u;
    // NOP
    // 0x2c2488: 0x0  nop
    ctx->pc = 0x2c2488u;
    // NOP
    // 0x2c248c: 0x4010  mfhi        $t0
    ctx->pc = 0x2c248cu;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x2c2490: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x2C2490u;
    {
        const bool branch_taken_0x2c2490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2490) {
            ctx->pc = 0x2C2608u;
            goto label_2c2608;
        }
    }
    ctx->pc = 0x2C2498u;
label_2c2498:
    // 0x2c2498: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2c2498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2c249c: 0x7143c  dsll32      $v0, $a3, 16
    ctx->pc = 0x2c249cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2c24a0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c24a0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c24a4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c24a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c24a8: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x2C24A8u;
    {
        const bool branch_taken_0x2c24a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C24ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C24A8u;
        // 0x2c24ac: 0x624024  and         $t0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c24a8) {
            ctx->pc = 0x2C2608u;
            goto label_2c2608;
        }
    }
    ctx->pc = 0x2C24B0u;
label_2c24b0:
    // 0x2c24b0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2c24b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2c24b4: 0x7143c  dsll32      $v0, $a3, 16
    ctx->pc = 0x2c24b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2c24b8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c24b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c24bc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c24bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c24c0: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x2C24C0u;
    {
        const bool branch_taken_0x2c24c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C24C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C24C0u;
        // 0x2c24c4: 0x624025  or          $t0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c24c0) {
            ctx->pc = 0x2C2608u;
            goto label_2c2608;
        }
    }
    ctx->pc = 0x2C24C8u;
label_2c24c8:
    // 0x2c24c8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2c24c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2c24cc: 0x7143c  dsll32      $v0, $a3, 16
    ctx->pc = 0x2c24ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2c24d0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c24d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c24d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c24d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c24d8: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x2C24D8u;
    {
        const bool branch_taken_0x2c24d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C24DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C24D8u;
        // 0x2c24dc: 0x624026  xor         $t0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c24d8) {
            ctx->pc = 0x2C2608u;
            goto label_2c2608;
        }
    }
    ctx->pc = 0x2C24E0u;
label_2c24e0:
    // 0x2c24e0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2c24e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2c24e4: 0x7143c  dsll32      $v0, $a3, 16
    ctx->pc = 0x2c24e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2c24e8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c24e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c24ec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c24ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c24f0: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x2C24F0u;
    {
        const bool branch_taken_0x2c24f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C24F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C24F0u;
        // 0x2c24f4: 0x434004  sllv        $t0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c24f0) {
            ctx->pc = 0x2C2608u;
            goto label_2c2608;
        }
    }
    ctx->pc = 0x2C24F8u;
label_2c24f8:
    // 0x2c24f8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2c24f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2c24fc: 0x7143c  dsll32      $v0, $a3, 16
    ctx->pc = 0x2c24fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2c2500: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c2500u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c2504: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c2504u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c2508: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x2C2508u;
    {
        const bool branch_taken_0x2c2508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C250Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2508u;
        // 0x2c250c: 0x434007  srav        $t0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2508) {
            ctx->pc = 0x2C2608u;
            goto label_2c2608;
        }
    }
    ctx->pc = 0x2C2510u;
label_2c2510:
    // 0x2c2510: 0x7143c  dsll32      $v0, $a3, 16
    ctx->pc = 0x2c2510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2c2514: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2c2514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2c2518: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c2518u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c251c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2C251Cu;
    {
        const bool branch_taken_0x2c251c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C251Cu;
        // 0x2c2520: 0x434004  sllv        $t0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c251c) {
            ctx->pc = 0x2C2608u;
            goto label_2c2608;
        }
    }
    ctx->pc = 0x2C2524u;
    // 0x2c2524: 0x0  nop
    ctx->pc = 0x2c2524u;
    // NOP
label_2c2528:
    // 0x2c2528: 0x7143c  dsll32      $v0, $a3, 16
    ctx->pc = 0x2c2528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2c252c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2c252cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2c2530: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c2530u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c2534: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2C2534u;
    {
        const bool branch_taken_0x2c2534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2534u;
        // 0x2c2538: 0x434007  srav        $t0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2534) {
            ctx->pc = 0x2C2608u;
            goto label_2c2608;
        }
    }
    ctx->pc = 0x2C253Cu;
    // 0x2c253c: 0x0  nop
    ctx->pc = 0x2c253cu;
    // NOP
label_2c2540:
    // 0x2c2540: 0x3443c  dsll32      $t0, $v1, 16
    ctx->pc = 0x2c2540u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2c2544: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x2c2544u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x2c2548: 0x5010002  bgez        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C2548u;
    {
        const bool branch_taken_0x2c2548 = (GPR_S64(ctx, 8) >= 0);
        if (branch_taken_0x2c2548) {
            ctx->pc = 0x2C2554u;
            goto label_2c2554;
        }
    }
    ctx->pc = 0x2C2550u;
    // 0x2c2550: 0x84023  negu        $t0, $t0
    ctx->pc = 0x2c2550u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 8)));
label_2c2554:
    // 0x2c2554: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2C2554u;
    {
        const bool branch_taken_0x2c2554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2554) {
            ctx->pc = 0x2C2608u;
            goto label_2c2608;
        }
    }
    ctx->pc = 0x2C255Cu;
    // 0x2c255c: 0x0  nop
    ctx->pc = 0x2c255cu;
    // NOP
label_2c2560:
    // 0x2c2560: 0x3443c  dsll32      $t0, $v1, 16
    ctx->pc = 0x2c2560u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2c2564: 0x7143c  dsll32      $v0, $a3, 16
    ctx->pc = 0x2c2564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2c2568: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x2c2568u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x2c256c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c256cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c2570: 0x102082a  slt         $at, $t0, $v0
    ctx->pc = 0x2c2570u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c2574: 0xe1180a  movz        $v1, $a3, $at
    ctx->pc = 0x2c2574u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x2c2578: 0x3443c  dsll32      $t0, $v1, 16
    ctx->pc = 0x2c2578u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2c257c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2C257Cu;
    {
        const bool branch_taken_0x2c257c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C257Cu;
        // 0x2c2580: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c257c) {
            ctx->pc = 0x2C2608u;
            goto label_2c2608;
        }
    }
    ctx->pc = 0x2C2584u;
    // 0x2c2584: 0x0  nop
    ctx->pc = 0x2c2584u;
    // NOP
label_2c2588:
    // 0x2c2588: 0x3443c  dsll32      $t0, $v1, 16
    ctx->pc = 0x2c2588u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2c258c: 0x7143c  dsll32      $v0, $a3, 16
    ctx->pc = 0x2c258cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2c2590: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x2c2590u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x2c2594: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c2594u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c2598: 0x48082a  slt         $at, $v0, $t0
    ctx->pc = 0x2c2598u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2c259c: 0xe1180a  movz        $v1, $a3, $at
    ctx->pc = 0x2c259cu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x2c25a0: 0x3443c  dsll32      $t0, $v1, 16
    ctx->pc = 0x2c25a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2c25a4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2C25A4u;
    {
        const bool branch_taken_0x2c25a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C25A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C25A4u;
        // 0x2c25a8: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c25a4) {
            ctx->pc = 0x2C2608u;
            goto label_2c2608;
        }
    }
    ctx->pc = 0x2C25ACu;
    // 0x2c25ac: 0x0  nop
    ctx->pc = 0x2c25acu;
    // NOP
label_2c25b0:
    // 0x2c25b0: 0x4b04043c  vrnext.x    $vf4, $R
    ctx->pc = 0x2c25b0u;
    {
    uint32_t r_vals[4];
    _mm_storeu_si128((__m128i*)r_vals, _mm_castps_si128(ctx->vu0_r));

    // Simple LFSR-based random number generation (PS2-like behavior)
    uint32_t feedback = r_vals[0] ^ (r_vals[0] << 13) ^ (r_vals[1] >> 19) ^ (r_vals[2] << 7);
    r_vals[0] = r_vals[1];
    r_vals[1] = r_vals[2];
    r_vals[2] = r_vals[3];
    r_vals[3] = feedback;

    ctx->vu0_r = _mm_castsi128_ps(_mm_loadu_si128((__m128i*)r_vals));
}
    // 0x2c25b4: 0x48292001  qmfc2.i     $t1, $vf4
    ctx->pc = 0x2c25b4u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2c25b8: 0x7143c  dsll32      $v0, $a3, 16
    ctx->pc = 0x2c25b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 16));
    // 0x2c25bc: 0x3443c  dsll32      $t0, $v1, 16
    ctx->pc = 0x2c25bcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2c25c0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c25c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c25c4: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x2c25c4u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x2c25c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c25c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c25cc: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x2c25ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2c25d0: 0x3123ffff  andi        $v1, $t1, 0xFFFF
    ctx->pc = 0x2c25d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x2c25d4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x2c25d4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2c25d8: 0x0  nop
    ctx->pc = 0x2c25d8u;
    // NOP
    // 0x2c25dc: 0x0  nop
    ctx->pc = 0x2c25dcu;
    // NOP
    // 0x2c25e0: 0x1010  mfhi        $v0
    ctx->pc = 0x2c25e0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2c25e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C25E4u;
    {
        const bool branch_taken_0x2c25e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C25E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C25E4u;
        // 0x2c25e8: 0x1024021  addu        $t0, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c25e4) {
            ctx->pc = 0x2C2608u;
            goto label_2c2608;
        }
    }
    ctx->pc = 0x2C25ECu;
    // 0x2c25ec: 0x0  nop
    ctx->pc = 0x2c25ecu;
    // NOP
label_2c25f0:
    // 0x2c25f0: 0x4b04043c  vrnext.x    $vf4, $R
    ctx->pc = 0x2c25f0u;
    {
    uint32_t r_vals[4];
    _mm_storeu_si128((__m128i*)r_vals, _mm_castps_si128(ctx->vu0_r));

    // Simple LFSR-based random number generation (PS2-like behavior)
    uint32_t feedback = r_vals[0] ^ (r_vals[0] << 13) ^ (r_vals[1] >> 19) ^ (r_vals[2] << 7);
    r_vals[0] = r_vals[1];
    r_vals[1] = r_vals[2];
    r_vals[2] = r_vals[3];
    r_vals[3] = feedback;

    ctx->vu0_r = _mm_castsi128_ps(_mm_loadu_si128((__m128i*)r_vals));
}
    // 0x2c25f4: 0x48272001  qmfc2.i     $a3, $vf4
    ctx->pc = 0x2c25f4u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2c25f8: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x2c25f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2c25fc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c25fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c2600: 0x30e30fff  andi        $v1, $a3, 0xFFF
    ctx->pc = 0x2c2600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4095);
    // 0x2c2604: 0x62402b  sltu        $t0, $v1, $v0
    ctx->pc = 0x2c2604u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2c2608:
    // 0x2c2608: 0x1100001d  beqz        $t0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2C2608u;
    {
        const bool branch_taken_0x2c2608 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2608) {
            ctx->pc = 0x2C2680u;
            goto label_2c2680;
        }
    }
    ctx->pc = 0x2C2610u;
    // 0x2c2610: 0x938289d0  lbu         $v0, -0x7630($gp)
    ctx->pc = 0x2c2610u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2c2614: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C2614u;
    {
        const bool branch_taken_0x2c2614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C2618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2614u;
        // 0x2c2618: 0x90c60003  lbu         $a2, 0x3($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2614) {
            ctx->pc = 0x2C2668u;
            goto label_2c2668;
        }
    }
    ctx->pc = 0x2C261Cu;
    // 0x2c261c: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x2C261Cu;
    {
        const bool branch_taken_0x2c261c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C261Cu;
        // 0x2c2620: 0xa080004f  sb          $zero, 0x4F($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c261c) {
            ctx->pc = 0x2C2658u;
            goto label_2c2658;
        }
    }
    ctx->pc = 0x2C2624u;
    // 0x2c2624: 0x90850037  lbu         $a1, 0x37($a0)
    ctx->pc = 0x2c2624u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 55)));
    // 0x2c2628: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x2c2628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x2c262c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c262cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c2630: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c2630u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c2634: 0xa085004e  sb          $a1, 0x4E($a0)
    ctx->pc = 0x2c2634u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 5));
    // 0x2c2638: 0xa0860037  sb          $a2, 0x37($a0)
    ctx->pc = 0x2c2638u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 55), (uint8_t)GPR_U32(ctx, 6));
    // 0x2c263c: 0xa0800032  sb          $zero, 0x32($a0)
    ctx->pc = 0x2c263cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 50), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c2640: 0xa083005f  sb          $v1, 0x5F($a0)
    ctx->pc = 0x2c2640u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 95), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c2644: 0xa4800080  sh          $zero, 0x80($a0)
    ctx->pc = 0x2c2644u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c2648: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2c2648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c264c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c264cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c2650: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C2650u;
    {
        const bool branch_taken_0x2c2650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2650u;
        // 0x2c2654: 0x8c420018  lw          $v0, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2650) {
            ctx->pc = 0x2C2678u;
            goto label_2c2678;
        }
    }
    ctx->pc = 0x2C2658u;
label_2c2658:
    // 0x2c2658: 0xc0b20e4  jal         func_2C8390
    ctx->pc = 0x2C2658u;
    SET_GPR_U32(ctx, 31, 0x2C2660u);
    ctx->pc = 0x2C8390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8390u, 0x2C2658u, 0x2C2660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2660u;
label_2c2660:
    // 0x2c2660: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C2660u;
    {
        const bool branch_taken_0x2c2660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2660) {
            ctx->pc = 0x2C2670u;
            goto label_2c2670;
        }
    }
    ctx->pc = 0x2C2668u;
label_2c2668:
    // 0x2c2668: 0xa38689d8  sb          $a2, -0x7628($gp)
    ctx->pc = 0x2c2668u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937048), (uint8_t)GPR_U32(ctx, 6));
    // 0x2c266c: 0x0  nop
    ctx->pc = 0x2c266cu;
    // NOP
label_2c2670:
    // 0x2c2670: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c2670u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2674: 0x0  nop
    ctx->pc = 0x2c2674u;
    // NOP
label_2c2678:
    // 0x2c2678: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C2678u;
    {
        const bool branch_taken_0x2c2678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2678) {
            ctx->pc = 0x2C2688u;
            goto label_2c2688;
        }
    }
    ctx->pc = 0x2C2680u;
label_2c2680:
    // 0x2c2680: 0x24c20006  addiu       $v0, $a2, 0x6
    ctx->pc = 0x2c2680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
    // 0x2c2684: 0x0  nop
    ctx->pc = 0x2c2684u;
    // NOP
label_2c2688:
    // 0x2c2688: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c2688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c268c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C268Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C268Cu;
        // 0x2c2690: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C268Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2694u;
}
