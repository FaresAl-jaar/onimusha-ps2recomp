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

// Function: sub_0015B440
// Address: 0x15b440 - 0x15b6d4
void sub_0015B440_0x15b440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015B440_0x15b440");
#endif

    switch (ctx->pc) {
        case 0x15b610u: goto label_15b610;
        case 0x15b664u: goto label_15b664;
        case 0x15b674u: goto label_15b674;
        case 0x15b6c0u: goto label_15b6c0;
        default: break;
    }

    ctx->pc = 0x15b440u;

    // 0x15b440: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15b440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15b444: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x15b444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x15b448: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15b448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15b44c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15b44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15b450: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15b450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15b454: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x15b454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15b458: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x15b458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x15b45c: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x15B45Cu;
    {
        const bool branch_taken_0x15b45c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b45c) {
            ctx->pc = 0x15B4C0u;
            goto label_15b4c0;
        }
    }
    ctx->pc = 0x15B464u;
    // 0x15b464: 0x94831a0e  lhu         $v1, 0x1A0E($a0)
    ctx->pc = 0x15b464u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6670)));
    // 0x15b468: 0x18600013  blez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x15B468u;
    {
        const bool branch_taken_0x15b468 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x15b468) {
            ctx->pc = 0x15B4B8u;
            goto label_15b4b8;
        }
    }
    ctx->pc = 0x15B470u;
    // 0x15b470: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x15b470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x15b474: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x15b474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x15b478: 0xa4831a0e  sh          $v1, 0x1A0E($a0)
    ctx->pc = 0x15b478u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6670), (uint16_t)GPR_U32(ctx, 3));
    // 0x15b47c: 0x94861a0e  lhu         $a2, 0x1A0E($a0)
    ctx->pc = 0x15b47cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6670)));
    // 0x15b480: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x15b480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
    // 0x15b484: 0x34636667  ori         $v1, $v1, 0x6667
    ctx->pc = 0x15b484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
    // 0x15b488: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x15b488u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x15b48c: 0x529c0  sll         $a1, $a1, 7
    ctx->pc = 0x15b48cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x15b490: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x15b490u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x15b494: 0x0  nop
    ctx->pc = 0x15b494u;
    // NOP
    // 0x15b498: 0x0  nop
    ctx->pc = 0x15b498u;
    // NOP
    // 0x15b49c: 0x1810  mfhi        $v1
    ctx->pc = 0x15b49cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x15b4a0: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x15b4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x15b4a4: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x15b4a4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x15b4a8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15b4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x15b4ac: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x15B4ACu;
    {
        const bool branch_taken_0x15b4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B4ACu;
        // 0x15b4b0: 0x3070ffff  andi        $s0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b4ac) {
            ctx->pc = 0x15B510u;
            goto label_15b510;
        }
    }
    ctx->pc = 0x15B4B4u;
    // 0x15b4b4: 0x0  nop
    ctx->pc = 0x15b4b4u;
    // NOP
label_15b4b8:
    // 0x15b4b8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x15B4B8u;
    {
        const bool branch_taken_0x15b4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B4B8u;
        // 0x15b4bc: 0x64100080  daddiu      $s0, $zero, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b4b8) {
            ctx->pc = 0x15B510u;
            goto label_15b510;
        }
    }
    ctx->pc = 0x15B4C0u;
label_15b4c0:
    // 0x15b4c0: 0x94831a0e  lhu         $v1, 0x1A0E($a0)
    ctx->pc = 0x15b4c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6670)));
    // 0x15b4c4: 0x18600010  blez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x15B4C4u;
    {
        const bool branch_taken_0x15b4c4 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x15B4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B4C4u;
        // 0x15b4c8: 0x2465ffff  addiu       $a1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b4c4) {
            ctx->pc = 0x15B508u;
            goto label_15b508;
        }
    }
    ctx->pc = 0x15B4CCu;
    // 0x15b4cc: 0xa4851a0e  sh          $a1, 0x1A0E($a0)
    ctx->pc = 0x15b4ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6670), (uint16_t)GPR_U32(ctx, 5));
    // 0x15b4d0: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x15b4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
    // 0x15b4d4: 0x94851a0e  lhu         $a1, 0x1A0E($a0)
    ctx->pc = 0x15b4d4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6670)));
    // 0x15b4d8: 0x34636667  ori         $v1, $v1, 0x6667
    ctx->pc = 0x15b4d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
    // 0x15b4dc: 0x529c0  sll         $a1, $a1, 7
    ctx->pc = 0x15b4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x15b4e0: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x15b4e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x15b4e4: 0x0  nop
    ctx->pc = 0x15b4e4u;
    // NOP
    // 0x15b4e8: 0x0  nop
    ctx->pc = 0x15b4e8u;
    // NOP
    // 0x15b4ec: 0x1810  mfhi        $v1
    ctx->pc = 0x15b4ecu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x15b4f0: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x15b4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x15b4f4: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x15b4f4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x15b4f8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15b4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x15b4fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15B4FCu;
    {
        const bool branch_taken_0x15b4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B4FCu;
        // 0x15b500: 0x3070ffff  andi        $s0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b4fc) {
            ctx->pc = 0x15B510u;
            goto label_15b510;
        }
    }
    ctx->pc = 0x15B504u;
    // 0x15b504: 0x0  nop
    ctx->pc = 0x15b504u;
    // NOP
