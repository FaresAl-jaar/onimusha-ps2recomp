#include <cstdio>
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

// Function: sub_00206778
// Address: 0x206778 - 0x2067d0
void sub_00206778_0x206778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206778_0x206778");
#endif

    switch (ctx->pc) {
        case 0x206798u: goto label_206798;
        case 0x2067a8u: goto label_2067a8;
        case 0x2067b0u: goto label_2067b0;
        default: break;
    }

    ctx->pc = 0x206778u;

    // 0x206778: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x206778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20677c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20677cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x206780: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x206780u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206784: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x206784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x206788: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x206788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20678c: 0x8e1101c8  lw          $s1, 0x1C8($s0)
    ctx->pc = 0x20678cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 456)));
    // 0x206790: 0xc04bba2  jal         func_12EE88
    ctx->pc = 0x206790u;
    SET_GPR_U32(ctx, 31, 0x206798u);
    ctx->pc = 0x206794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206790u;
    // 0x206794: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE88u, 0x206790u, 0x206798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206798u;
label_206798:
    // 0x206798: 0x3c010066  lui         $at, 0x66
    ctx->pc = 0x206798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)102 << 16));
    // 0x20679c: 0xdc257490  ld          $a1, 0x7490($at)
    ctx->pc = 0x20679cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x667490u));
    { static uint64_t last[3]={}; static bool first=true; static uint32_t lines=0, hits=0; ++hits; const uint64_t cur[3]={(uint64_t)(GPR_U64(ctx,2)),(uint64_t)(GPR_U64(ctx,5)),(uint64_t)(GPR_U32(ctx,17)),}; bool chg=first; for(int i=0;i<3;++i) chg = chg || cur[i]!=last[i]; if (chg && lines<10) { ++lines; first=false; for(int i=0;i<3;++i) last[i]=cur[i]; fprintf(stderr,"[px dpa] hit=%u " "lito=0x%llx a1=0x%llx s1=%llu" "\n",hits,(unsigned long long)cur[0],(unsigned long long)cur[1],(unsigned long long)cur[2]); } }
    // 0x2067a0: 0xc04ba66  jal         func_12E998
    ctx->pc = 0x2067A0u;
    SET_GPR_U32(ctx, 31, 0x2067A8u);
    ctx->pc = 0x2067A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2067A0u;
    // 0x2067a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E998u, 0x2067A0u, 0x2067A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2067A8u;
label_2067a8:
    { static uint64_t last[1]={}; static bool first=true; static uint32_t lines=0, hits=0; ++hits; const uint64_t cur[1]={(uint64_t)(GPR_U64(ctx,2)),}; bool chg=first; for(int i=0;i<1;++i) chg = chg || cur[i]!=last[i]; if (chg && lines<10) { ++lines; first=false; for(int i=0;i<1;++i) last[i]=cur[i]; fprintf(stderr,"[px dpb] hit=%u " "mul=0x%llx" "\n",hits,(unsigned long long)cur[0]); } }
    // 0x2067a8: 0xc04bbce  jal         func_12EF38
    ctx->pc = 0x2067A8u;
    SET_GPR_U32(ctx, 31, 0x2067B0u);
    ctx->pc = 0x2067ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2067A8u;
    // 0x2067ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EF38u, 0x2067A8u, 0x2067B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2067B0u;
label_2067b0:
    { static uint64_t last[1]={}; static bool first=true; static uint32_t lines=0, hits=0; ++hits; const uint64_t cur[1]={(uint64_t)(GPR_U64(ctx,2)),}; bool chg=first; for(int i=0;i<1;++i) chg = chg || cur[i]!=last[i]; if (chg && lines<10) { ++lines; first=false; for(int i=0;i<1;++i) last[i]=cur[i]; fprintf(stderr,"[px dpc] hit=%u " "toli=0x%llx" "\n",hits,(unsigned long long)cur[0]); } }
    // 0x2067b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2067b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2067b4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2067b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2067b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2067b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2067bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2067bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2067c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2067c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2067c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2067c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2067c8: 0x8081d5a  j           func_207568
    ctx->pc = 0x2067C8u;
    ctx->pc = 0x2067CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2067C8u;
    // 0x2067cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207568u;
    sub_00207568_0x207568(rdram, ctx, runtime); return;
    ctx->pc = 0x2067D0u;
}
