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

// Function: sub_001C8130
// Address: 0x1c8130 - 0x1c82d8
void sub_001C8130_0x1c8130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C8130_0x1c8130");
#endif

    ctx->pc = 0x1c8130u;

    // 0x1c8130: 0x3c01007e  lui         $at, 0x7E
    ctx->pc = 0x1c8130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)126 << 16));
    // 0x1c8134: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1c8134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x1c8138: 0x94266ac4  lhu         $a2, 0x6AC4($at)
    ctx->pc = 0x1c8138u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)FAST_READ16(0x7E6AC4u));
    // 0x1c813c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c813cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8140: 0x24020309  addiu       $v0, $zero, 0x309
    ctx->pc = 0x1c8140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 777));
    // 0x1c8144: 0x14c20002  bne         $a2, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C8144u;
    {
        const bool branch_taken_0x1c8144 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C8148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8144u;
        // 0x1c8148: 0x3c0242f0  lui         $v0, 0x42F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8144) {
            ctx->pc = 0x1C8150u;
            goto label_1c8150;
        }
    }
    ctx->pc = 0x1C814Cu;
    // 0x1c814c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c814cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c8150:
    // 0x1c8150: 0x24020302  addiu       $v0, $zero, 0x302
    ctx->pc = 0x1c8150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 770));
    // 0x1c8154: 0x14c20002  bne         $a2, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C8154u;
    {
        const bool branch_taken_0x1c8154 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C8158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8154u;
        // 0x1c8158: 0x3c0242b4  lui         $v0, 0x42B4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8154) {
            ctx->pc = 0x1C8160u;
            goto label_1c8160;
        }
    }
    ctx->pc = 0x1C815Cu;
    // 0x1c815c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c815cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c8160:
    // 0x1c8160: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x1c8160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1c8164: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c8164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c8168: 0x10620039  beq         $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1C8168u;
    {
        const bool branch_taken_0x1c8168 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C816Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8168u;
        // 0x1c816c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8168) {
            ctx->pc = 0x1C8250u;
            goto label_1c8250;
        }
    }
    ctx->pc = 0x1C8170u;
    // 0x1c8170: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1C8170u;
    {
        const bool branch_taken_0x1c8170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c8170) {
            ctx->pc = 0x1C81F8u;
            goto label_1c81f8;
        }
    }
    ctx->pc = 0x1C8178u;
    // 0x1c8178: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1c8178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c817c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C817Cu;
    {
        const bool branch_taken_0x1c817c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c817c) {
            ctx->pc = 0x1C81B0u;
            goto label_1c81b0;
        }
    }
    ctx->pc = 0x1C8184u;
    // 0x1c8184: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C8184u;
    {
        const bool branch_taken_0x1c8184 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8184) {
            ctx->pc = 0x1C8198u;
            goto label_1c8198;
        }
    }
    ctx->pc = 0x1C818Cu;
    // 0x1c818c: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1C818Cu;
    {
        const bool branch_taken_0x1c818c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c818c) {
            ctx->pc = 0x1C82D0u;
            goto label_1c82d0;
        }
    }
    ctx->pc = 0x1C8194u;
    // 0x1c8194: 0x0  nop
    ctx->pc = 0x1c8194u;
    // NOP
label_1c8198:
    // 0x1c8198: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1c8198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1c819c: 0x14c2004c  bne         $a2, $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x1C819Cu;
    {
        const bool branch_taken_0x1c819c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C81A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C819Cu;
        // 0x1c81a0: 0x3c0242b4  lui         $v0, 0x42B4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c819c) {
            ctx->pc = 0x1C82D0u;
            goto label_1c82d0;
        }
    }
    ctx->pc = 0x1C81A4u;
    // 0x1c81a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c81a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c81a8: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1C81A8u;
    {
        const bool branch_taken_0x1c81a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c81a8) {
            ctx->pc = 0x1C82D0u;
            goto label_1c82d0;
        }
    }
    ctx->pc = 0x1C81B0u;
