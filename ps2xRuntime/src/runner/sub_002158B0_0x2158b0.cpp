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

// Function: sub_002158B0
// Address: 0x2158b0 - 0x215a6c
void sub_002158B0_0x2158b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002158B0_0x2158b0");
#endif

    switch (ctx->pc) {
        case 0x215954u: goto label_215954;
        case 0x215968u: goto label_215968;
        case 0x2159b8u: goto label_2159b8;
        case 0x215a34u: goto label_215a34;
        default: break;
    }

    ctx->pc = 0x2158b0u;

    // 0x2158b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2158b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2158b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2158b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2158b8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2158b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2158bc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2158bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2158c0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2158c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2158c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2158c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2158c8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2158c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2158cc: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2158ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2158d0: 0x12200060  beqz        $s1, . + 4 + (0x60 << 2)
    ctx->pc = 0x2158D0u;
    {
        const bool branch_taken_0x2158d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2158D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2158D0u;
        // 0x2158d4: 0xafa50010  sw          $a1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2158d0) {
            ctx->pc = 0x215A54u;
            goto label_215a54;
        }
    }
    ctx->pc = 0x2158D8u;
    // 0x2158d8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2158d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2158dc: 0x5224005e  beql        $s1, $a0, . + 4 + (0x5E << 2)
    ctx->pc = 0x2158DCu;
    {
        const bool branch_taken_0x2158dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        if (branch_taken_0x2158dc) {
            ctx->pc = 0x2158E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2158DCu;
            // 0x2158e0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215A58u;
            goto label_215a58;
        }
    }
    ctx->pc = 0x2158E4u;
    // 0x2158e4: 0x91102b  sltu        $v0, $a0, $s1
    ctx->pc = 0x2158e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2158e8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2158E8u;
    {
        const bool branch_taken_0x2158e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2158ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2158E8u;
        // 0x2158ec: 0x224102b  sltu        $v0, $s1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2158e8) {
            ctx->pc = 0x215904u;
            goto label_215904;
        }
    }
    ctx->pc = 0x2158F0u;
    // 0x2158f0: 0x2241823  subu        $v1, $s1, $a0
    ctx->pc = 0x2158f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2158f4: 0x28630004  slti        $v1, $v1, 0x4
    ctx->pc = 0x2158f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2158f8: 0x14600056  bnez        $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x2158F8u;
    {
        const bool branch_taken_0x2158f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2158FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2158F8u;
        // 0x2158fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2158f8) {
            ctx->pc = 0x215A54u;
            goto label_215a54;
        }
    }
    ctx->pc = 0x215900u;
    // 0x215900: 0x224102b  sltu        $v0, $s1, $a0
    ctx->pc = 0x215900u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_215904:
    // 0x215904: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x215904u;
    {
        const bool branch_taken_0x215904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x215904) {
            ctx->pc = 0x215908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215904u;
            // 0x215908: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215970u;
            goto label_215970;
        }
    }
    ctx->pc = 0x21590Cu;
    // 0x21590c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x21590cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x215910: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x215910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x215914: 0x222182b  sltu        $v1, $s1, $v0
    ctx->pc = 0x215914u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x215918: 0x50600015  beql        $v1, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x215918u;
    {
        const bool branch_taken_0x215918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x215918) {
            ctx->pc = 0x21591Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215918u;
            // 0x21591c: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215970u;
            goto label_215970;
        }
    }
    ctx->pc = 0x215920u;
    // 0x215920: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x215920u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x215924: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x215924u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x215928: 0x1a00001d  blez        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x215928u;
    {
        const bool branch_taken_0x215928 = (GPR_S64(ctx, 16) <= 0);
        if (branch_taken_0x215928) {
            ctx->pc = 0x2159A0u;
            goto label_2159a0;
        }
    }
    ctx->pc = 0x215930u;
    // 0x215930: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x215930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x215934: 0x70182a  slt         $v1, $v1, $s0
    ctx->pc = 0x215934u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x215938: 0x14600046  bnez        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x215938u;
    {
        const bool branch_taken_0x215938 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21593Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215938u;
        // 0x21593c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215938) {
            ctx->pc = 0x215A54u;
            goto label_215a54;
        }
    }
    ctx->pc = 0x215940u;
    // 0x215940: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x215940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x215944: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x215944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215948: 0xd03023  subu        $a2, $a2, $s0
    ctx->pc = 0x215948u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x21594c: 0xc049522  jal         func_125488
    ctx->pc = 0x21594Cu;
    SET_GPR_U32(ctx, 31, 0x215954u);
    ctx->pc = 0x215950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21594Cu;
    // 0x215950: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x21594Cu, 0x215954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215954u;