label_15b508:
    // 0x15b508: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15b508u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b50c: 0x0  nop
    ctx->pc = 0x15b50cu;
    // NOP
label_15b510:
    // 0x15b510: 0x1200006b  beqz        $s0, . + 4 + (0x6B << 2)
    ctx->pc = 0x15B510u;
    {
        const bool branch_taken_0x15b510 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b510) {
            ctx->pc = 0x15B6C0u;
            goto label_15b6c0;
        }
    }
    ctx->pc = 0x15B518u;
    // 0x15b518: 0x90821a02  lbu         $v0, 0x1A02($a0)
    ctx->pc = 0x15b518u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6658)));
    // 0x15b51c: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x15B51Cu;
    {
        const bool branch_taken_0x15b51c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B51Cu;
        // 0x15b520: 0x3411fffb  ori         $s1, $zero, 0xFFFB (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65531);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b51c) {
            ctx->pc = 0x15B600u;
            goto label_15b600;
        }
    }
    ctx->pc = 0x15B524u;
    // 0x15b524: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x15b524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x15b528: 0x24020d01  addiu       $v0, $zero, 0xD01
    ctx->pc = 0x15b528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3329));
    // 0x15b52c: 0x94236ac4  lhu         $v1, 0x6AC4($at)
    ctx->pc = 0x15b52cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x15b530: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x15B530u;
    {
        const bool branch_taken_0x15b530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15B534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B530u;
        // 0x15b534: 0x24020910  addiu       $v0, $zero, 0x910 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b530) {
            ctx->pc = 0x15B5D0u;
            goto label_15b5d0;
        }
    }
    ctx->pc = 0x15B538u;
    // 0x15b538: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x15B538u;
    {
        const bool branch_taken_0x15b538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15b538) {
            ctx->pc = 0x15B5B8u;
            goto label_15b5b8;
        }
    }
    ctx->pc = 0x15B540u;
    // 0x15b540: 0x2402071b  addiu       $v0, $zero, 0x71B
    ctx->pc = 0x15b540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1819));
    // 0x15b544: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x15B544u;
    {
        const bool branch_taken_0x15b544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15B548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B544u;
        // 0x15b548: 0x24020713  addiu       $v0, $zero, 0x713 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1811));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b544) {
            ctx->pc = 0x15B5A0u;
            goto label_15b5a0;
        }
    }
    ctx->pc = 0x15B54Cu;
    // 0x15b54c: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x15B54Cu;
    {
        const bool branch_taken_0x15b54c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15b54c) {
            ctx->pc = 0x15B588u;
            goto label_15b588;
        }
    }
    ctx->pc = 0x15B554u;
    // 0x15b554: 0x24020102  addiu       $v0, $zero, 0x102
    ctx->pc = 0x15b554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x15b558: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B558u;
    {
        const bool branch_taken_0x15b558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15b558) {
            ctx->pc = 0x15B568u;
            goto label_15b568;
        }
    }
    ctx->pc = 0x15B560u;
    // 0x15b560: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x15B560u;
    {
        const bool branch_taken_0x15b560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b560) {
            ctx->pc = 0x15B600u;
            goto label_15b600;
        }
    }
    ctx->pc = 0x15B568u;
label_15b568:
    // 0x15b568: 0x90831a03  lbu         $v1, 0x1A03($a0)
    ctx->pc = 0x15b568u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6659)));
    // 0x15b56c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15b56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15b570: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B570u;
    {
        const bool branch_taken_0x15b570 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15B574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B570u;
        // 0x15b574: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b570) {
            ctx->pc = 0x15B580u;
            goto label_15b580;
        }
    }
    ctx->pc = 0x15B578u;
    // 0x15b578: 0x14620021  bne         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x15B578u;
    {
        const bool branch_taken_0x15b578 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15b578) {
            ctx->pc = 0x15B600u;
            goto label_15b600;
        }
    }
    ctx->pc = 0x15B580u;