label_1c81b0:
    // 0x1c81b0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1c81b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1c81b4: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C81B4u;
    {
        const bool branch_taken_0x1c81b4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C81B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C81B4u;
        // 0x1c81b8: 0x3c0242dc  lui         $v0, 0x42DC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c81b4) {
            ctx->pc = 0x1C81C8u;
            goto label_1c81c8;
        }
    }
    ctx->pc = 0x1C81BCu;
    // 0x1c81bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c81bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c81c0: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1C81C0u;
    {
        const bool branch_taken_0x1c81c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c81c0) {
            ctx->pc = 0x1C82D0u;
            goto label_1c82d0;
        }
    }
    ctx->pc = 0x1C81C8u;
label_1c81c8:
    // 0x1c81c8: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1c81c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1c81cc: 0x240200ce  addiu       $v0, $zero, 0xCE
    ctx->pc = 0x1c81ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 206));
    // 0x1c81d0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C81D0u;
    {
        const bool branch_taken_0x1c81d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C81D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C81D0u;
        // 0x1c81d4: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c81d0) {
            ctx->pc = 0x1C81E8u;
            goto label_1c81e8;
        }
    }
    ctx->pc = 0x1C81D8u;
    // 0x1c81d8: 0x1062003d  beq         $v1, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x1C81D8u;
    {
        const bool branch_taken_0x1c81d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c81d8) {
            ctx->pc = 0x1C82D0u;
            goto label_1c82d0;
        }
    }
    ctx->pc = 0x1C81E0u;
    // 0x1c81e0: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1C81E0u;
    {
        const bool branch_taken_0x1c81e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c81e0) {
            ctx->pc = 0x1C82D0u;
            goto label_1c82d0;
        }
    }
    ctx->pc = 0x1C81E8u;
label_1c81e8:
    // 0x1c81e8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1c81e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x1c81ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c81ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c81f0: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x1C81F0u;
    {
        const bool branch_taken_0x1c81f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c81f0) {
            ctx->pc = 0x1C82D0u;
            goto label_1c82d0;
        }
    }
    ctx->pc = 0x1C81F8u;
label_1c81f8:
    // 0x1c81f8: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1c81f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1c81fc: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C81FCu;
    {
        const bool branch_taken_0x1c81fc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C8200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C81FCu;
        // 0x1c8200: 0x3c0242dc  lui         $v0, 0x42DC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c81fc) {
            ctx->pc = 0x1C8210u;
            goto label_1c8210;
        }
    }
    ctx->pc = 0x1C8204u;
    // 0x1c8204: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8204u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8208: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1C8208u;
    {
        const bool branch_taken_0x1c8208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8208) {
            ctx->pc = 0x1C82D0u;
            goto label_1c82d0;
        }
    }
    ctx->pc = 0x1C8210u;
label_1c8210:
    // 0x1c8210: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1c8210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1c8214: 0x240200ce  addiu       $v0, $zero, 0xCE
    ctx->pc = 0x1c8214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 206));
    // 0x1c8218: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C8218u;
    {
        const bool branch_taken_0x1c8218 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c8218) {
            ctx->pc = 0x1C8240u;
            goto label_1c8240;
        }
    }
    ctx->pc = 0x1C8220u;
    // 0x1c8220: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C8220u;
    {
        const bool branch_taken_0x1c8220 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8220) {
            ctx->pc = 0x1C8230u;
            goto label_1c8230;
        }
    }
    ctx->pc = 0x1C8228u;
    // 0x1c8228: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1C8228u;
    {
        const bool branch_taken_0x1c8228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8228) {
            ctx->pc = 0x1C82D0u;
            goto label_1c82d0;
        }
    }
    ctx->pc = 0x1C8230u;
label_1c8230:
    // 0x1c8230: 0x3c0242dc  lui         $v0, 0x42DC
    ctx->pc = 0x1c8230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17116 << 16));
    // 0x1c8234: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8234u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8238: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1C8238u;
    {
        const bool branch_taken_0x1c8238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8238) {
            ctx->pc = 0x1C82D0u;
            goto label_1c82d0;
        }
    }
    ctx->pc = 0x1C8240u;
label_1c8240:
    // 0x1c8240: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1c8240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x1c8244: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8248: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1C8248u;
    {
        const bool branch_taken_0x1c8248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8248) {
            ctx->pc = 0x1C82D0u;
            goto label_1c82d0;
        }
    }
    ctx->pc = 0x1C8250u;