label_215954:
    // 0x215954: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x215954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x215958: 0x3b02023  subu        $a0, $sp, $s0
    ctx->pc = 0x215958u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
    // 0x21595c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x21595cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215960: 0xc049522  jal         func_125488
    ctx->pc = 0x215960u;
    SET_GPR_U32(ctx, 31, 0x215968u);
    ctx->pc = 0x215964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215960u;
    // 0x215964: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x215960u, 0x215968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215968u;
label_215968:
    // 0x215968: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x215968u;
    {
        const bool branch_taken_0x215968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x215968) {
            ctx->pc = 0x2159B0u;
            goto label_2159b0;
        }
    }
    ctx->pc = 0x215970u;
label_215970:
    // 0x215970: 0x223102b  sltu        $v0, $s1, $v1
    ctx->pc = 0x215970u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x215974: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x215974u;
    {
        const bool branch_taken_0x215974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x215978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215974u;
        // 0x215978: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215974) {
            ctx->pc = 0x215A54u;
            goto label_215a54;
        }
    }
    ctx->pc = 0x21597Cu;
    // 0x21597c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x21597cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x215980: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x215980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x215984: 0x222182b  sltu        $v1, $s1, $v0
    ctx->pc = 0x215984u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x215988: 0x50600032  beql        $v1, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x215988u;
    {
        const bool branch_taken_0x215988 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x215988) {
            ctx->pc = 0x21598Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215988u;
            // 0x21598c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215A54u;
            goto label_215a54;
        }
    }
    ctx->pc = 0x215990u;
    // 0x215990: 0x2221823  subu        $v1, $s1, $v0
    ctx->pc = 0x215990u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x215994: 0x24700004  addiu       $s0, $v1, 0x4
    ctx->pc = 0x215994u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x215998: 0x1e00002e  bgtz        $s0, . + 4 + (0x2E << 2)
    ctx->pc = 0x215998u;
    {
        const bool branch_taken_0x215998 = (GPR_S64(ctx, 16) > 0);
        ctx->pc = 0x21599Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215998u;
        // 0x21599c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215998) {
            ctx->pc = 0x215A54u;
            goto label_215a54;
        }
    }
    ctx->pc = 0x2159A0u;
label_2159a0:
    // 0x2159a0: 0x8a220003  lwl         $v0, 0x3($s1)
    ctx->pc = 0x2159a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x2159a4: 0x9a220000  lwr         $v0, 0x0($s1)
    ctx->pc = 0x2159a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x2159a8: 0xaba20003  swl         $v0, 0x3($sp)
    ctx->pc = 0x2159a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2159ac: 0xbba20000  swr         $v0, 0x0($sp)
    ctx->pc = 0x2159acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_2159b0:
    // 0x2159b0: 0xc07f656  jal         func_1FD958
    ctx->pc = 0x2159B0u;
    SET_GPR_U32(ctx, 31, 0x2159B8u);
    ctx->pc = 0x2159B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2159B0u;
    // 0x2159b4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD958u, 0x2159B0u, 0x2159B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2159B8u;
label_2159b8:
    // 0x2159b8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2159b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2159bc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2159bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2159c0: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2159C0u;
    {
        const bool branch_taken_0x2159c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2159C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2159C0u;
        // 0x2159c4: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2159c0) {
            ctx->pc = 0x215A00u;
            goto label_215a00;
        }
    }
    ctx->pc = 0x2159C8u;
    // 0x2159c8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2159C8u;
    {
        const bool branch_taken_0x2159c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2159CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2159C8u;
        // 0x2159cc: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2159c8) {
            ctx->pc = 0x2159E8u;
            goto label_2159e8;
        }
    }
    ctx->pc = 0x2159D0u;
    // 0x2159d0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2159d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2159d4: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2159D4u;
    {
        const bool branch_taken_0x2159d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2159D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2159D4u;
        // 0x2159d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2159d4) {
            ctx->pc = 0x215A18u;
            goto label_215a18;
        }
    }
    ctx->pc = 0x2159DCu;
    // 0x2159dc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2159DCu;
    {
        const bool branch_taken_0x2159dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2159E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2159DCu;
        // 0x2159e0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2159dc) {
            ctx->pc = 0x215A58u;
            goto label_215a58;
        }
    }
    ctx->pc = 0x2159E4u;
    // 0x2159e4: 0x0  nop
    ctx->pc = 0x2159e4u;
    // NOP