label_15b580:
    // 0x15b580: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x15B580u;
    {
        const bool branch_taken_0x15b580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B580u;
        // 0x15b584: 0x3411fffe  ori         $s1, $zero, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b580) {
            ctx->pc = 0x15B600u;
            goto label_15b600;
        }
    }
    ctx->pc = 0x15B588u;
label_15b588:
    // 0x15b588: 0x90831a03  lbu         $v1, 0x1A03($a0)
    ctx->pc = 0x15b588u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6659)));
    // 0x15b58c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15b58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15b590: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x15B590u;
    {
        const bool branch_taken_0x15b590 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15b590) {
            ctx->pc = 0x15B600u;
            goto label_15b600;
        }
    }
    ctx->pc = 0x15B598u;
    // 0x15b598: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x15B598u;
    {
        const bool branch_taken_0x15b598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B598u;
        // 0x15b59c: 0x3411fffe  ori         $s1, $zero, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b598) {
            ctx->pc = 0x15B600u;
            goto label_15b600;
        }
    }
    ctx->pc = 0x15B5A0u;
label_15b5a0:
    // 0x15b5a0: 0x90821a03  lbu         $v0, 0x1A03($a0)
    ctx->pc = 0x15b5a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6659)));
    // 0x15b5a4: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x15B5A4u;
    {
        const bool branch_taken_0x15b5a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b5a4) {
            ctx->pc = 0x15B600u;
            goto label_15b600;
        }
    }
    ctx->pc = 0x15B5ACu;
    // 0x15b5ac: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x15B5ACu;
    {
        const bool branch_taken_0x15b5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B5ACu;
        // 0x15b5b0: 0x3411fffe  ori         $s1, $zero, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b5ac) {
            ctx->pc = 0x15B600u;
            goto label_15b600;
        }
    }
    ctx->pc = 0x15B5B4u;
    // 0x15b5b4: 0x0  nop
    ctx->pc = 0x15b5b4u;
    // NOP
label_15b5b8:
    // 0x15b5b8: 0x90821a03  lbu         $v0, 0x1A03($a0)
    ctx->pc = 0x15b5b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6659)));
    // 0x15b5bc: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x15B5BCu;
    {
        const bool branch_taken_0x15b5bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b5bc) {
            ctx->pc = 0x15B600u;
            goto label_15b600;
        }
    }
    ctx->pc = 0x15B5C4u;
    // 0x15b5c4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x15B5C4u;
    {
        const bool branch_taken_0x15b5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B5C4u;
        // 0x15b5c8: 0x3411fffe  ori         $s1, $zero, 0xFFFE (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b5c4) {
            ctx->pc = 0x15B600u;
            goto label_15b600;
        }
    }
    ctx->pc = 0x15B5CCu;
    // 0x15b5cc: 0x0  nop
    ctx->pc = 0x15b5ccu;
    // NOP
label_15b5d0:
    // 0x15b5d0: 0x90831a03  lbu         $v1, 0x1A03($a0)
    ctx->pc = 0x15b5d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6659)));
    // 0x15b5d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15b5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15b5d8: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15B5D8u;
    {
        const bool branch_taken_0x15b5d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15b5d8) {
            ctx->pc = 0x15B600u;
            goto label_15b600;
        }
    }
    ctx->pc = 0x15B5E0u;
    // 0x15b5e0: 0x94831a08  lhu         $v1, 0x1A08($a0)
    ctx->pc = 0x15b5e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6664)));
    // 0x15b5e4: 0x28621388  slti        $v0, $v1, 0x1388
    ctx->pc = 0x15b5e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5000) ? 1 : 0);
    // 0x15b5e8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15B5E8u;
    {
        const bool branch_taken_0x15b5e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B5E8u;
        // 0x15b5ec: 0x286113ed  slti        $at, $v1, 0x13ED (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5101) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b5e8) {
            ctx->pc = 0x15B600u;
            goto label_15b600;
        }
    }
    ctx->pc = 0x15B5F0u;
    // 0x15b5f0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B5F0u;
    {
        const bool branch_taken_0x15b5f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b5f0) {
            ctx->pc = 0x15B600u;
            goto label_15b600;
        }
    }
    ctx->pc = 0x15B5F8u;
    // 0x15b5f8: 0x3411fffe  ori         $s1, $zero, 0xFFFE
    ctx->pc = 0x15b5f8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
    // 0x15b5fc: 0x0  nop
    ctx->pc = 0x15b5fcu;
    // NOP
