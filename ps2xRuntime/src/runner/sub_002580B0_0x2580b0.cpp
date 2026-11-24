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

// Function: sub_002580B0
// Address: 0x2580b0 - 0x258318
void sub_002580B0_0x2580b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002580B0_0x2580b0");
#endif

    switch (ctx->pc) {
        case 0x258108u: goto label_258108;
        case 0x258138u: goto label_258138;
        case 0x2581dcu: goto label_2581dc;
        case 0x2581f4u: goto label_2581f4;
        case 0x258224u: goto label_258224;
        case 0x258268u: goto label_258268;
        case 0x2582a0u: goto label_2582a0;
        case 0x2582a8u: goto label_2582a8;
        default: break;
    }

    ctx->pc = 0x2580b0u;

    // 0x2580b0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2580b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2580b4: 0x3401d140  ori         $at, $zero, 0xD140
    ctx->pc = 0x2580b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53568);
    // 0x2580b8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2580b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2580bc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2580bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2580c0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2580c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2580c4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2580c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2580c8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2580c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2580cc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2580ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2580d0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2580d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2580d4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2580d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2580d8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2580d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2580dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2580dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2580e0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2580e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2580e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2580e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2580e8: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2580e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2580ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2580ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2580f0: 0x80e20000  lb          $v0, 0x0($a3)
    ctx->pc = 0x2580f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2580f4: 0x14400076  bnez        $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x2580F4u;
    {
        const bool branch_taken_0x2580f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2580F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2580F4u;
        // 0x2580f8: 0x2a18821  addu        $s1, $s5, $at (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2580f4) {
            ctx->pc = 0x2582D0u;
            goto label_2582d0;
        }
    }
    ctx->pc = 0x2580FCu;
    // 0x2580fc: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x2580FCu;
    {
        const bool branch_taken_0x2580fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2580FCu;
        // 0x258100: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2580fc) {
            ctx->pc = 0x2582E8u;
            goto label_2582e8;
        }
    }
    ctx->pc = 0x258104u;
    // 0x258104: 0x0  nop
    ctx->pc = 0x258104u;
    // NOP
label_258108:
    // 0x258108: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x258108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x25810c: 0x1062004a  beq         $v1, $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x25810Cu;
    {
        const bool branch_taken_0x25810c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x258110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25810Cu;
        // 0x258110: 0x24020025  addiu       $v0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25810c) {
            ctx->pc = 0x258238u;
            goto label_258238;
        }
    }
    ctx->pc = 0x258114u;
    // 0x258114: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x258114u;
    {
        const bool branch_taken_0x258114 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x258114) {
            ctx->pc = 0x258128u;
            goto label_258128;
        }
    }
    ctx->pc = 0x25811Cu;
    // 0x25811c: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x25811Cu;
    {
        const bool branch_taken_0x25811c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25811c) {
            ctx->pc = 0x258258u;
            goto label_258258;
        }
    }
    ctx->pc = 0x258124u;
    // 0x258124: 0x0  nop
    ctx->pc = 0x258124u;
    // NOP
label_258128:
    // 0x258128: 0x26650001  addiu       $a1, $s3, 0x1
    ctx->pc = 0x258128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x25812c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x25812cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258130: 0xc0960c8  jal         func_258320
    ctx->pc = 0x258130u;
    SET_GPR_U32(ctx, 31, 0x258138u);
    ctx->pc = 0x258134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258130u;
    // 0x258134: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258320u, 0x258130u, 0x258138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258138u;
label_258138:
    // 0x258138: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x258138u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25813c: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x25813cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258140: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x258140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x258144: 0x24730001  addiu       $s3, $v1, 0x1
    ctx->pc = 0x258144u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x258148: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x258148u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25814c: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x25814Cu;
    {
        const bool branch_taken_0x25814c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25814c) {
            ctx->pc = 0x258200u;
            goto label_258200;
        }
    }
    ctx->pc = 0x258154u;
    // 0x258154: 0x24020073  addiu       $v0, $zero, 0x73
    ctx->pc = 0x258154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x258158: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x258158u;
    {
        const bool branch_taken_0x258158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x25815Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258158u;
        // 0x25815c: 0x24020061  addiu       $v0, $zero, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258158) {
            ctx->pc = 0x2581E0u;
            goto label_2581e0;
        }
    }
    ctx->pc = 0x258160u;
    // 0x258160: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x258160u;
    {
        const bool branch_taken_0x258160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x258160) {
            ctx->pc = 0x2581B0u;
            goto label_2581b0;
        }
    }
    ctx->pc = 0x258168u;
    // 0x258168: 0x24020072  addiu       $v0, $zero, 0x72
    ctx->pc = 0x258168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x25816c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25816Cu;
    {
        const bool branch_taken_0x25816c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x25816c) {
            ctx->pc = 0x258180u;
            goto label_258180;
        }
    }
    ctx->pc = 0x258174u;
    // 0x258174: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x258174u;
    {
        const bool branch_taken_0x258174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x258174) {
            ctx->pc = 0x258230u;
            goto label_258230;
        }
    }
    ctx->pc = 0x25817Cu;
    // 0x25817c: 0x0  nop
    ctx->pc = 0x25817cu;
    // NOP