label_2159e8:
    // 0x2159e8: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2159E8u;
    {
        const bool branch_taken_0x2159e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2159ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2159E8u;
        // 0x2159ec: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2159e8) {
            ctx->pc = 0x215A50u;
            goto label_215a50;
        }
    }
    ctx->pc = 0x2159F0u;
    // 0x2159f0: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2159F0u;
    {
        const bool branch_taken_0x2159f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2159F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2159F0u;
        // 0x2159f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2159f0) {
            ctx->pc = 0x215A50u;
            goto label_215a50;
        }
    }
    ctx->pc = 0x2159F8u;
    // 0x2159f8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2159F8u;
    {
        const bool branch_taken_0x2159f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2159FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2159F8u;
        // 0x2159fc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2159f8) {
            ctx->pc = 0x215A58u;
            goto label_215a58;
        }
    }
    ctx->pc = 0x215A00u;
label_215a00:
    // 0x215a00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x215a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215a04: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x215a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x215a08: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x215A08u;
    {
        const bool branch_taken_0x215a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A08u;
        // 0x215a0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215a08) {
            ctx->pc = 0x215A50u;
            goto label_215a50;
        }
    }
    ctx->pc = 0x215A10u;
    // 0x215a10: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x215A10u;
    {
        const bool branch_taken_0x215a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A10u;
        // 0x215a14: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215a10) {
            ctx->pc = 0x215A2Cu;
            goto label_215a2c;
        }
    }
    ctx->pc = 0x215A18u;
label_215a18:
    // 0x215a18: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x215a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215a1c: 0x30420048  andi        $v0, $v0, 0x48
    ctx->pc = 0x215a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)72);
    // 0x215a20: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x215A20u;
    {
        const bool branch_taken_0x215a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A20u;
        // 0x215a24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215a20) {
            ctx->pc = 0x215A50u;
            goto label_215a50;
        }
    }
    ctx->pc = 0x215A28u;
    // 0x215a28: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x215a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_215a2c:
    // 0x215a2c: 0xc0856d8  jal         func_215B60
    ctx->pc = 0x215A2Cu;
    SET_GPR_U32(ctx, 31, 0x215A34u);
    ctx->pc = 0x215A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215A2Cu;
    // 0x215a30: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215B60u, 0x215A2Cu, 0x215A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215A34u;
label_215a34:
    // 0x215a34: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x215A34u;
    {
        const bool branch_taken_0x215a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x215a34) {
            ctx->pc = 0x215A38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215A34u;
            // 0x215a38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215A54u;
            goto label_215a54;
        }
    }
    ctx->pc = 0x215A3Cu;
    // 0x215a3c: 0x54510005  bnel        $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x215A3Cu;
    {
        const bool branch_taken_0x215a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x215a3c) {
            ctx->pc = 0x215A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215A3Cu;
            // 0x215a40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215A54u;
            goto label_215a54;
        }
    }
    ctx->pc = 0x215A44u;
    // 0x215a44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x215A44u;
    {
        const bool branch_taken_0x215a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A44u;
        // 0x215a48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215a44) {
            ctx->pc = 0x215A54u;
            goto label_215a54;
        }
    }
    ctx->pc = 0x215A4Cu;
    // 0x215a4c: 0x0  nop
    ctx->pc = 0x215a4cu;
    // NOP
label_215a50:
    // 0x215a50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x215a50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_215a54:
    // 0x215a54: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x215a54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_215a58:
    // 0x215a58: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x215a58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x215a5c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x215a5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x215a60: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x215a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x215a64: 0x3e00008  jr          $ra
    ctx->pc = 0x215A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A64u;
        // 0x215a68: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215A64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215A6Cu;
}