label_15b600:
    // 0x15b600: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x15b600u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x15b604: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x15b604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x15b608: 0xc05e360  jal         func_178D80
    ctx->pc = 0x15B608u;
    SET_GPR_U32(ctx, 31, 0x15B610u);
    ctx->pc = 0x15B60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B608u;
    // 0x15b60c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x15B608u, 0x15B610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B610u;
label_15b610:
    // 0x15b610: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x15b610u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x15b614: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x15b614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x15b618: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x15b618u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x15b61c: 0x38600  sll         $s0, $v1, 24
    ctx->pc = 0x15b61cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x15b620: 0x3c041418  lui         $a0, 0x1418
    ctx->pc = 0x15b620u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5144 << 16));
    // 0x15b624: 0x3c037900  lui         $v1, 0x7900
    ctx->pc = 0x15b624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30976 << 16));
    // 0x15b628: 0x34850006  ori         $a1, $a0, 0x6
    ctx->pc = 0x15b628u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)6);
    // 0x15b62c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15b62cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b630: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x15b630u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x15b634: 0x34647000  ori         $a0, $v1, 0x7000
    ctx->pc = 0x15b634u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28672);
    // 0x15b638: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x15b638u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x15b63c: 0x3c037a80  lui         $v1, 0x7A80
    ctx->pc = 0x15b63cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31360 << 16));
    // 0x15b640: 0xac440010  sw          $a0, 0x10($v0)
    ctx->pc = 0x15b640u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
    // 0x15b644: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x15b644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x15b648: 0xac510014  sw          $s1, 0x14($v0)
    ctx->pc = 0x15b648u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 17));
    // 0x15b64c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x15b64cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x15b650: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x15b650u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x15b654: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x15b654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x15b658: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15b658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b65c: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x15B65Cu;
    SET_GPR_U32(ctx, 31, 0x15B664u);
    ctx->pc = 0x15B660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B65Cu;
    // 0x15b660: 0xac51001c  sw          $s1, 0x1C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x15B65Cu, 0x15B664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B664u;
label_15b664:
    // 0x15b664: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x15b664u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x15b668: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x15b668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x15b66c: 0xc05e360  jal         func_178D80
    ctx->pc = 0x15B66Cu;
    SET_GPR_U32(ctx, 31, 0x15B674u);
    ctx->pc = 0x15B670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B66Cu;
    // 0x15b670: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178D80u, 0x15B66Cu, 0x15B674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B674u;
label_15b674:
    // 0x15b674: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x15b674u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x15b678: 0x3c031418  lui         $v1, 0x1418
    ctx->pc = 0x15b678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5144 << 16));
    // 0x15b67c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x15b67cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x15b680: 0x34630006  ori         $v1, $v1, 0x6
    ctx->pc = 0x15b680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x15b684: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x15b684u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x15b688: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x15b688u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x15b68c: 0x3c038580  lui         $v1, 0x8580
    ctx->pc = 0x15b68cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34176 << 16));
    // 0x15b690: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x15b690u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x15b694: 0x34637000  ori         $v1, $v1, 0x7000
    ctx->pc = 0x15b694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28672);
    // 0x15b698: 0x2484cc60  addiu       $a0, $a0, -0x33A0
    ctx->pc = 0x15b698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954080));
    // 0x15b69c: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x15b69cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x15b6a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15b6a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b6a4: 0x3c038700  lui         $v1, 0x8700
    ctx->pc = 0x15b6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34560 << 16));
    // 0x15b6a8: 0xac510014  sw          $s1, 0x14($v0)
    ctx->pc = 0x15b6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 17));
    // 0x15b6ac: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x15b6acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x15b6b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15b6b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b6b4: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x15b6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x15b6b8: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x15B6B8u;
    SET_GPR_U32(ctx, 31, 0x15B6C0u);
    ctx->pc = 0x15B6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B6B8u;
    // 0x15b6bc: 0xac51001c  sw          $s1, 0x1C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x15B6B8u, 0x15B6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B6C0u;
label_15b6c0:
    // 0x15b6c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15b6c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15b6c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15b6c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b6c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15b6c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15b6cc: 0x3e00008  jr          $ra
    ctx->pc = 0x15B6CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B6CCu;
        // 0x15b6d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B6CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15B6D4u;
}
