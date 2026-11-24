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

// Function: sub_0026F160
// Address: 0x26f160 - 0x26f314
void sub_0026F160_0x26f160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026F160_0x26f160");
#endif

    switch (ctx->pc) {
        case 0x26f2d8u: goto label_26f2d8;
        default: break;
    }

    ctx->pc = 0x26f160u;

    // 0x26f160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26f160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26f164: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26f164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26f168: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26f168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26f16c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26F16Cu;
    {
        const bool branch_taken_0x26f16c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F16Cu;
        // 0x26f170: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f16c) {
            ctx->pc = 0x26F180u;
            goto label_26f180;
        }
    }
    ctx->pc = 0x26F174u;
    // 0x26f174: 0x920200aa  lbu         $v0, 0xAA($s0)
    ctx->pc = 0x26f174u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 170)));
    // 0x26f178: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x26F178u;
    {
        const bool branch_taken_0x26f178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f178) {
            ctx->pc = 0x26F268u;
            goto label_26f268;
        }
    }
    ctx->pc = 0x26F180u;
label_26f180:
    // 0x26f180: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26f180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x26f184: 0x9023fc8c  lbu         $v1, -0x374($at)
    ctx->pc = 0x26f184u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Cu));
    // 0x26f188: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x26f188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26f18c: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x26F18Cu;
    {
        const bool branch_taken_0x26f18c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26F190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F18Cu;
        // 0x26f190: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f18c) {
            ctx->pc = 0x26F200u;
            goto label_26f200;
        }
    }
    ctx->pc = 0x26F194u;
    // 0x26f194: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x26F194u;
    {
        const bool branch_taken_0x26f194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26f194) {
            ctx->pc = 0x26F1D8u;
            goto label_26f1d8;
        }
    }
    ctx->pc = 0x26F19Cu;
    // 0x26f19c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26f19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26f1a0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26F1A0u;
    {
        const bool branch_taken_0x26f1a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26f1a0) {
            ctx->pc = 0x26F1B0u;
            goto label_26f1b0;
        }
    }
    ctx->pc = 0x26F1A8u;
    // 0x26f1a8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x26F1A8u;
    {
        const bool branch_taken_0x26f1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f1a8) {
            ctx->pc = 0x26F230u;
            goto label_26f230;
        }
    }
    ctx->pc = 0x26F1B0u;
label_26f1b0:
    // 0x26f1b0: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x26f1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x26f1b4: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x26f1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x26f1b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26f1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26f1bc: 0x3187c  dsll32      $v1, $v1, 1
    ctx->pc = 0x26f1bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 1));
    // 0x26f1c0: 0x3187e  dsrl32      $v1, $v1, 1
    ctx->pc = 0x26f1c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 1));
    // 0x26f1c4: 0xae030090  sw          $v1, 0x90($s0)
    ctx->pc = 0x26f1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
    // 0x26f1c8: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x26f1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x26f1cc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26f1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26f1d0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x26F1D0u;
    {
        const bool branch_taken_0x26f1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F1D0u;
        // 0x26f1d4: 0xae020090  sw          $v0, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f1d0) {
            ctx->pc = 0x26F250u;
            goto label_26f250;
        }
    }
    ctx->pc = 0x26F1D8u;
label_26f1d8:
    // 0x26f1d8: 0x8e040090  lw          $a0, 0x90($s0)
    ctx->pc = 0x26f1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x26f1dc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x26f1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x26f1e0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x26f1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x26f1e4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x26f1e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x26f1e8: 0xae030090  sw          $v1, 0x90($s0)
    ctx->pc = 0x26f1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
    // 0x26f1ec: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x26f1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x26f1f0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x26f1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x26f1f4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x26F1F4u;
    {
        const bool branch_taken_0x26f1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F1F4u;
        // 0x26f1f8: 0xae020090  sw          $v0, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f1f4) {
            ctx->pc = 0x26F250u;
            goto label_26f250;
        }
    }
    ctx->pc = 0x26F1FCu;
    // 0x26f1fc: 0x0  nop
    ctx->pc = 0x26f1fcu;
    // NOP
label_26f200:
    // 0x26f200: 0x8e040090  lw          $a0, 0x90($s0)
    ctx->pc = 0x26f200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x26f204: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x26f204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x26f208: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26f208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x26f20c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x26f20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x26f210: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x26f210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x26f214: 0xae030090  sw          $v1, 0x90($s0)
    ctx->pc = 0x26f214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
    // 0x26f218: 0x9023fc8d  lbu         $v1, -0x373($at)
    ctx->pc = 0x26f218u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x81FC8Du));
    // 0x26f21c: 0xa2030098  sb          $v1, 0x98($s0)
    ctx->pc = 0x26f21cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 152), (uint8_t)GPR_U32(ctx, 3));
    // 0x26f220: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x26f220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x26f224: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x26f224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x26f228: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x26F228u;
    {
        const bool branch_taken_0x26f228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F228u;
        // 0x26f22c: 0xae020090  sw          $v0, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f228) {
            ctx->pc = 0x26F250u;
            goto label_26f250;
        }
    }
    ctx->pc = 0x26F230u;