label_258180:
    // 0x258180: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x258180u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x258184: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x258184u;
    {
        const bool branch_taken_0x258184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x258184) {
            ctx->pc = 0x258194u;
            goto label_258194;
        }
    }
    ctx->pc = 0x25818Cu;
    // 0x25818c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25818Cu;
    {
        const bool branch_taken_0x25818c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25818Cu;
        // 0x258190: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25818c) {
            ctx->pc = 0x25819Cu;
            goto label_25819c;
        }
    }
    ctx->pc = 0x258194u;
label_258194:
    // 0x258194: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x258194u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x258198: 0x8e43fff8  lw          $v1, -0x8($s2)
    ctx->pc = 0x258198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967288)));
label_25819c:
    // 0x25819c: 0x240200f2  addiu       $v0, $zero, 0xF2
    ctx->pc = 0x25819cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 242));
    // 0x2581a0: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x2581a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2581a4: 0xa2230001  sb          $v1, 0x1($s1)
    ctx->pc = 0x2581a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2581a8: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x2581A8u;
    {
        const bool branch_taken_0x2581a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2581ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2581A8u;
        // 0x2581ac: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2581a8) {
            ctx->pc = 0x2582A8u;
            goto label_2582a8;
        }
    }
    ctx->pc = 0x2581B0u;
label_2581b0:
    // 0x2581b0: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x2581b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2581b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2581B4u;
    {
        const bool branch_taken_0x2581b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2581b4) {
            ctx->pc = 0x2581C4u;
            goto label_2581c4;
        }
    }
    ctx->pc = 0x2581BCu;
    // 0x2581bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2581BCu;
    {
        const bool branch_taken_0x2581bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2581C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2581BCu;
        // 0x2581c0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2581bc) {
            ctx->pc = 0x2581CCu;
            goto label_2581cc;
        }
    }
    ctx->pc = 0x2581C4u;
label_2581c4:
    // 0x2581c4: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x2581c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x2581c8: 0x8e43fff8  lw          $v1, -0x8($s2)
    ctx->pc = 0x2581c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967288)));
label_2581cc:
    // 0x2581cc: 0x240200f3  addiu       $v0, $zero, 0xF3
    ctx->pc = 0x2581ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
    // 0x2581d0: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x2581d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2581d4: 0xa2230001  sb          $v1, 0x1($s1)
    ctx->pc = 0x2581d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2581d8: 0x10000033  b           . + 4 + (0x33 << 2)
label_2581dc:
    if (ctx->pc == 0x2581DCu) {
        ctx->pc = 0x2581DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2581D8u;
        // 0x2581dc: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2581E0u;
        goto label_2581e0;
    }
    ctx->pc = 0x2581D8u;
    {
        const bool branch_taken_0x2581d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2581DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2581D8u;
        // 0x2581dc: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2581d8) {
            ctx->pc = 0x2582A8u;
            goto label_2582a8;
        }
    }
    ctx->pc = 0x2581E0u;
label_2581e0:
    // 0x2581e0: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x2581e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x2581e4: 0x8e46fff8  lw          $a2, -0x8($s2)
    ctx->pc = 0x2581e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967288)));
    // 0x2581e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2581e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2581ec: 0xc096100  jal         func_258400
    ctx->pc = 0x2581ECu;
    SET_GPR_U32(ctx, 31, 0x2581F4u);
    ctx->pc = 0x2581F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2581ECu;
    // 0x2581f0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258400u, 0x2581ECu, 0x2581F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2581F4u;
label_2581f4:
    // 0x2581f4: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2581F4u;
    {
        const bool branch_taken_0x2581f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2581F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2581F4u;
        // 0x2581f8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2581f4) {
            ctx->pc = 0x2582A8u;
            goto label_2582a8;
        }
    }
    ctx->pc = 0x2581FCu;
    // 0x2581fc: 0x0  nop
    ctx->pc = 0x2581fcu;
    // NOP
label_258200:
    // 0x258200: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x258200u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x258204: 0x8e46fff8  lw          $a2, -0x8($s2)
    ctx->pc = 0x258204u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967288)));
    // 0x258208: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x258208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25820c: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x25820cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x258210: 0x93a800a0  lbu         $t0, 0xA0($sp)
    ctx->pc = 0x258210u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x258214: 0x8fc90000  lw          $t1, 0x0($fp)
    ctx->pc = 0x258214u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x258218: 0x92ea0000  lbu         $t2, 0x0($s7)
    ctx->pc = 0x258218u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x25821c: 0xc09612c  jal         func_2584B0
    ctx->pc = 0x25821Cu;
    SET_GPR_U32(ctx, 31, 0x258224u);
    ctx->pc = 0x258220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25821Cu;
    // 0x258220: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2584B0u, 0x25821Cu, 0x258224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258224u;
