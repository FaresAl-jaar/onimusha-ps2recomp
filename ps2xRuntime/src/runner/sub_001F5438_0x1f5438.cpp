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

// Function: sub_001F5438
// Address: 0x1f5438 - 0x1f5538
void sub_001F5438_0x1f5438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5438_0x1f5438");
#endif

    switch (ctx->pc) {
        case 0x1f5454u: goto label_1f5454;
        case 0x1f5490u: goto label_1f5490;
        case 0x1f54f0u: goto label_1f54f0;
        default: break;
    }

    ctx->pc = 0x1f5438u;

    // 0x1f5438: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f5438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f543c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f543cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f5440: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f5440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5444: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f5444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f5448: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f5448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f544c: 0xc07eb5e  jal         func_1FAD78
    ctx->pc = 0x1F544Cu;
    SET_GPR_U32(ctx, 31, 0x1F5454u);
    ctx->pc = 0x1F5450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F544Cu;
    // 0x1f5450: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAD78u, 0x1F544Cu, 0x1F5454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5454u;
label_1f5454:
    // 0x1f5454: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F5454u;
    {
        const bool branch_taken_0x1f5454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5454u;
        // 0x1f5458: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5454) {
            ctx->pc = 0x1F5478u;
            goto label_1f5478;
        }
    }
    ctx->pc = 0x1F545Cu;
    // 0x1f545c: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x1f545cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
    // 0x1f5460: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f5460u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5464: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f5464u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f5468: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f5468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f546c: 0x34a5020c  ori         $a1, $a1, 0x20C
    ctx->pc = 0x1f546cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)524);
    // 0x1f5470: 0x807d4a8  j           func_1F52A0
    ctx->pc = 0x1F5470u;
    ctx->pc = 0x1F5474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5470u;
    // 0x1f5474: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F52A0u;
    sub_001F52A0_0x1f52a0(rdram, ctx, runtime); return;
    ctx->pc = 0x1F5478u;
label_1f5478:
    // 0x1f5478: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f5478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f547c: 0x26030058  addiu       $v1, $s0, 0x58
    ctx->pc = 0x1f547cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x1f5480: 0x651025  or          $v0, $v1, $a1
    ctx->pc = 0x1f5480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1f5484: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1f5484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1f5488: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1F5488u;
    {
        const bool branch_taken_0x1f5488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F548Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5488u;
        // 0x1f548c: 0x260400d8  addiu       $a0, $s0, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5488) {
            ctx->pc = 0x1F54F0u;
            goto label_1f54f0;
        }
    }
    ctx->pc = 0x1F5490u;
label_1f5490:
    // 0x1f5490: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x1f5490u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1f5494: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x1f5494u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1f5498: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x1f5498u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1f549c: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x1f549cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1f54a0: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x1f54a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1f54a4: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x1f54a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1f54a8: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x1f54a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1f54ac: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x1f54acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1f54b0: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x1f54b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f54b4: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x1f54b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f54b8: 0xb0a6000f  sdl         $a2, 0xF($a1)
    ctx->pc = 0x1f54b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f54bc: 0xb4a60008  sdr         $a2, 0x8($a1)
    ctx->pc = 0x1f54bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f54c0: 0xb0a70017  sdl         $a3, 0x17($a1)
    ctx->pc = 0x1f54c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f54c4: 0xb4a70010  sdr         $a3, 0x10($a1)
    ctx->pc = 0x1f54c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f54c8: 0xb0a8001f  sdl         $t0, 0x1F($a1)
    ctx->pc = 0x1f54c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f54cc: 0xb4a80018  sdr         $t0, 0x18($a1)
    ctx->pc = 0x1f54ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1f54d0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1f54d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1f54d4: 0x0  nop
    ctx->pc = 0x1f54d4u;
    // NOP
    // 0x1f54d8: 0x0  nop
    ctx->pc = 0x1f54d8u;
    // NOP
    // 0x1f54dc: 0x1464ffec  bne         $v1, $a0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1F54DCu;
    {
        const bool branch_taken_0x1f54dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1F54E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F54DCu;
        // 0x1f54e0: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f54dc) {
            ctx->pc = 0x1F5490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f5490;
        }
    }
    ctx->pc = 0x1F54E4u;
    // 0x1f54e4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1F54E4u;
    {
        const bool branch_taken_0x1f54e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F54E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F54E4u;
        // 0x1f54e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f54e4) {
            ctx->pc = 0x1F5528u;
            goto label_1f5528;
        }
    }
    ctx->pc = 0x1F54ECu;
    // 0x1f54ec: 0x0  nop
    ctx->pc = 0x1f54ecu;
    // NOP
label_1f54f0:
    // 0x1f54f0: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x1f54f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f54f4: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x1f54f4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1f54f8: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x1f54f8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1f54fc: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x1f54fcu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1f5500: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x1f5500u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x1f5504: 0xfca60008  sd          $a2, 0x8($a1)
    ctx->pc = 0x1f5504u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
    // 0x1f5508: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x1f5508u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
    // 0x1f550c: 0xfca80018  sd          $t0, 0x18($a1)
    ctx->pc = 0x1f550cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 8));
    // 0x1f5510: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1f5510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1f5514: 0x0  nop
    ctx->pc = 0x1f5514u;
    // NOP
    // 0x1f5518: 0x0  nop
    ctx->pc = 0x1f5518u;
    // NOP
    // 0x1f551c: 0x1464fff4  bne         $v1, $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1F551Cu;
    {
        const bool branch_taken_0x1f551c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1F5520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F551Cu;
        // 0x1f5520: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f551c) {
            ctx->pc = 0x1F54F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f54f0;
        }
    }
    ctx->pc = 0x1F5524u;
    // 0x1f5524: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f5524u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f5528:
    // 0x1f5528: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f5528u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f552c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f552cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f5530: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5530u;
        // 0x1f5534: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5538u;
}