label_26f230:
    // 0x26f230: 0x8e040090  lw          $a0, 0x90($s0)
    ctx->pc = 0x26f230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x26f234: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x26f234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x26f238: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x26f238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x26f23c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x26f23cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x26f240: 0xae030090  sw          $v1, 0x90($s0)
    ctx->pc = 0x26f240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
    // 0x26f244: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x26f244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x26f248: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x26f248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x26f24c: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x26f24cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
label_26f250:
    // 0x26f250: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x26f250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x26f254: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x26f254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
    // 0x26f258: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26f258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26f25c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26f25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26f260: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x26f260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
    // 0x26f264: 0x0  nop
    ctx->pc = 0x26f264u;
    // NOP
label_26f268:
    // 0x26f268: 0x8e070090  lw          $a3, 0x90($s0)
    ctx->pc = 0x26f268u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x26f26c: 0x3c03efff  lui         $v1, 0xEFFF
    ctx->pc = 0x26f26cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61439 << 16));
    // 0x26f270: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x26f270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x26f274: 0x3466ffff  ori         $a2, $v1, 0xFFFF
    ctx->pc = 0x26f274u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x26f278: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x26f278u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26f27c: 0x3c03fbff  lui         $v1, 0xFBFF
    ctx->pc = 0x26f27cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64511 << 16));
    // 0x26f280: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x26f280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x26f284: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x26f284u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x26f288: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x26f288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x26f28c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26f28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26f290: 0xe63024  and         $a2, $a3, $a2
    ctx->pc = 0x26f290u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x26f294: 0xae060090  sw          $a2, 0x90($s0)
    ctx->pc = 0x26f294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 6));
    // 0x26f298: 0x8e060090  lw          $a2, 0x90($s0)
    ctx->pc = 0x26f298u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x26f29c: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x26f29cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x26f2a0: 0xae050090  sw          $a1, 0x90($s0)
    ctx->pc = 0x26f2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 5));
    // 0x26f2a4: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x26f2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x26f2a8: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x26f2a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x26f2ac: 0xae030090  sw          $v1, 0x90($s0)
    ctx->pc = 0x26f2acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
    // 0x26f2b0: 0xa2000094  sb          $zero, 0x94($s0)
    ctx->pc = 0x26f2b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 148), (uint8_t)GPR_U32(ctx, 0));
    // 0x26f2b4: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x26f2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x26f2b8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26f2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26f2bc: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x26f2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
    // 0x26f2c0: 0xa2000096  sb          $zero, 0x96($s0)
    ctx->pc = 0x26f2c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 150), (uint8_t)GPR_U32(ctx, 0));
    // 0x26f2c4: 0xa2000097  sb          $zero, 0x97($s0)
    ctx->pc = 0x26f2c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 151), (uint8_t)GPR_U32(ctx, 0));
    // 0x26f2c8: 0x82050096  lb          $a1, 0x96($s0)
    ctx->pc = 0x26f2c8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 150)));
    // 0x26f2cc: 0x82060097  lb          $a2, 0x97($s0)
    ctx->pc = 0x26f2ccu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 151)));
    // 0x26f2d0: 0xc05e468  jal         func_1791A0
    ctx->pc = 0x26F2D0u;
    SET_GPR_U32(ctx, 31, 0x26F2D8u);
    ctx->pc = 0x26F2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F2D0u;
    // 0x26f2d4: 0x2484cea0  addiu       $a0, $a0, -0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1791A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1791A0u, 0x26F2D0u, 0x26F2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F2D8u;
label_26f2d8:
    // 0x26f2d8: 0xa2000095  sb          $zero, 0x95($s0)
    ctx->pc = 0x26f2d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 149), (uint8_t)GPR_U32(ctx, 0));
    // 0x26f2dc: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x26f2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
    // 0x26f2e0: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x26f2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x26f2e4: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x26f2e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x26f2e8: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x26f2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
    // 0x26f2ec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x26f2ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x26f2f0: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x26f2f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x26f2f4: 0xae040090  sw          $a0, 0x90($s0)
    ctx->pc = 0x26f2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 4));
    // 0x26f2f8: 0x8e040090  lw          $a0, 0x90($s0)
    ctx->pc = 0x26f2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x26f2fc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x26f2fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x26f300: 0xae030090  sw          $v1, 0x90($s0)
    ctx->pc = 0x26f300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
    // 0x26f304: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26f304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26f308: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26f308u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26f30c: 0x3e00008  jr          $ra
    ctx->pc = 0x26F30Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F30Cu;
        // 0x26f310: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F30Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26F314u;
}