label_258224:
    // 0x258224: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x258224u;
    {
        const bool branch_taken_0x258224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258224u;
        // 0x258228: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258224) {
            ctx->pc = 0x2582A8u;
            goto label_2582a8;
        }
    }
    ctx->pc = 0x25822Cu;
    // 0x25822c: 0x0  nop
    ctx->pc = 0x25822cu;
    // NOP
label_258230:
    // 0x258230: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x258230u;
    {
        const bool branch_taken_0x258230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258230u;
        // 0x258234: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258230) {
            ctx->pc = 0x2582A8u;
            goto label_2582a8;
        }
    }
    ctx->pc = 0x258238u;
label_258238:
    // 0x258238: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x258238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x25823c: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x25823cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x258240: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x258240u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x258244: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x258244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x258248: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x258248u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x25824c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x25824Cu;
    {
        const bool branch_taken_0x25824c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25824Cu;
        // 0x258250: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25824c) {
            ctx->pc = 0x2582A8u;
            goto label_2582a8;
        }
    }
    ctx->pc = 0x258254u;
    // 0x258254: 0x0  nop
    ctx->pc = 0x258254u;
    // NOP
label_258258:
    // 0x258258: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x258258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25825c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x25825cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258260: 0xc095630  jal         func_2558C0
    ctx->pc = 0x258260u;
    SET_GPR_U32(ctx, 31, 0x258268u);
    ctx->pc = 0x258264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258260u;
    // 0x258264: 0x27a600b8  addiu       $a2, $sp, 0xB8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2558C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2558C0u, 0x258260u, 0x258268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258268u;
label_258268:
    // 0x258268: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x258268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25826c: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x25826Cu;
    {
        const bool branch_taken_0x25826c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x258270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25826Cu;
        // 0x258270: 0x3043ff00  andi        $v1, $v0, 0xFF00 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25826c) {
            ctx->pc = 0x2582A0u;
            goto label_2582a0;
        }
    }
    ctx->pc = 0x258274u;
    // 0x258274: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x258274u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x258278: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x258278u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x25827c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x25827cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258280: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x258280u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x258284: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x258284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x258288: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x258288u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x25828c: 0x27a600be  addiu       $a2, $sp, 0xBE
    ctx->pc = 0x25828cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 190));
    // 0x258290: 0x92890006  lbu         $t1, 0x6($s4)
    ctx->pc = 0x258290u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x258294: 0x27a700bc  addiu       $a3, $sp, 0xBC
    ctx->pc = 0x258294u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x258298: 0xc0955c4  jal         func_255710
    ctx->pc = 0x258298u;
    SET_GPR_U32(ctx, 31, 0x2582A0u);
    ctx->pc = 0x25829Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258298u;
    // 0x25829c: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255710u, 0x258298u, 0x2582A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2582A0u;
label_2582a0:
    // 0x2582a0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2582a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2582a4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x2582a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2582a8:
    // 0x2582a8: 0x82630000  lb          $v1, 0x0($s3)
    ctx->pc = 0x2582a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2582ac: 0x1460ff96  bnez        $v1, . + 4 + (-0x6A << 2)
    ctx->pc = 0x2582ACu;
    {
        const bool branch_taken_0x2582ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2582B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2582ACu;
        // 0x2582b0: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2582ac) {
            ctx->pc = 0x258108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258108;
        }
    }
    ctx->pc = 0x2582B4u;
    // 0x2582b4: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x2582b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2582b8: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x2582b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2582bc: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x2582bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2582c0: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x2582c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x2582c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2582C4u;
    {
        const bool branch_taken_0x2582c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2582C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2582C4u;
        // 0x2582c8: 0x621024  and         $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2582c4) {
            ctx->pc = 0x2582E8u;
            goto label_2582e8;
        }
    }
    ctx->pc = 0x2582CCu;
    // 0x2582cc: 0x0  nop
    ctx->pc = 0x2582ccu;
    // NOP
label_2582d0:
    // 0x2582d0: 0x27b600b0  addiu       $s6, $sp, 0xB0
    ctx->pc = 0x2582d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2582d4: 0x27b000ac  addiu       $s0, $sp, 0xAC
    ctx->pc = 0x2582d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x2582d8: 0x27b700a8  addiu       $s7, $sp, 0xA8
    ctx->pc = 0x2582d8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x2582dc: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x2582DCu;
    {
        const bool branch_taken_0x2582dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2582E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2582DCu;
        // 0x2582e0: 0x27be00a4  addiu       $fp, $sp, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2582dc) {
            ctx->pc = 0x2582A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2582a8;
        }
    }
    ctx->pc = 0x2582E4u;
    // 0x2582e4: 0x0  nop
    ctx->pc = 0x2582e4u;
    // NOP
label_2582e8:
    // 0x2582e8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2582e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2582ec: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2582ecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2582f0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2582f0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2582f4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2582f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2582f8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2582f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2582fc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2582fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x258300: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x258300u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x258304: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x258304u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258308: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x258308u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25830c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25830cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258310: 0x3e00008  jr          $ra
    ctx->pc = 0x258310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x258314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258310u;
        // 0x258314: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258318u;
}
