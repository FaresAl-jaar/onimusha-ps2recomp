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

// Function: sub_0028F410
// Address: 0x28f410 - 0x28f55c
void sub_0028F410_0x28f410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F410_0x28f410");
#endif

    switch (ctx->pc) {
        case 0x28f4a0u: goto label_28f4a0;
        default: break;
    }

    ctx->pc = 0x28f410u;

    // 0x28f410: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28f410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28f414: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x28f414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28f418: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28f418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28f41c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28f41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28f420: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x28f420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x28f424: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x28F424u;
    {
        const bool branch_taken_0x28f424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28F428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F424u;
        // 0x28f428: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f424) {
            ctx->pc = 0x28F488u;
            goto label_28f488;
        }
    }
    ctx->pc = 0x28F42Cu;
    // 0x28f42c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28f42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28f430: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x28F430u;
    {
        const bool branch_taken_0x28f430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28F434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F430u;
        // 0x28f434: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f430) {
            ctx->pc = 0x28F468u;
            goto label_28f468;
        }
    }
    ctx->pc = 0x28F438u;
    // 0x28f438: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28F438u;
    {
        const bool branch_taken_0x28f438 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28f438) {
            ctx->pc = 0x28F448u;
            goto label_28f448;
        }
    }
    ctx->pc = 0x28F440u;
    // 0x28f440: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x28F440u;
    {
        const bool branch_taken_0x28f440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f440) {
            ctx->pc = 0x28F548u;
            goto label_28f548;
        }
    }
    ctx->pc = 0x28F448u;
label_28f448:
    // 0x28f448: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x28f448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x28f44c: 0x3c02008d  lui         $v0, 0x8D
    ctx->pc = 0x28f44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)141 << 16));
    // 0x28f450: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x28f450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x28f454: 0x244221b0  addiu       $v0, $v0, 0x21B0
    ctx->pc = 0x28f454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8624));
    // 0x28f458: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28f458u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28f45c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28f45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28f460: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x28F460u;
    {
        const bool branch_taken_0x28f460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F460u;
        // 0x28f464: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f460) {
            ctx->pc = 0x28F548u;
            goto label_28f548;
        }
    }
    ctx->pc = 0x28F468u;
label_28f468:
    // 0x28f468: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x28f468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x28f46c: 0x3c02008d  lui         $v0, 0x8D
    ctx->pc = 0x28f46cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)141 << 16));
    // 0x28f470: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x28f470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x28f474: 0x244221d0  addiu       $v0, $v0, 0x21D0
    ctx->pc = 0x28f474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8656));
    // 0x28f478: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28f478u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28f47c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28f47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28f480: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x28F480u;
    {
        const bool branch_taken_0x28f480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F480u;
        // 0x28f484: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f480) {
            ctx->pc = 0x28F548u;
            goto label_28f548;
        }
    }
    ctx->pc = 0x28F488u;
label_28f488:
    // 0x28f488: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x28f488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x28f48c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x28f48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x28f490: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x28F490u;
    {
        const bool branch_taken_0x28f490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28F494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F490u;
        // 0x28f494: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f490) {
            ctx->pc = 0x28F510u;
            goto label_28f510;
        }
    }
    ctx->pc = 0x28F498u;
    // 0x28f498: 0xc099b04  jal         func_266C10
    ctx->pc = 0x28F498u;
    SET_GPR_U32(ctx, 31, 0x28F4A0u);
    ctx->pc = 0x28F49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F498u;
    // 0x28f49c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266C10u, 0x28F498u, 0x28F4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F4A0u;
label_28f4a0:
    // 0x28f4a0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x28F4A0u;
    {
        const bool branch_taken_0x28f4a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f4a0) {
            ctx->pc = 0x28F4D0u;
            goto label_28f4d0;
        }
    }
    ctx->pc = 0x28F4A8u;
    // 0x28f4a8: 0xc4430020  lwc1        $f3, 0x20($v0)
    ctx->pc = 0x28f4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28f4ac: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x28f4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28f4b0: 0xc4420024  lwc1        $f2, 0x24($v0)
    ctx->pc = 0x28f4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28f4b4: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x28f4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f4b8: 0xc440002c  lwc1        $f0, 0x2C($v0)
    ctx->pc = 0x28f4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f4bc: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x28f4bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x28f4c0: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x28f4c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x28f4c4: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x28f4c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x28f4c8: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x28f4c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x28f4cc: 0x0  nop
    ctx->pc = 0x28f4ccu;
    // NOP
label_28f4d0:
    // 0x28f4d0: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x28f4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28f4d4: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x28f4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x28f4d8: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x28f4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28f4dc: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x28f4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28f4e0: 0x3c03008d  lui         $v1, 0x8D
    ctx->pc = 0x28f4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)141 << 16));
    // 0x28f4e4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x28f4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f4e8: 0x246321b0  addiu       $v1, $v1, 0x21B0
    ctx->pc = 0x28f4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8624));
    // 0x28f4ec: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x28f4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f4f0: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x28f4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x28f4f4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x28f4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28f4f8: 0xe4430040  swc1        $f3, 0x40($v0)
    ctx->pc = 0x28f4f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x28f4fc: 0xe4420044  swc1        $f2, 0x44($v0)
    ctx->pc = 0x28f4fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x28f500: 0xe4410048  swc1        $f1, 0x48($v0)
    ctx->pc = 0x28f500u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x28f504: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x28F504u;
    {
        const bool branch_taken_0x28f504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F504u;
        // 0x28f508: 0xe440004c  swc1        $f0, 0x4C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f504) {
            ctx->pc = 0x28F548u;
            goto label_28f548;
        }
    }
    ctx->pc = 0x28F50Cu;
    // 0x28f50c: 0x0  nop
    ctx->pc = 0x28f50cu;
    // NOP
label_28f510:
    // 0x28f510: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x28f510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x28f514: 0x3c02008d  lui         $v0, 0x8D
    ctx->pc = 0x28f514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)141 << 16));
    // 0x28f518: 0xc6030040  lwc1        $f3, 0x40($s0)
    ctx->pc = 0x28f518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x28f51c: 0x244221b0  addiu       $v0, $v0, 0x21B0
    ctx->pc = 0x28f51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8624));
    // 0x28f520: 0xc6020044  lwc1        $f2, 0x44($s0)
    ctx->pc = 0x28f520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28f524: 0xc6010048  lwc1        $f1, 0x48($s0)
    ctx->pc = 0x28f524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f528: 0xc600004c  lwc1        $f0, 0x4C($s0)
    ctx->pc = 0x28f528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f52c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x28f52cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x28f530: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28f530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28f534: 0xe4430040  swc1        $f3, 0x40($v0)
    ctx->pc = 0x28f534u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x28f538: 0xe4420044  swc1        $f2, 0x44($v0)
    ctx->pc = 0x28f538u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x28f53c: 0xe4410048  swc1        $f1, 0x48($v0)
    ctx->pc = 0x28f53cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x28f540: 0xe440004c  swc1        $f0, 0x4C($v0)
    ctx->pc = 0x28f540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
    // 0x28f544: 0x0  nop
    ctx->pc = 0x28f544u;
    // NOP
label_28f548:
    // 0x28f548: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28f548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28f54c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28f54cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f550: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28f550u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f554: 0x3e00008  jr          $ra
    ctx->pc = 0x28F554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F554u;
        // 0x28f558: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F55Cu;
}