label_1c8250:
    // 0x1c8250: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1c8250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1c8254: 0x24020f1d  addiu       $v0, $zero, 0xF1D
    ctx->pc = 0x1c8254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3869));
    // 0x1c8258: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1C8258u;
    {
        const bool branch_taken_0x1c8258 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C825Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8258u;
        // 0x1c825c: 0x24020f30  addiu       $v0, $zero, 0xF30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3888));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8258) {
            ctx->pc = 0x1C82C8u;
            goto label_1c82c8;
        }
    }
    ctx->pc = 0x1C8260u;
    // 0x1c8260: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C8260u;
    {
        const bool branch_taken_0x1c8260 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c8260) {
            ctx->pc = 0x1C82C8u;
            goto label_1c82c8;
        }
    }
    ctx->pc = 0x1C8268u;
    // 0x1c8268: 0x24020f0b  addiu       $v0, $zero, 0xF0B
    ctx->pc = 0x1c8268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3851));
    // 0x1c826c: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C826Cu;
    {
        const bool branch_taken_0x1c826c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C8270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C826Cu;
        // 0x1c8270: 0x24020f10  addiu       $v0, $zero, 0xF10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c826c) {
            ctx->pc = 0x1C82B8u;
            goto label_1c82b8;
        }
    }
    ctx->pc = 0x1C8274u;
    // 0x1c8274: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C8274u;
    {
        const bool branch_taken_0x1c8274 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c8274) {
            ctx->pc = 0x1C82B8u;
            goto label_1c82b8;
        }
    }
    ctx->pc = 0x1C827Cu;
    // 0x1c827c: 0x24020f18  addiu       $v0, $zero, 0xF18
    ctx->pc = 0x1c827cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3864));
    // 0x1c8280: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C8280u;
    {
        const bool branch_taken_0x1c8280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C8284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8280u;
        // 0x1c8284: 0x24020f17  addiu       $v0, $zero, 0xF17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3863));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8280) {
            ctx->pc = 0x1C82B8u;
            goto label_1c82b8;
        }
    }
    ctx->pc = 0x1C8288u;
    // 0x1c8288: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C8288u;
    {
        const bool branch_taken_0x1c8288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c8288) {
            ctx->pc = 0x1C82B8u;
            goto label_1c82b8;
        }
    }
    ctx->pc = 0x1C8290u;
    // 0x1c8290: 0x24020f06  addiu       $v0, $zero, 0xF06
    ctx->pc = 0x1c8290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3846));
    // 0x1c8294: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C8294u;
    {
        const bool branch_taken_0x1c8294 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c8294) {
            ctx->pc = 0x1C82A8u;
            goto label_1c82a8;
        }
    }
    ctx->pc = 0x1C829Cu;
    // 0x1c829c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1C829Cu;
    {
        const bool branch_taken_0x1c829c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c829c) {
            ctx->pc = 0x1C82D0u;
            goto label_1c82d0;
        }
    }
    ctx->pc = 0x1C82A4u;
    // 0x1c82a4: 0x0  nop
    ctx->pc = 0x1c82a4u;
    // NOP
label_1c82a8:
    // 0x1c82a8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1c82a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1c82ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c82acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c82b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C82B0u;
    {
        const bool branch_taken_0x1c82b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c82b0) {
            ctx->pc = 0x1C82D0u;
            goto label_1c82d0;
        }
    }
    ctx->pc = 0x1C82B8u;
label_1c82b8:
    // 0x1c82b8: 0x3c0242dc  lui         $v0, 0x42DC
    ctx->pc = 0x1c82b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17116 << 16));
    // 0x1c82bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c82bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c82c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C82C0u;
    {
        const bool branch_taken_0x1c82c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c82c0) {
            ctx->pc = 0x1C82D0u;
            goto label_1c82d0;
        }
    }
    ctx->pc = 0x1C82C8u;
label_1c82c8:
    // 0x1c82c8: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x1c82c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x1c82cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c82ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c82d0:
    // 0x1c82d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C82D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C82D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C82D8u;
}
